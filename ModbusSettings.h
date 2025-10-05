#ifndef MODBUSSETTINGS_H
#define MODBUSSETTINGS_H
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
    QString address;
    int port;
    bool isTCP;
    bool isMaster;
};
#endif // MODBUSSETTINGS_H
