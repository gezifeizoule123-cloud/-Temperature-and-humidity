#ifndef MODBUSSETTINGS_H
#define MODBUSSETTINGS_H
#include <qmodbusdataunit.h>
#include <qobject.h>
#include<QSerialPort>
struct Settings
{
    QString PortName;
    QSerialPort::Parity parity;
    QSerialPort::DataBits DataBits;
    QSerialPort::StopBits StopBits;
    QSerialPort::FlowControl FlowControl ;
    QSerialPort::BaudRate  BaudRate ;
    QModbusDataUnit::RegisterType RegisterType;
    int  SlaveAddress;
    QString address;
    int port;
    bool isTCP;
    bool isMaster;
};
#endif // MODBUSSETTINGS_H
