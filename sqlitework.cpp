#include "sqlitework.h"
#include <qdatetime.h>
#include <qsqlquery.h>

SqliteWork::SqliteWork(QObject *parent)
    : QObject{parent}
{

     qDebug() << "sqliteWork构造函数在线程:"<< QThread::currentThread();
}

void SqliteWork::receiveInsert(float Stemp, float Shumi, float Slight, float Ssoil, float Smq2, float Srain)
{
    QSqlQuery query(QSqlDatabase::database("connectionB"));
    query.prepare("insert into qtdata values (?,?,?,?,?,?,?,?);");
    query.addBindValue(NULL);
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
     qDebug() << "clearData在线程:" << QThread::currentThread();
    QSqlQuery query(QSqlDatabase::database("connectionB"));
    query.prepare("DELETE FROM qtdata;");
    if(query.exec()) {
        qDebug() << "清除成功";
        emit clearFinished(true);
    } else {
        qDebug() << "清除失败:";
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
            qDebug() << "工作线程数据库打开失败:";
        } else {
            qDebug() << "工作线程数据库打开成功 - 线程:" << QThread::currentThread();
        }
    }
}
