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
        void doRequest();
    void SendModbus(const QString &data);
private slots:
    void on_MasterOrSlave_currentIndexChanged(int index);

    void on_mType_currentIndexChanged(int index);
    void ReceiveMessage(const QString &address, QModbusDataUnit::RegisterType RegisterType);



signals:
    void createModBus(const Settings &s);
    void signalStop();
    void signalReceive(const QString &address);
    void signalDoRequest(const Settings &s);
    void signalSlaveToDatabase(QString s);
    void giveDBandDisplay(QMap<QString, float> numberData,QMap<QString,QString>strnumber);
    void SendModBusSlave(const QString &data,int id,Settings s);
    void changeSlaveData(const QString &data,Settings s);
    void signalBtnSend(const QString &data);
private:
    Ui::MyModBus *ui;
    QThread *m_ModBusThread=nullptr;
    MyModBusWork *m_ModBusWork=nullptr;
    QString m_data;//暂存数据，拼接
};

#endif // MYMODBUS_H
