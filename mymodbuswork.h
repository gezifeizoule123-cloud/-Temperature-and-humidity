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

private:
    QModbusRtuSerialMaster* m_Master;
    QModbusRtuSerialSlave *m_Slave;

signals:
};

#endif // MYMODBUSWORK_H
