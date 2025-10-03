#ifndef MYMODBUS_H
#define MYMODBUS_H

#include <QMainWindow>
#include<QSerialPort>
#include<QModbusDataUnit>
#include<QModbusClient>
#include<QModbusServer>
#include<QModbusRtuSerialServer>
#include<QModbusRtuSerialClient>
#include<QModbusRtuSerialMaster>
#include<QModbusRtuSerialSlave>
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

private slots:
    void on_MasterOrSlave_currentIndexChanged(int index);

    void on_mType_currentIndexChanged(int index);

private:
    Ui::MyModBus *ui;
};

#endif // MYMODBUS_H
