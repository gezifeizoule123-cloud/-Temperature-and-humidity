#include "mymodbus.h"
#include "ui_mymodbus.h"
#include <qthread.h>

MyModBus::MyModBus(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyModBus)
{
    ui->setupUi(this);
    initUi();
}

MyModBus::~MyModBus()
{
    delete ui;
    if(m_ModBusThread&&m_ModBusThread->isRunning()){
        m_ModBusThread->quit();
        m_ModBusThread->wait(3000);
        if(m_ModBusThread->isRunning()){
            m_ModBusThread->terminate();
            m_ModBusThread->wait();
        }
    }
    delete m_ModBusWork;
    m_ModBusWork=nullptr;
}

void MyModBus::initUi()
{
    ui->mType->addItem("SerialPort");
    ui->mType->addItem("TCP");
    ui->MasterOrSlave->addItem("Master");
    ui->MasterOrSlave->addItem("Slave");
    //从站表类型下拉框选项
    ui->sTable->addItem( "Coils" ,QModbusDataUnit::Coils );
    ui->sTable->addItem( "DiscreteInputs" ,QModbusDataUnit::DiscreteInputs );
    ui->sTable->addItem( "InputRegisters" ,QModbusDataUnit::InputRegisters );
    ui->sTable->addItem( "HoldingRegisters" ,QModbusDataUnit::HoldingRegisters );

    for(int i=1;i<=10;++i)
    {
        ui->portName->addItem(QString("COM%1").arg(i));
    }


    ui->baudRate->addItem("1200" , QSerialPort::Baud1200  );
    ui->baudRate->addItem("2400" , QSerialPort::Baud2400  );
    ui->baudRate->addItem("4800" , QSerialPort::Baud4800  );
    ui->baudRate->addItem("9600" , QSerialPort::Baud9600  );
    ui->baudRate->addItem("19200" , QSerialPort::Baud19200  );
    ui->baudRate->addItem("38400",QSerialPort:: Baud38400);
    ui->baudRate->addItem("57600",QSerialPort:: Baud57600);
    ui->baudRate->addItem("115200",QSerialPort:: Baud115200);

    ui->dataBits->addItem("8",QSerialPort::Data8);
    ui->dataBits->addItem("7",QSerialPort::Data7);
    ui->dataBits->addItem("6",QSerialPort::Data6);
    ui->dataBits->addItem("5",QSerialPort::Data5);


    ui->parity->addItem("None" ,  QSerialPort::NoParity);
    ui->parity->addItem("Even" ,  QSerialPort::EvenParity);
    ui->parity->addItem("Odd" ,  QSerialPort::OddParity);


    ui->stopBits->addItem("1", QSerialPort::OneStop);
    ui->stopBits->addItem("1.5", QSerialPort::OneAndHalfStop);
    ui->stopBits->addItem("2", QSerialPort::TwoStop);


    ui->flowControl->addItem("None",QSerialPort::NoFlowControl);
    ui->flowControl->addItem("RTS/CTS",QSerialPort::HardwareControl);
    ui->flowControl->addItem("XON/XOFF",QSerialPort::SoftwareControl);


}

void MyModBus::initModBusThread()
{
    m_ModBusThread=new  QThread (this);
    m_ModBusWork=new  MyModBusWork ;
    m_ModBusWork->moveToThread(m_ModBusThread);
    //此处标记要写的内容-----------------------------------------

    m_ModBusThread->start();

}

void MyModBus::on_MasterOrSlave_currentIndexChanged(int index)
{
//暂无

}


void MyModBus::on_mType_currentIndexChanged(int index)
{
    if(ui->mType->currentIndex()!=0){
        ui->groupBox->setEnabled(false);
        ui->m_Port->setEnabled(false);
    }else{
    ui->groupBox->setEnabled(true);
    ui->m_Port->setEnabled(true);
    }
}

