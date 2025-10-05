#ifndef MYSERIALWORK_H
#define MYSERIALWORK_H

#include <QObject>
#include <qserialport.h>
#include<QMap>

class MySerialWork :  public QSerialPort
{
    Q_OBJECT
public:
    explicit MySerialWork(QObject *parent = nullptr);
    struct Settings
    {
        QString name;//端口名称COM1、COM2
        BaudRate baudRate;//波特率
        DataBits dataBits;//数据位
        Parity parity;//奇偶校验
        StopBits stopBits;//停止位
        FlowControl flowControl;//流控制

    };
private:
    QByteArray m_buffer;
    QString analysisData(QString data);//解析数据
    QMap<QString, float> numberData;
    QMap<QString,QString>strnumber;
public slots:
    void startThread(Settings s);
    void stopThread();
    void SendWrite(QByteArray data);
    void readData();
signals:
    void signalStart();
    void signalStop(int isclose);//1表示关闭成功
    void DataHandleOk(QString s);
    void sendMainDisplay(QMap<QString, float> numberData,QMap<QString,QString>strnumber);
    void writeOk();
};

#endif // MYSERIALWORK_H
