#ifndef MYSERIALS_H
#define MYSERIALS_H

#include "myserialwork.h"
#include <QWidget>
#include <qserialport.h>
#include<QTimer>
#include<QThread>
namespace Ui {
class MySerials;
}

class MySerials : public QWidget
{
    Q_OBJECT

public:
    explicit MySerials(QWidget *parent = nullptr);
    ~MySerials();
    void closeEvent(QCloseEvent *event)override;
    void initUi();
    void initSerialThread();

private:
    Ui::MySerials *ui;
    QTimer m_timer;
    MySerialWork *m_serialsWork;
    QThread *m_serialThread;
signals:
    void isclose();
    void signalStart(MySerialWork::Settings);
    void signalStop();
    void sendData(QByteArray data);
    void giveDBandDisplay(QMap<QString, float> numberData,QMap<QString,QString>strnumber);
private slots:
    void on_openButton_clicked();
    void on_checkBox_stateChanged(int arg1);
    void on_sendButton_clicked();
    void timeOut();
    void isStop(int i);
    void isStart();
    void receiveData(QString data);
public slots:

    void sendCtr(QString s);



};

#endif // MYSERIALS_H
