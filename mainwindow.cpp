#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),m_deb(nullptr),m_database(nullptr),m_modbus(nullptr),m_serials(nullptr)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    imagePath=QApplication::applicationDirPath();

    initUi();
    initMember();

}

MainWindow::~MainWindow()
{
    delete ui;
    delete m_database;
    delete m_modbus;
    m_modbus=nullptr;
    m_database=nullptr;

    if(m_networkThread&&m_networkThread->isRunning()){
        m_networkThread->quit();
        m_networkThread->wait(3000);
        if(m_networkThread->isRunning()){
            m_networkThread->terminate();//强制终止
            m_networkThread->wait();
        }
    }
    if(tcpSocket) {
        tcpSocket->disconnectFromHost();
        if(tcpSocket->state() != QAbstractSocket::UnconnectedState) {
            tcpSocket->waitForDisconnected(1000);
        }
        delete tcpSocket;
    }

    delete m_serials;
    m_serials=nullptr;

}

void MainWindow::initUi()
{

    QSize si;
    si.setWidth(40);
    si.setHeight(40);
    ui->toolBar->setIconSize(si);
    ui->horizontalSlider->setRange(0, 100);  // 光照滑动条范围0-100
    setFixedSize(1074, 716);
    ui->lineEditAddress->setText("127.0.0.1");
    ui->lineEdit_2Port->setText("8080");

    ui->progressBar->setValue(0);
    ui->spinBox->setValue(5);

    ui->exit->setIcon(QIcon(imagePath+"/img/exit.png"));
    ui->water->setIcon(QIcon(imagePath+"/img/relay_off.png"));
    ui->data->setIcon(QIcon(imagePath+"/img/data.png"));
    ui->openwif->setIcon(QIcon(imagePath+"/img/close.png"));
    ui->debug->setIcon(QIcon(imagePath+"/img/app.png"));
    ui->led->setIcon(QIcon(imagePath+"/img/led_off.png"));
    ui->auto_2->setIcon(QIcon(imagePath+"/img/auto.png"));

    ui->pushButtonModBus->setIcon(QIcon(imagePath+"/img/switch.png"));
    ui->pushButtoSerial->setIcon(QIcon(imagePath+"/img/switch.png"));
    ui->labelIp->setPixmap(QPixmap(imagePath+"/img/ip.png"));
    ui->labelIp->setScaledContents(true);
    ui->labelTuqi->setPixmap(QPixmap(imagePath+"/img/duan.png"));
    ui->labelTuqi->setScaledContents(true);

    ui->pushButtonZhuji->setIcon(QIcon(imagePath+"/img/server.png"));
    ui->labelDUANKAI->setPixmap(QPixmap(imagePath+"/img/discon.png"));
    ui->labelDUANKAI->setScaledContents(true);
    ui->label_6wIFI->setPixmap(QPixmap(imagePath+"/img/wifi_off.png"));
    ui->label_6wIFI->setScaledContents(true);
    ui->labelTEMP->setPixmap(QPixmap(imagePath+"/img/temp.png"));
    ui->labelTEMP->setScaledContents(true);
    ui->label_11WATER->setPixmap(QPixmap(imagePath+"/img/humi.png"));
    ui->label_11WATER->setScaledContents(true);
    ui->label_12LIght->setPixmap(QPixmap(imagePath+"/img/light.png"));
    ui->label_12LIght->setScaledContents(true);
    ui->labelWater1->setPixmap(QPixmap(imagePath+"/img/humi_soil.png"));
    ui->labelWater1->setScaledContents(true);
    ui->label_20YA->setPixmap(QPixmap(imagePath+"/img/mq2.png"));
    ui->label_20YA->setScaledContents(true);
    ui->label_21Water2->setPixmap(QPixmap(imagePath+"/img/rain.png"));
    ui->label_21Water2->setScaledContents(true);
    ui->pushButtonD1->setIcon(QIcon(imagePath+"/img/big.png"));
    ui->pushButtonD2->setIcon(QIcon(imagePath+"/img/big.png"));
    ui->pushButtonShua1->setIcon(QIcon(imagePath+"/img/rest.png"));
    ui->pushButton_3Shua2->setIcon(QIcon(imagePath+"/img/rest.png"));
    ui->pushButtonX1->setIcon(QIcon(imagePath+"/img/small.png"));
    ui->pushButton_6X2->setIcon(QIcon(imagePath+"/img/small.png"));
    ui->pushButton_9Clear2->setIcon(QIcon(imagePath+"/img/clearS.png"));
    ui->pushButton_5Clear1->setIcon(QIcon(imagePath+"/img/clearS.png"));
    ui->set_yu_bt->setIcon(QIcon(imagePath+"/img/set.png"));
    ui->clear_yu_bt->setIcon(QIcon(imagePath+"/img/clear_yu.png"));
    ui->ChecSerial->setEnabled(false);


}

