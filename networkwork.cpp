#include "networkwork.h"
#include <qdebug.h>
#include<QThread>
NetWorkWork::NetWorkWork(QObject *parent)
    : QObject{parent}
{//
      //qDebug() << "NetworkWorker构造函数在线程:"<< QThread::currentThread();
}

void NetWorkWork::processData(QByteArray rawData, QString encoding)
{
    //qDebug() << "processData 在线程:" << QThread::currentThread();//确保我采用的元对象调用线程触发
    if(rawData.isEmpty()){
        emit errorOcurred("错误，数据为空");
        return;
    }
    QString strData;
   try {
        QStringDecoder decorder(QStringDecoder::Utf8);
       strData=decorder.decode(rawData);//解码为字符串
        if(decorder.hasError()){
           emit errorOcurred("解码失败");
            return;
        }
    } catch (const std::exception &e) {
       emit errorOcurred(QString("异常处理%1").arg(e.what()));
        return;
    }
    QString aisData=analysisData(strData);
    emit dataProcess(aisData);

}

QString NetWorkWork::analysisData(QString data)
{

    if(!data.startsWith("Params")) {
        return data;  // 如果不是传感器数据，直接返回
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
    emit sensorDataReady(numberData,strnumber);
    return data;
}
