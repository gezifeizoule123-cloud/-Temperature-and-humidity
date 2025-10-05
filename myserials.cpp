#include "myserials.h"
#include "ui_myserials.h"
#include <qthread.h>


MySerials::MySerials(QWidget *parent)
    : QWidget(parent),m_serialsWork(nullptr)
    , ui(new Ui::MySerials)
{
    ui->setupUi(this);
    ui->recvTextEdit->setEnabled(false);
    qRegisterMetaType<MySerialWork::Settings>("MySerialWork::Settings");
    initUi();
    initSerialThread();

}

MySerials::~MySerials()
{
    delete ui;
    if(m_serialThread->isRunning()&&m_serialThread){
        m_serialThread->quit();
        m_serialThread->wait(3000);
        if(m_serialThread->isRunning()){
            m_serialThread->terminate();
            m_serialThread->wait();
        }
    }
    delete m_serialsWork;
    m_serialsWork=nullptr;

}

void MySerials::closeEvent(QCloseEvent *event)
{
    emit isclose();
    event->accept();

}

void MySerials::initUi()
{
    for(int i=1;i<=10;i++){
        ui->portName->addItem(QString("COM%1").arg(i));
    }
    ui->baudRate->addItem("1200" , QSerialPort::Baud1200  );
    ui->baudRate->addItem("2400" , QSerialPort::Baud2400  );
    ui->baudRate->addItem("4800" , QSerialPort::Baud4800  );
    ui->baudRate->addItem("9600" , QSerialPort::Baud9600  );
    ui->baudRate->addItem("19200" , QSerialPort::Baud19200  );


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
    ui->timelineEdit->setText("1000");
    connect(&m_timer,&QTimer::timeout,this,&MySerials::timeOut);


}

void MySerials::on_openButton_clicked()
{
    if(ui->openButton->text()=="打开串口"){
        MySerialWork::Settings s;
        s.name=ui->portName->currentText();
        s.baudRate=(MySerialWork::BaudRate)ui->baudRate->currentData().toUInt();
        s.dataBits=(MySerialWork::DataBits)ui->dataBits->currentData().toUInt();
        s.stopBits=(MySerialWork::StopBits)ui->stopBits->currentData().toUInt();
        s.flowControl=(MySerialWork::FlowControl)ui->flowControl->currentData().toUInt();
        s.parity= (QSerialPort::Parity)  ui->parity->currentData().toInt();
        emit signalStart(s);
    }
    else{
        emit signalStop();
    }
}


void MySerials::on_checkBox_stateChanged(int arg1)
{
    if(arg1==Qt::Checked){
        m_timer.start();
    }else if(arg1==Qt::Unchecked){
        m_timer.stop();
    }
}


void MySerials::on_sendButton_clicked()
{
    QString s=ui->sendTextEdit->toPlainText();
    QByteArray data=s.toUtf8();
    emit sendData(data);
}

void MySerials::timeOut()
{
    on_sendButton_clicked();
}

void MySerials::isStop(int i)
{
    if(i==1){
        ui->openButton->setText("打开串口");
         ui->groupBox->setEnabled(true);
    }

}

void MySerials::isStart()
{
    ui->openButton->setText("关闭串口");
    ui->groupBox->setEnabled(false);
}

void MySerials::receiveData(QString data)
{
    ui->recvTextEdit->appendPlainText(data);
}

void MySerials::sendCtr(QString s)
{
    QByteArray arr=s.toUtf8();
    emit sendData(arr);
}



void MySerials::initSerialThread()
{
    m_serialThread=new  QThread (this);
    m_serialsWork=new MySerialWork;
    m_serialsWork->moveToThread(m_serialThread);
    connect(this,&MySerials::signalStart,m_serialsWork,&MySerialWork::startThread);
    connect(m_serialsWork,&MySerialWork::signalStop,this,&MySerials::isStop);
    connect(this,&MySerials::signalStop,m_serialsWork,&MySerialWork::stopThread);
    connect(this,&MySerials::sendData,m_serialsWork,&MySerialWork::SendWrite);
    connect(m_serialsWork,&MySerialWork::signalStart,this,&MySerials::isStart);
    connect(m_serialsWork,&MySerialWork::DataHandleOk,this,&MySerials::receiveData);
    connect(m_serialsWork,&MySerialWork::sendMainDisplay,this,[this](QMap<QString, float> numberData,QMap<QString,QString>strnumber){
         //qDebug() << "收到sendMainDisplay信号";
        emit giveDBandDisplay( numberData,strnumber);
    });
    connect(m_serialsWork,&MySerialWork::writeOk,this,[this]{
        ui->recvTextEdit->appendPlainText(ui->sendTextEdit->toPlainText());
        ui->sendTextEdit->clear();
    });
    m_serialThread->start();
}