void MainWindow::initMember()
{
    m_database=new Sql;
    m_modbus=new MyModBus;
    createTableOne();
    createTableTwo();
    timer=new QTimer(this);
    timer->start(1000);
    connect(timer,&QTimer::timeout,this,&MainWindow::timerReceiveData);
    tcpServer = new QTcpServer(this);
    tcpSocket=new QTcpSocket(this);
    connect(tcpServer,&QTcpServer::newConnection,this,&MainWindow::newConnection_Slot);
    connect(m_serials,&MySerials::isclose,this,[this](){
        ui->ChecSerial->setCheckState(Qt::Unchecked);
    });
    connect(this,&MainWindow::checkModbus,m_modbus,&MyModBus::creatModbus);

    connect(this,&MainWindow::closeModBus,m_modbus,&MyModBus::stopModBus);
    connect(this,&MainWindow::signalisLogin,m_database,&Sql::userIn);
    connect(m_database,&Sql::signaluserIn,this,&MainWindow::RootSet);
    connect(m_modbus,&MyModBus::signalReceive,this,[this](const QString &address){
        if(m_deb&&m_deb->isVisible()){

            m_deb->DisplayData(address);
        }
    });

    initNetworkThread();


}

void MainWindow::initNetworkThread()
{
    m_networkwork=new NetWorkWork;
    m_networkThread=new QThread(this);
    m_networkwork->moveToThread(m_networkThread);
    connect(m_networkThread,&QThread::finished,m_networkwork,&NetWorkWork::deleteLater);//线程结束，自动删除工作对象
    connect(m_networkwork,&NetWorkWork::dataProcess,this,&MainWindow::onNetworkDataReceive);
    connect(m_networkwork,&NetWorkWork::sensorDataReady,this,&MainWindow::BackDataParsing);
    connect(m_networkwork,&NetWorkWork::errorOcurred,this,&MainWindow::onErrorNetwork);

    m_networkThread->start();


}




void MainWindow::on_debug_triggered()
{

    m_deb=new Deb();
    m_deb->show();
    connect(m_deb, &Deb::sendDataRequested, this, &MainWindow::onDebSendData);
    connect(m_deb,&Deb::modbusRequest,m_modbus,&MyModBus::doRequest);
    m_deb->setAttribute(Qt::WA_DeleteOnClose);

}

void MainWindow::on_data_triggered()
{

    m_database->show();

}

void MainWindow::on_exit_triggered()
{
    this->close();
}




void MainWindow::on_pushButtonModBus_clicked()
{
    m_modbus->show();
}


void MainWindow::on_ModbusCheck_stateChanged(int arg1)
{
    switch(arg1) {
    case Qt::Unchecked:      // 值为 0
        // 未选中状态
        ui->pushButtonModBus->setEnabled(true);
        ui->groupBox->setEnabled(true);
        ui->groupBox_2->setEnabled(true);
        ui->ChecSerial->setEnabled(true);
        ui->pushButtoSerial->setEnabled(true);
        ModbusOpen=false;
        emit closeModBus();
        break;

    // case Qt::PartiallyChecked: // 值为 1
    //     // 部分选中状态（三态复选框）
    //     break;

    case Qt::Checked:
    ui->pushButtonModBus->setEnabled(false);        // 值为 2  // 选中状态
    ui->groupBox->setEnabled(false);
    ui->groupBox_2->setEnabled(false);
    ui->ChecSerial->setEnabled(false);
    ui->pushButtoSerial->setEnabled(false);
    ModbusOpen=true;
        emit checkModbus();
        break;
    }

}

