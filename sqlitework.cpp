#include "sqlitework.h"
#include "databasepicture.h"
#include <qdatetime.h>
#include <qsqlquery.h>
#include<QFileDialog>
#include<QTextStream>
#include <qsqlrecord.h>
SqliteWork::SqliteWork(QObject *parent)
    : QObject{parent}
{

    // qDebug() << "sqliteWork构造函数在线程:"<< QThread::currentThread();
}

void SqliteWork::receiveInsert(float Stemp, float Shumi, float Slight, float Ssoil, float Smq2, float Srain)
{
    QSqlQuery query(QSqlDatabase::database("connectionB"));
    query.prepare("INSERT INTO qtdata (CurrenTime, temp, humi, light, soil, mq2, rain) VALUES (?, ?, ?, ?, ?, ?, ?)");

    query.addBindValue(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
    query.addBindValue(Stemp);
    query.addBindValue(Shumi);
    query.addBindValue(Slight);
    query.addBindValue(Ssoil);
    query.addBindValue(Smq2);
    query.addBindValue(Srain);
    if(!query.exec())
    {
       qDebug()<<"插入失败";
    }
    emit  isOkInser(true);

}

void SqliteWork::clearData()
{
     //qDebug() << "clearData在线程:" << QThread::currentThread();
    QSqlQuery query(QSqlDatabase::database("connectionB"));
    query.prepare("DELETE FROM qtdata;");
    if(query.exec()) {
       // qDebug() << "清除成功";
        emit clearFinished(true);
    } else {
       // qDebug() << "清除失败:";
        emit clearFinished(false);
    }
}

void SqliteWork::initConnect()
{
    if (!m_db.isOpen()) {
        // 在工作线程中创建连接
        m_db = QSqlDatabase::addDatabase("QSQLITE","connectionB");
        m_db.setDatabaseName("Stock.db");

        if (!m_db.open()) {
          ///  qDebug() << "工作线程数据库打开失败:";
        } else {
          //  qDebug() << "工作线程数据库打开成功 - 线程:" << QThread::currentThread();
        }
    }
}

void SqliteWork::fileOut(const QString&filename)
{
    qDebug()<<"this is fileOut Thread";
    QFile file(filename);
    file.open(QIODevice::WriteOnly|QIODevice::Text);

    QTextStream out(&file);
    out.setEncoding(QStringConverter::Utf8);
  QSqlQuery query(QSqlDatabase::database("connectionB"));
    query.exec("select *from qtdata");
  QStringList filenames;
    QSqlRecord record=query.record();
  for(int i=0;i<record.count();i++){
        filenames<<record.fieldName(i);
  }
  out<<filenames.join(",")<<"\n";


  qDebug()<<filenames;
  while(query.next()){
      QStringList row;
      for(int i=0;i<filenames.count();i++){
          row<<query.value(i).toString();
          qDebug()<<"row";
      }
      out<<row.join(",")+"\n";

  }
  file.close();


 }

