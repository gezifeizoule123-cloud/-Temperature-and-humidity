#include "mymodbus.h"
#include "ui_mymodbus.h"
#include <qthread.h>
#include<QMessageBox>
MyModBus::MyModBus(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyModBus)
{
    ui->setupUi(this);
    initUi();
    initModBusThread();
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
    connect(this,&MyModBus::createModBus,m_ModBusWork,&MyModBusWork::createConnect);
    connect(this,&MyModBus::signalStop,m_ModBusWork,&MyModBusWork::doStop);
    connect(m_ModBusWork,&MyModBusWork::signalStop,this,[=](bool isStop){
        if(isStop){
            qDebug()<<"Ok";
            QMessageBox::information(0,"tip","已经断开连接");
            if(m_ModBusThread&&m_ModBusThread->isRunning()){
                m_ModBusThread->quit();
                m_ModBusThread->wait();
                delete m_ModBusThread;
                delete m_ModBusWork;
                m_ModBusThread=nullptr;
                m_ModBusWork=nullptr;

            }
        }

    });
    connect(m_ModBusWork,&MyModBusWork::signalreceive,this,&MyModBus::ReceiveMessage);
    connect(this,&MyModBus::signalDoRequest,m_ModBusWork,&MyModBusWork::doRequest);
    connect(this,&MyModBus::signalSlaveToDatabase,m_ModBusWork,&MyModBusWork::SlaveToDatabase);
    connect(m_ModBusWork,&MyModBusWork::sendMainDisplay,[this](QMap<QString, float> numberData,QMap<QString,QString>strnumber){
    giveDBandDisplay( numberData,strnumber);
    });
    connect(this,&MyModBus::SendModBusSlave,m_ModBusWork,&MyModBusWork::SendModbusSlave);

    connect(this,&MyModBus::changeSlaveData,m_ModBusWork,&MyModBusWork::changeModBusSlave);
    connect(this,&MyModBus::signalBtnSend,this,&MyModBus::SendModbus);
    m_ModBusThread->start();

}

void MyModBus::creatModbus()
{
    qDebug()<<"Mymodbus::creatModbebus()";
    if(!m_ModBusThread||!m_ModBusWork){
        initModBusThread();
    }
    Settings s;
    if(ui->MasterOrSlave->currentText()=="Master"){
        if(ui->mType->currentText()=="TCP"){
            s.isTCP=true;
        }else{
            s.isTCP=false;

        }
        s.isMaster=true;
    }else{
        if(ui->mType->currentText()=="TCP"){
            s.isTCP=true;

        }else{
            s.isTCP=false;

        }
     s.isMaster=false;
    }
    if(!ui->mIP_COM->text().isEmpty()){
        s.address=ui->mIP_COM->text();

    }
    if(!ui->m_Port->text().isEmpty()){
        s.port=ui->m_Port->text().toUInt();
    }
    s.SlaveAddress=ui->mAddr->text().toInt();
    s.PortName=ui->portName->currentText();
    s.BaudRate=(QSerialPort::BaudRate)ui->baudRate->currentData().toUInt();
    s.DataBits=(QSerialPort::DataBits)ui->dataBits->currentData().toUInt();
    s.StopBits=(QSerialPort::StopBits)ui->stopBits->currentData().toUInt();
    s.FlowControl=(QSerialPort::FlowControl)ui->flowControl->currentData().toUInt();
    s.parity=(QSerialPort::Parity)ui->parity->currentData().toInt();
    s.RegisterType=(QModbusDataUnit::RegisterType)ui->sTable->currentData().toUInt();
    emit createModBus(s);
}

void MyModBus::stopModBus()
{
//-------------------------------
    emit signalStop();


}

void MyModBus::on_MasterOrSlave_currentIndexChanged(int index)
{
//暂无

}


void MyModBus::on_mType_currentIndexChanged(int index)
{
    if(ui->mType->currentIndex()!=0){
        ui->groupBox->setEnabled(false);
        ui->m_Port->setEnabled(true);
    }else{
    ui->groupBox->setEnabled(true);
    ui->m_Port->setEnabled(false);
    }
}

void MyModBus::ReceiveMessage(const QString &address, QModbusDataUnit::RegisterType RegisterType)
{

   /* if(RegisterType==QModbusDataUnit::Coils){

    }else */if(RegisterType==QModbusDataUnit::HoldingRegisters){
        if(address.contains("}")){
           m_data="Params{"+m_data+address;
         qDebug() << "完整数据:" << m_data;
            emit signalReceive(m_data);
           emit signalSlaveToDatabase(m_data);
           m_data.clear();
        }
        else if(address!="暂无数据"){
            m_data+=address;
             qDebug() << "拼接的数据:" << m_data;
        }
   }else{
       emit signalReceive(address);
   }



}

void MyModBus::doRequest()
{       Settings s;
    s.SlaveAddress=ui->mAddr->text().toInt();
     s.RegisterType=(QModbusDataUnit::RegisterType)ui->sTable->currentData().toUInt();
    emit signalDoRequest(s);
}

void MyModBus::SendModbus(const QString &data)
{
    Settings s;
    s.RegisterType=(QModbusDataUnit::RegisterType)ui->sTable->currentData().toUInt();
    if(ui->MasterOrSlave->currentText()=="Master"){
        qDebug()<<"发送按钮触发";
        emit SendModBusSlave(data,ui->mAddr->text().toUInt(),s);

    }else{
        Settings s;
        s.RegisterType=(QModbusDataUnit::RegisterType)ui->sTable->currentData().toUInt();
        emit changeSlaveData(data,s);

    }

}