void MainWindow::newConnection_Slot()
{
    tcpSocket=tcpServer->nextPendingConnection();//得到套接字
    connect(tcpSocket,&QTcpSocket::readyRead,this,&MainWindow::readyRead_Slot);


    ui->labelDUANKAI->setPixmap(QPixmap(imagePath+"/img/connect.png"));
    ui->labelDUANKAI->setScaledContents(true);
}

void MainWindow::BackDataParsing(QMap<QString, float> numberData,QMap<QString,QString>strnumber)
{
      // qDebug() << "收到givedisplay信号";
    temp_data = numberData["temp"];
    humi_data = numberData["humi"];
    light_data = numberData["light"];
    soil_data = numberData["soil"];
    mq2_data = numberData["mq2"];
    rain_data = numberData["rain"];
    QString str = strnumber["temp"];
    QString st2 = strnumber["humi"];
    QString st3 = strnumber["light"];
    QString st4 = strnumber["soil"];
    QString st5 = strnumber["mq2"];
    QString st6 = strnumber["rain"];

    ToUpdata_Lab(str, st2, st3, st4, st5, st6);
    m_database->UpdataToDataBase(temp_data,humi_data,light_data,soil_data,mq2_data,rain_data);
}

void MainWindow::timerReceiveData()
{
    static int tempTimer=0;
    DisplayChart1();
    DisplayChart2();
    ui->time_l->setText(QTime::currentTime().toString("hh:mm:ss"));
    if(relaySw){
        tempTimer++;
        int value=ui->spinBox->value();
        ui->progressBar->setValue((tempTimer*100)/value);
        if(tempTimer>=value){
            tempTimer=0;
            relaySw=false;
            ui->water->setIcon(QIcon(imagePath+"/img/relay_off.png"));
            //标记这里需要一个tcpsocketwrite
            tcpSocket->write("rely_off");
            ui->progressBar->setValue(100);
        }
    }else{
        tempTimer=0;
    }

}

void MainWindow::readyRead_Slot()
{
    QByteArray receiveData=tcpSocket->readAll();
    if(!receiveData.isEmpty()){
        //使用元对象来调用我的线程方法
        QMetaObject::invokeMethod(m_networkwork,"processData",
        Qt::QueuedConnection,//采用队列方式
        Q_ARG(QByteArray,receiveData),
        Q_ARG(QString,"UTF-8"));
    }

}

void MainWindow::disconnected_Slot()
{   
    if(tcpSocket) {
        tcpSocket->deleteLater();  // 安全删除
        tcpSocket = nullptr;       // 重置指针
    }
    //tcpSocket->close();
    ui->labelDUANKAI->setPixmap(QPixmap(imagePath+"/img/discon.png"));
    ui->labelDUANKAI->setScaledContents(true);
}

void MainWindow::onNetworkDataReceive(QString data)
{
    //这里数据处理好了，将数据显示到图表

        if(m_deb && m_deb->isVisible()) {
        m_deb->DisplayData(data);
        // qDebug() << "m_deb存在" ;
    } else {

       // qDebug() << "Received data:" << data;
    }


}

void MainWindow::onErrorNetwork(QString error)
{
   // qDebug()<<error<<"\n";
}

