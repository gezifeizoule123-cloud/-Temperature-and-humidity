#ifndef MYMODBUS_H
#define MYMODBUS_H

#include "mymodbuswork.h"
#include <QMainWindow>
#include<QSerialPort>
#include<QModbusDataUnit>
#include<QModbusClient>
#include<QModbusServer>
#include<QModbusRtuSerialServer>
#include<QModbusRtuSerialClient>
#include<QModbusRtuSerialMaster>
#include<QModbusRtuSerialSlave>
#include"ModbusSettings.h"
namespace Ui {
class MyModBus;
}

class MyModBus : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyModBus(QWidget *parent = nullptr);
    ~MyModBus();
    void initUi();
    void  initModBusThread();
public slots:
    void creatModbus();
    void stopModBus();
private slots:
    void on_MasterOrSlave_currentIndexChanged(int index);

    void on_mType_currentIndexChanged(int index);
signals:
    void createModBus(const Settings &s);

private:
    Ui::MyModBus *ui;
    QThread *m_ModBusThread;
    MyModBusWork *m_ModBusWork;
};

#endif // MYMODBUS_H
