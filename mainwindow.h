#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QChartView>
#include<QLineSeries>
#include<QtMath>
#include<Qtimer>
#include<QDateTime>
#include<QDateTimeAxis> // 时间坐标轴类 - X轴显示时间
#include<QValueAxis>
#include <QMessageBox>
#include <string>
#include <QDebug>
#include"deb.h"
#include "mymodbuswork.h"
#include"sql.h"
#include"mymodbus.h"
#include<QNetworkAccessManager>
#include<QTcpServer>
#include<QTcpSocket>
#include"networkwork.h"
#include<QThread>
#include"sqlitework.h"
#include"myserials.h"
#include"myserialwork.h"
QT_BEGIN_NAMESPACE
//发送缓冲区
extern QString strbuf;

namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void initUi();
    void initMember();
    void initNetworkThread();





private:
    Deb *m_deb;

    Sql *m_database;


    MyModBus *m_modbus;


    QTcpServer *tcpServer;
    QTcpSocket *tcpSocket;
    NetWorkWork *m_networkwork;
    QThread *m_networkThread;

    MySerials *m_serials;


    //定时器1
    QTimer *timer;

private slots:
    void on_debug_triggered();

    void on_data_triggered();

    void on_exit_triggered();

    void on_pushButtonModBus_clicked();

    void on_ModbusCheck_stateChanged(int arg1);
    void newConnection_Slot();
    void BackDataParsing(QMap<QString, float> numberData, QMap<QString, QString> strnumber);
    void timerReceiveData();
    void readyRead_Slot();
    void disconnected_Slot();
    void onNetworkDataReceive(QString data);
    void onErrorNetwork(QString error);
    void on_pushButtonZhuji_clicked();

    void on_openwif_triggered();
    void connected_Slot();
    void on_led_triggered();

    void on_water_triggered();

    void on_auto_2_triggered();

    void on_pushButtonD1_clicked();

    void on_pushButton_6X2_clicked();

    void on_pushButtonShua1_clicked();

    void on_pushButtonD2_clicked();

    void on_pushButton_3Shua2_clicked();

    void on_pushButtonX1_clicked();

    void on_pushButton_5Clear1_clicked();

    void on_pushButton_9Clear2_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_checkBox_2_stateChanged(int arg1);

    void on_checkBox_3_stateChanged(int arg1);

    void on_checkBox_4_stateChanged(int arg1);

    void on_set_yu_bt_clicked();

    void on_clear_yu_bt_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_set_light_bt_clicked();
    void onDebSendData(const QString &data);
    void on_ChecSerial_stateChanged(int arg1);

    void on_pushButtoSerial_clicked();
signals:
    void  sendThrsholdData(QString s);
private:
    void createTableOne();
    void createTableTwo();
    void DisplayChart1();
    void DisplayChart2();
    void ToUpdata_Lab(QString Stemp,QString Shumi,QString Slight,QString Ssoil,QString Smq2,QString Srain);

private:
    Ui::MainWindow *ui;
    QString imagePath;

    bool MS = true;//t 主机
    bool flag_Sw=false;//
    bool run_mode=true;//自动
    bool ModbusOpen=false;
    //继电器
    bool relaySw=false;

    // //本机发送标志位
    // bool flag_Send=0;

    //温湿度变量
    float temp_data;
    float humi_data;
    float light_data;

    float soil_data;
    float mq2_data;
    float rain_data;

    /*阈值*/
    QString EnsoilHumi;
    QString Enrain;
    QString Entemp;
    QString Enlight;

    //光强
    short light_pwm;







};
#endif // MAINWINDOW_H