void MainWindow::createTableOne()
{
    QChart *chart=new QChart;
    QChartView *chartview=new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);//设置抗锯齿
    QLayout *oldLayout = ui->frame->layout();
    if(oldLayout) {
        delete oldLayout;
    }
    QVBoxLayout *vL=new QVBoxLayout(ui->frame);
    vL->addWidget(chartview);
    QLineSeries *series0=new QLineSeries;
    QLineSeries *series1 = new QLineSeries;
    QLineSeries *series2 = new QLineSeries;
    series0->setName("温度");
    series1->setName("湿度");
    series2->setName("光强");
    chart->addSeries(series0);
    chart->addSeries(series1);
    chart->addSeries(series2);
    QDateTimeAxis *axix=new QDateTimeAxis;
    axix->setFormat("hh:mm:ss");
    axix->setTickCount(5);
    axix->setTitleText("time(s)");
    chart->setAxisX(axix,series0);
    chart->setAxisX(axix, series1);
    chart->setAxisX(axix, series2);
    QValueAxis *axisY=new QValueAxis;
    axisY->setRange(0,100);
    axisY->setTickCount(5);
    chart->setAxisY(axisY,series0);
    chart->setAxisY(axisY, series1);
    chart->setAxisY(axisY, series2);
    chart->setDropShadowEnabled(true);//设置阴影
    //初始化chart坐标
    chart->axisX()->setMin(QDateTime::currentDateTime());
    chart->axisX()->setMax(QDateTime::currentDateTime().addSecs(5*30));
    chartview->setStyleSheet(R"(
        QChartView {
            background-color: #FFF0F5;
            border: 1px solid #FFB6C1;
            border-radius: 5px;
        }
    )");





}

void MainWindow::createTableTwo()
{
    QChart *chart=new QChart;
    QChartView *chartview=new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);
    QLayout *oldlayout=ui->frame_2->layout();
    if(oldlayout){
        delete oldlayout;
    }
    QVBoxLayout *vl=new QVBoxLayout(ui->frame_2);
    vl->addWidget(chartview);
    QLineSeries *series0=new QLineSeries;
    QLineSeries *series1 = new QLineSeries;
    QLineSeries *series2 = new QLineSeries;
    series0->setName("土壤湿度");
    series1->setName("有害气体");
    series2->setName("雨滴");
    chart->addSeries(series0);
    chart->addSeries(series1);
    chart->addSeries(series2);
    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setFormat("hh:mm:ss");
    axisX->setTickCount(5);
    axisX->setTitleText("time(s)");
    chart->setAxisX(axisX,series0);
    chart->setAxisX(axisX,series1);
    chart->setAxisX(axisX,series2);
    QValueAxis  *axisY = new QValueAxis;
    axisY->setRange(0,100);
    chart->setAxisY(axisY,series0);
    chart->setAxisY(axisY,series1);
    chart->setAxisY(axisY,series2);

    chartview->setStyleSheet(R"(
        QChartView {
            background-color: #FFF0F5;
            border: 1px solid #FFB6C1;
            border-radius: 5px;
        }
    )");



}



void MainWindow::DisplayChart1()
{
    QDateTime currentTime=QDateTime::currentDateTime();
    QChartView *chartview=qobject_cast<QChartView*>(ui->frame->layout()->itemAt(0)->widget());
    QChart *chart=chartview->chart();
    QLineSeries *series0=(QLineSeries*)chartview->chart()->series().at(0);
    QLineSeries *series1=(QLineSeries*)chartview->chart()->series().at(1);
    QLineSeries *series2=(QLineSeries*)chartview->chart()->series().at(2);
    //时间戳（毫秒）
    series0->append(currentTime.toMSecsSinceEpoch(),temp_data);
    series1->append(currentTime.toMSecsSinceEpoch(),humi_data);
    series2->append(currentTime.toMSecsSinceEpoch(),light_data);
    chart->axisX()->setMin(QDateTime::currentDateTime().addSecs(-5*30));
    chart->axisX()->setMax(QDateTime::currentDateTime().addSecs(5*30));


}



