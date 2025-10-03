#ifndef NETWORKWORK_H
#define NETWORKWORK_H

#include <QObject>
#include <QStringDecoder>
#include<QMap>
class NetWorkWork : public QObject
{
    Q_OBJECT
public:
    explicit NetWorkWork(QObject *parent = nullptr);
   // QMap<QString, float> getSensorData()const { return numberData; }
    // float getSensorValue(const QString &key) const { return numberData.value(key, 0); }
    // QString getStringValue(const QString &key)const{return strnumber.value(key,0);}
public slots:
     void processData(QByteArray rawData, QString encoding);//需要原始数据和编码

signals:
    void dataProcess(QString data);//返回数据
    void errorOcurred(QString error);
    void sensorDataReady(QMap<QString, float> numberData,QMap<QString,QString>strnumber);
private:
    QString analysisData(QString data);//解析数据
    QMap<QString, float> numberData;
    QMap<QString,QString>strnumber;

};

#endif // NETWORKWORK_H
