#include "myserialwork.h"
#include <qdatetime.h>

MySerialWork::MySerialWork(QObject *parent)
    : QSerialPort{parent}
{
//标记此处的学习记录,槽函数不归构造管理，只是存放，此处构造在主线程
    connect(this,&MySerialWork::readyRead,this,&MySerialWork::readData);

}

QString MySerialWork::analysisData(QString data)
{
    if(!data.startsWith("Params")){
        return data;
    }
    numberData.clear();
    strnumber.clear();
    QString str = data.mid(data.indexOf("temp:") + 5);
    str = str.left(str.indexOf(";"));  // 截取到第一个分号
    numberData["temp"] = str.toFloat();
    strnumber["temp"]=str;

    // 表一数据 - 湿度
    QString st2 = data.mid(data.indexOf("humi:") + 5);
    st2 = st2.left(st2.indexOf(";"));
    numberData["humi"] = st2.toFloat();
    strnumber["humi"]=st2;

    // 表一数据 - 光照
    QString st3 = data.mid(data.indexOf("light:") + 6);
    st3 = st3.left(st3.indexOf(";"));
    numberData["light"] = st3.toFloat();
    strnumber["light"]=st3;

    // 表二数据 - 土壤湿度
    QString st4 = data.mid(data.indexOf("soil:") + 5);
    st4 = st4.left(st4.indexOf(";"));
    numberData["soil"] = st4.toFloat();
    strnumber["soil"]=st4;

    // 表二数据 - 有害气体
    QString st5 = data.mid(data.indexOf("mq2:") + 4);
    st5 = st5.left(st5.indexOf(";"));
    numberData["mq2"] = st5.toFloat();
    strnumber["mq2"]=st5;

    // 表二数据 - 雨滴
    QString st6 = data.mid(data.indexOf("rain:") + 5);
    st6 = st6.left(st6.indexOf("}"));
    numberData["rain"] = st6.toFloat();
    strnumber["rain"]=st6;
     qDebug() << "解析结果 - 温度:" << strnumber["temp"] << "湿度:" << strnumber["humi"];
    emit sendMainDisplay(numberData,strnumber);
    return data;
}

void MySerialWork::startThread(Settings s)
{
    this->setPortName(s.name);
    this->setBaudRate(s.baudRate);
    this->setDataBits(s.dataBits);
    this->setStopBits(s.stopBits);
    this->setParity(s.parity);
    this->setFlowControl(s.flowControl);
    if(open(QIODevice::ReadWrite)){
        emit signalStart();
    }
      else{

        emit signalStop(1);
    }
}

void MySerialWork::stopThread()
{
    if(isOpen()){
        close();
    }
    emit signalStop(1);
}

void MySerialWork::SendWrite(QByteArray data)
{
    if(!data.isEmpty()){

        write(data);
    }
}

void MySerialWork::readData()
{
    QString data=readAll();
        QString s=analysisData(data);
         QString strdata = s;
            QString thisTime = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss.zz");
            QString displayData = "Receive->" + thisTime + "::" + strdata+"\n";
            emit DataHandleOk(displayData);



}