void MainWindow::DisplayChart2()
{
    QDateTime currentTime=QDateTime::currentDateTime();
    QChartView *chartview=qobject_cast<QChartView*>(ui->frame_2->layout()->itemAt(0)->widget());
    QChart *chart=chartview->chart();
    QLineSeries *series0=(QLineSeries*)chartview->chart()->series().at(0);
    QLineSeries *series1=(QLineSeries*)chartview->chart()->series().at(1);
    QLineSeries *series2=(QLineSeries*)chartview->chart()->series().at(2);
    series0->append(currentTime.toMSecsSinceEpoch(),soil_data);
    series1->append(currentTime.toMSecsSinceEpoch(),mq2_data);
    series2->append(currentTime.toMSecsSinceEpoch(),rain_data);
    chart->axisX()->setMin(QDateTime::currentDateTime().addSecs(-5*30));
    chart->axisX()->setMax(QDateTime::currentDateTime().addSecs(5*30));


}

void MainWindow::ToUpdata_Lab(QString Stemp, QString Shumi, QString Slight, QString Ssoil, QString Smq2, QString Srain)
{
    ui->labelTemp->setText(Stemp+"%");
    ui->labelHumia->setText(Shumi + "%");
    ui->labelLight->setText(Slight + "%");
    ui->labelSoil->setText(Ssoil + "%");
    ui->labelMq2->setText(Smq2 + "%");
    ui->labelRain->setText(Srain + "%");

}




void MainWindow::on_pushButtonZhuji_clicked()
{
    if(!flag_Sw){
        tcpServer->close();
        tcpSocket->close();
        if(MS){
            MS=false;
            ui->pushButtonZhuji->setIcon(QIcon(imagePath+"/img/client.png"));
            ui->labelmod->setText("客户机");
        }else{
            MS=true;
            ui->pushButtonZhuji->setIcon(QIcon(imagePath+"/img/server.png"));
            ui->labelmod->setText("主机模式");
        }
    }else{

        ui->statusbar->showMessage("请先关闭网络",3000);
    }
}


void MainWindow::on_openwif_triggered()
{
    flag_Sw=!flag_Sw;
    if(flag_Sw){
        ui->label_6wIFI->setPixmap(QPixmap(imagePath+"/img/wifi_on.png"));
        ui->label_6wIFI->setScaledContents(true);
        ui->openwif->setIcon(QIcon(imagePath+"/img/open.png"));
        if(ModbusOpen){
            //执行modbus连接
        }else{
        if(MS){
            tcpServer->listen(QHostAddress::AnyIPv4,ui->lineEdit_2Port->text().toInt());
            ui->ModbusCheck->setEnabled(false);
        }else{
            tcpSocket->connectToHost(ui->lineEditAddress->text(),ui->lineEdit_2Port->text().toInt());
            connect(tcpSocket,&QTcpSocket::connected,this,&MainWindow::connected_Slot);
            ui->ModbusCheck->setEnabled(false);
        }
        }
    }else{
        ui->label_6wIFI->setPixmap(QPixmap(imagePath+"/img/wifi_off.png"));
        ui->label_6wIFI->setScaledContents(true);
        ui->openwif->setIcon(QIcon(imagePath+"/img/close.png"));
        ui->ModbusCheck->setEnabled(true);
        tcpServer->close();
        tcpSocket->close();
    }
}

void MainWindow::connected_Slot()
{
    connect(tcpSocket,&QTcpSocket::readyRead,this,&MainWindow::readyRead_Slot);
    ui->labelDUANKAI->setPixmap(QPixmap(imagePath+"/img/connect.png"));
    connect(tcpSocket,&QTcpSocket::disconnected,this,&MainWindow::disconnected_Slot);
}


void MainWindow::on_led_triggered()
{
    static bool ledSw=false;
    ledSw=!ledSw;
    if (!tcpSocket || tcpSocket->state() != QAbstractSocket::ConnectedState) {
        ledSw = !ledSw;
        return;
    }
    if(ledSw){
        ui->led->setIcon(QIcon(imagePath+"/img/led_on.png"));
        tcpSocket->write("led_on");
    }
    else{
        ui->led->setIcon(QIcon(imagePath+"/img/led_off.png"));
        tcpSocket->write("led_off");
    }

}


void MainWindow::on_water_triggered()
{
     relaySw=!relaySw;
    if(relaySw){
        ui->water->setIcon(QIcon(imagePath+"/img/relay_on.png"));
        tcpSocket->write("relay_on");
    }
    else{
        ui->water->setIcon(QIcon(imagePath+"/img/relay_off.png"));
        tcpSocket->write("relay_off");
    }

}


