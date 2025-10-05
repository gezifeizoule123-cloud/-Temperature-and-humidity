#ifndef SQLITEWORK_H
#define SQLITEWORK_H

#include <QObject>
#include<QThread>
#include<QSqlDatabase>
class SqliteWork : public QObject
{
    Q_OBJECT
public:
    explicit SqliteWork(QObject *parent = nullptr);
      QSqlDatabase m_db;

public slots:
    void receiveInsert(float Stemp,float  Shumi,float  Slight,float  Ssoil,float  Smq2,float  Srain);
    void clearData();
    void initConnect();


signals:
    void isOkInser(bool t);
    void clearFinished(bool success);  // 清除完成信号

private:

};

#endif // SQLITEWORK_H
