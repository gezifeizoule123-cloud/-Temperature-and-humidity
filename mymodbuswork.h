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
class MyModBusWork : public QObject
{
    Q_OBJECT


public:
    explicit MyModBusWork(QObject *parent = nullptr);
public slots:
    void createConnect(const Settings &s);
    void  doStop();
    void doRequest(const Settings &s);
private:

    QModbusClient* m_Master;
    QModbusServer *m_Slave;

    QString anylisyData(int address, quint16 v, QModbusDataUnit::RegisterType RegisterType);

signals:
    void  signalStop(bool isStop);
    void signalreceive(const QString &address);
};

#endif // MYMODBUSWORK_H