void MainWindow::on_auto_2_triggered()
{
    run_mode=!run_mode;

    if(run_mode){

        ui->auto_2->setIcon(QIcon(imagePath+"/img/auto.png"));
        tcpSocket->write("auto_mode");
        if(m_serials){
             m_serials->sendData("auto_mode");}



    }
    else{
        //手动
        ui->auto_2->setIcon(QIcon(imagePath+"/img/hand.png"));
        tcpSocket->write("hand_mode");
        if(m_serials){
            m_serials->sendData("hand_mode");}
    }
}


void MainWindow::on_pushButtonD1_clicked()//放大
{
    QChartView *chartview=qobject_cast<QChartView*>(ui->frame_2->layout()->itemAt(0)->widget());
    chartview->chart()->zoom(1.2);

}


void MainWindow::on_pushButton_6X2_clicked()
{
    QChartView *chartview=qobject_cast<QChartView*>(ui->frame_2->layout()->itemAt(0)->widget());
    chartview->chart()->zoom(0.8);
}


void MainWindow::on_pushButtonShua1_clicked()
{
    QChartView *chartview=qobject_cast<QChartView*>(ui->frame_2->layout()->itemAt(0)->widget());
    chartview->chart()->zoomReset();
}


void MainWindow::on_pushButtonD2_clicked()
{
    QChartView *chartview=qobject_cast<QChartView*>(ui->frame->layout()->itemAt(0)->widget());
    chartview->chart()->zoom(1.2);
}


void MainWindow::on_pushButton_3Shua2_clicked()
{
    QChartView *chartview=qobject_cast<QChartView*>(ui->frame->layout()->itemAt(0)->widget());
    chartview->chart()->zoomReset();
}


void MainWindow::on_pushButtonX1_clicked()
{
    QChartView *chartview=qobject_cast<QChartView*>(ui->frame->layout()->itemAt(0)->widget());
    chartview->chart()->zoom(0.8);
}


void MainWindow::on_pushButton_5Clear1_clicked()
{
    QChartView *chartview=qobject_cast<QChartView*>(ui->frame->layout()->itemAt(0)->widget());
    QChart *chart=chartview->chart();
    QLineSeries *series0=(QLineSeries*)chartview->chart()->series().at(0);
    QLineSeries *series1=(QLineSeries*)chartview->chart()->series().at(1);
    QLineSeries *series2=(QLineSeries*)chartview->chart()->series().at(2);
    series0->clear();
    series1->clear();
    series2->clear();
}


void MainWindow::on_pushButton_9Clear2_clicked()
{
    QChartView *chartview=qobject_cast<QChartView*>(ui->frame_2->layout()->itemAt(0)->widget());
    QChart *chart=chartview->chart();
    QLineSeries *series0=(QLineSeries*)chartview->chart()->series().at(0);
    QLineSeries *series1=(QLineSeries*)chartview->chart()->series().at(1);
    QLineSeries *series2=(QLineSeries*)chartview->chart()->series().at(2);
    series0->clear();
    series1->clear();
    series2->clear();
}


void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if(arg1==2)
        EnsoilHumi="enable";
    else
        EnsoilHumi="disable";
}


void MainWindow::on_checkBox_2_stateChanged(int arg1)
{
    if(arg1==2)
        Enrain="enable";
    else
        Enrain="disable";
}


void MainWindow::on_checkBox_3_stateChanged(int arg1)
{
    if(arg1==2)
        Entemp="enable";
    else
        Entemp="disable";
}


void MainWindow::on_checkBox_4_stateChanged(int arg1)
{
    if(arg1==2)
        Enlight="enable";
    else
        Enlight="disable";
}


