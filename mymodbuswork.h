#ifndef MYMODBUSWORK_H
#define MYMODBUSWORK_H

#include <QObject>
#include<QModbusClient>
#include<QModbusRtuSerialClient>
#include<QModbusRtuSerialMaster>
#include<QModbusRtuSerialSlave>
#include<QModbusTcpClient>
#include<QModbusTcpServer>
#include<QSerialPort>
#include"ModbusSettings.h"
#include<QMap>
class MyModBusWork : public QObject
{
    Q_OBJECT


public:
    explicit MyModBusWork(QObject *parent = nullptr);
public slots:
    void createConnect(const Settings &s);
    void  doStop();
    void doRequest(const Settings &s);
    void SlaveToDatabase(QString data);
    void SendModbusSlave(const QString &data, int id, Settings s);
    void changeModBusSlave(const QString &data,Settings s);
private:

    QModbusClient* m_Master;
    QModbusServer *m_Slave;

    QString anylisyData(int address, quint16 v, QModbusDataUnit::RegisterType RegisterType);
    QMap<QString, float> numberData;
    QMap<QString,QString>strnumber;

signals:
    void  signalStop(bool isStop);
    void signalreceive(const QString &address, QModbusDataUnit::RegisterType RegisterType );
    void sendMainDisplay(QMap<QString, float> numberData,QMap<QString,QString>strnumber);
};

#endif // MYMODBUSWORK_H