void MainWindow::on_set_yu_bt_clicked()
{
    QString sendThrshold;

    sendThrshold = EnsoilHumi + " " + "soil:"+ ui->soil_yu_la->text()+";"+
                   Enrain     + " " + "rain:"+ ui->rain_yu_la->text()+";"+
                   Entemp     + " " + "temp:"+ ui->temp_yu_la->text()+";"+
                   Enlight    + " " + "light:"+ui->light_yu_la->text();
    sendThrsholdData(sendThrshold.toUtf8());
    connect(this,&MainWindow::sendThrsholdData,m_serials,&MySerials::sendCtr);
    tcpSocket->write(sendThrshold.toUtf8());
}


void MainWindow::on_clear_yu_bt_clicked()
{
    ui->checkBox->setChecked(false);
    ui->checkBox_2->setChecked(false);
    ui->checkBox_3->setChecked(false);
    ui->checkBox_4->setChecked(false);

    ui->soil_yu_la->clear();
    ui->temp_yu_la->clear();
    ui->rain_yu_la->clear();
    ui->light_yu_la->clear();
}


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->setlightNumla->setNum(value);
    light_pwm = value;
}


void MainWindow::on_set_light_bt_clicked()
{
     tcpSocket->write(("Pwm:"+QString::number(light_pwm)).toUtf8());
}

void MainWindow::onDebSendData(const QString &data)
{
    if(tcpSocket->state()==QTcpSocket::ConnectedState){
        tcpSocket->write(data.toUtf8());
    }else{
        ui->statusbar->showMessage("未连接,发送不了");
    }
}


void MainWindow::on_ChecSerial_stateChanged(int arg1)
{
    switch(arg1) {
    case Qt::Unchecked:      // 值为 0
        // 未选中状态
        ui->pushButtonModBus->setEnabled(true);
        ui->groupBox->setEnabled(true);
        ui->groupBox_2->setEnabled(true);
        ui->ModbusCheck->setEnabled(true);
        break;

        // case Qt::PartiallyChecked: // 值为 1
        //     // 部分选中状态（三态复选框）
        //     break;

    case Qt::Checked:
        ui->pushButtonModBus->setEnabled(false);        // 值为 2  // 选中状态
        ui->groupBox->setEnabled(false);
        ui->groupBox_2->setEnabled(false);
        ui->ModbusCheck->setEnabled(false);
        break;
    }
}


void MainWindow::on_pushButtoSerial_clicked()
{
    m_serials=new MySerials;
    m_serials->show();
    if(flag_Sw=true){
        on_openwif_triggered();}
    ui->ChecSerial->setCheckState(Qt::Checked);
    connect(m_serials,&MySerials::giveDBandDisplay,this,&MainWindow::BackDataParsing);
    connect(m_serials, &MySerials::isclose, this, [this](){
        ui->ChecSerial->setCheckState(Qt::Unchecked);
        m_serials = nullptr;  // 在这里置空
    });

    m_serials->setAttribute(Qt::WA_DeleteOnClose);

}

void MainWindow::RootSet(bool isroot)
{
    qDebug()<<"test root";
    if(isroot){
        ui->groupBox_4->setEnabled(true);
        ui->groupBox_5->setEnabled(true);
        ui->groupBox_6->setEnabled(true);
        ui->data->setEnabled(true);
        ui->water->setEnabled(true);
        ui->auto_2->setEnabled(true);
        ui->ModbusCheck->setEnabled(true);
        ui->pushButtonModBus->setEnabled(true);
        ui->pushButtoSerial->setEnabled(true);
        ui->led->setEnabled(true);
         ui->debug->setEnabled(true);
        emit closeLogin();
    }else{
        ui->groupBox_4->setEnabled(false);
        ui->groupBox_5->setEnabled(false);
        ui->groupBox_6->setEnabled(false);
        ui->data->setEnabled(false);
        ui->water->setEnabled(false);
        ui->auto_2->setEnabled(false);
        ui->ModbusCheck->setEnabled(false);
        ui->pushButtonModBus->setEnabled(false);
        ui->pushButtoSerial->setEnabled(false);
        ui->led->setEnabled(false);
        ui->debug->setEnabled(false);
    emit closeLogin();
    }

}

void MainWindow::receiveLogin(const islogin &s)
{
    emit  signalisLogin(s);
}

