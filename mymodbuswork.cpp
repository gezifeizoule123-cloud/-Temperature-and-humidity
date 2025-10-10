#include "mymodbuswork.h"
#include<QMessageBox>
MyModBusWork::MyModBusWork(QObject *parent)
    : QObject{parent},m_Master(nullptr),m_Slave(nullptr)
{


}

void MyModBusWork::createConnect(const Settings &s)
{
    qDebug()<<"触发创建";
    qDebug() << "=== 开始创建 Modbus 连接 ===";
    qDebug() << "连接参数:";
    qDebug() << "  - 模式:" << (s.isMaster ? "主站" : "从站");
    qDebug() << "  - 协议:" << (s.isTCP ? "TCP" : "RTU");
    qDebug() << "  - 从站地址:" << s.SlaveAddress;
    if(s.isMaster){
        if(s.isTCP){
            m_Master=new QModbusTcpClient;
            m_Master->setConnectionParameter(QModbusDevice::NetworkPortParameter,s.port);
            m_Master->setConnectionParameter(QModbusDevice::NetworkAddressParameter,s.address);
        }else{
            qDebug() << "  - 创建 RTU 串口主站";
            qDebug() << "  - 串口:" << s.PortName;
            qDebug() << "  - 波特率:" << s.BaudRate;
            qDebug() << "  - 数据位:" << s.DataBits;
            qDebug() << "  - 停止位:" << s.StopBits;
            qDebug() << "  - 校验位:" << s.parity;
             m_Master=new QModbusRtuSerialMaster;
            m_Master->setConnectionParameter(QModbusDevice::SerialPortNameParameter,s.PortName);
             m_Master->setConnectionParameter(QModbusDevice::SerialParityParameter,s.parity);
             m_Master->setConnectionParameter(QModbusDevice::SerialBaudRateParameter,s.BaudRate);
              m_Master->setConnectionParameter(QModbusDevice::SerialDataBitsParameter,s.DataBits);
              m_Master->setConnectionParameter(QModbusDevice::SerialStopBitsParameter,s.StopBits);
        }
        //-------------------------此处判断并且连接
        m_Master->setTimeout(1000);
        m_Master->setNumberOfRetries(3);
        connect(m_Master, &QModbusDevice::stateChanged, [this](QModbusDevice::State state){
            qDebug() << "主站状态变化:" << state;
            switch(state) {
            case QModbusDevice::UnconnectedState:
                qDebug() << "  - 未连接状态";
                break;
            case QModbusDevice::ConnectingState:
                qDebug() << "  - 正在连接...";
                break;
            case QModbusDevice::ConnectedState:
                qDebug() << "  - ✓ 连接成功!";
                break;
            case QModbusDevice::ClosingState:
                qDebug() << "  - 正在关闭...";
                break;
            }
        });
        bool connectResult = m_Master->connectDevice();
        qDebug() << "连接设备调用结果:" << (connectResult ? "成功" : "失败");


    }else{
        if(s.isTCP){
            m_Slave=new QModbusTcpServer;
            m_Slave->setConnectionParameter(QModbusDevice::NetworkPortParameter,s.port);
            m_Slave->setConnectionParameter(QModbusDevice::NetworkAddressParameter,s.address);


        }else{
     m_Slave=new QModbusRtuSerialSlave;
            m_Slave->setConnectionParameter(QModbusDevice::SerialPortNameParameter,s.PortName);
            m_Slave->setConnectionParameter(QModbusDevice::SerialParityParameter,s.parity);
            m_Slave->setConnectionParameter(QModbusDevice::SerialBaudRateParameter,s.BaudRate);
            m_Slave->setConnectionParameter(QModbusDevice::SerialDataBitsParameter,s.DataBits);
            m_Slave->setConnectionParameter(QModbusDevice::SerialStopBitsParameter,s.StopBits);

        }
         m_Slave->setServerAddress(s.SlaveAddress);
            //-------------------------此处判断并且连接
         // connect(m_Slave,&QModbusServer::stateChanged,[this]{
         //     if(m_Slave->state()==QModbusDevice::ConnectedState){
         //         QMessageBox::information(0,"tip","successful");
         //     }

             QModbusDataUnitMap map;
             map.insert(QModbusDataUnit::Coils,QModbusDataUnit(QModbusDataUnit::Coils,0,20));
             //--------------------------
             map.insert(QModbusDataUnit::DiscreteInputs,QModbusDataUnit(QModbusDataUnit::DiscreteInputs,0,20));
             map.insert( QModbusDataUnit::InputRegisters , QModbusDataUnit(QModbusDataUnit::InputRegisters ,0 ,20));
             map.insert( QModbusDataUnit::HoldingRegisters , QModbusDataUnit(QModbusDataUnit::HoldingRegisters ,0 ,20));
             m_Slave->setMap(map);

         // connect(m_Slave,&QModbusDevice::errorOccurred,[this](QModbusDevice::Error error){
         //      QMessageBox::information(0,"tip",QString("错误，请从新连接%1").arg(m_Slave->errorString()));
         // });
 //当主站向从站写入数据的时候，QModbusServer里面表的数据被改变，同时会发出信号
         connect(m_Slave,&QModbusServer::dataWritten,[this,s](QModbusDataUnit::RegisterType table, int address, int size){
                    for (int i=0; i<size; ++i)
                    {
                        quint16 v=0;

                        //获取从站某张表里面某个位置的数据
                        m_Slave->data(table,address+i,&v );
                        QString data=anylisyData(address+i,v,s.RegisterType);
                        emit signalreceive(data,s.RegisterType);

                    }

         });

             bool connectResult = m_Slave->connectDevice();
             qDebug() << "从站连接设备调用结果:" << (connectResult ? "成功" : "失败");
    }

}

void  MyModBusWork::doStop()
{
    if(m_Master){
        m_Master->disconnectDevice();
        delete m_Master;
        m_Master=nullptr;
        emit signalStop(true);
    }

    if(m_Slave){
        m_Slave->disconnectDevice();
        delete m_Slave;
        m_Slave=nullptr;
        emit signalStop(true);
    }
}

void MyModBusWork::doRequest(const Settings &s)
{
    if(m_Master == nullptr) {
        qDebug() << "错误: Modbus master 为 null!";
        return;
    }

    qDebug() << "主站状态:" << m_Master->state();

    if(m_Master->state() != QModbusDevice::ConnectedState) {
        qDebug() << "错误: Modbus 设备未连接!";
        return;
    }

    qDebug() << "请求参数:";
    qDebug() << "  - 从站地址:" << s.SlaveAddress;
    qDebug() << "  - 寄存器类型:" << s.RegisterType;
    qDebug() << "  - 寄存器类型值:" << (int)s.RegisterType;
    qDebug() << "  - 起始地址: 0";
    qDebug() << "  - 数量: 20";

 QModbusDataUnit mdu(s.RegisterType, 0 ,20);
 QModbusReply *reply=m_Master->sendReadRequest(mdu,s.SlaveAddress);
 if(!reply) {
     qDebug() << "Failed to create reply!";
     return;
 }

     connect(reply,&QModbusReply::finished,[this,reply,s]{
         if(reply->error()==QModbusDevice::NoError){
             QModbusDataUnit unit=reply->result();
                qDebug() << "Received" << unit.valueCount() << "values";
             for(int i=0;i<unit.valueCount();i++){
                 quint16 v=unit.value(i);
                 QString data=anylisyData(unit.startAddress()+i,v,s.RegisterType);
                 emit signalreceive(data,s.RegisterType);

             }

         }else {
             qDebug() << "Modbus error:" << reply->errorString();
             emit signalreceive("Error",s.RegisterType);
         }
          reply->deleteLater();
     });


}

void MyModBusWork::SlaveToDatabase(QString data)
{

    if(!data.startsWith("Params")) {
        return ;  // 如果不是传感器数据，直接返回
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
    emit sendMainDisplay(numberData,strnumber);
}

void MyModBusWork::SendModbusSlave(const QString &data,int id,Settings s)
{
    if(s.RegisterType==QModbusDataUnit::HoldingRegisters){
    if(!data.startsWith("Params")) {
        return ;  // 如果不是传感器数据，直接返回
    }
    //QMap<QString,QPair<QString,QString>>Data;
    QVector<quint16>Data;
    QStringList dataName={"temp", "humi", "light", "soil", "mq2", "rain"};
    for(const auto &name:dataName){
        QString integerPart = data.mid(data.indexOf(name + ":") + name.length() + 1);
        integerPart = integerPart.left(integerPart.indexOf("."));

        int dotPos = data.indexOf(".", data.indexOf(name + ":"));
        QString decimalPart = data.mid(dotPos + 1);
        decimalPart = decimalPart.left(decimalPart.indexOf(name == "rain" ? "}" : ";"));
        quint16 intp=integerPart.toUInt();
        quint16 decp=decimalPart.toUInt();
        Data.push_back(intp);
        Data.push_back(decp);
    }
    if(m_Master==nullptr){
        return;
    }
    QModbusDataUnit mdu(QModbusDataUnit::HoldingRegisters,0,Data);
    m_Master->sendWriteRequest(mdu,id);}
    if(s.RegisterType==QModbusDataUnit::Coils){
        //hand_mode
        qDebug()<<"发送进入了";
        int onOrOff=0;
        int pos=0;
        if(data=="hand_mode"){
            onOrOff=0;
            pos=0;
        }else if(data=="auto_mode"){
            onOrOff=1;
            pos=0;
        }else if(data=="relay_off"){
            onOrOff=0;
            pos=1;
        }else if(data=="relay_on"){
            onOrOff=1;
            pos=1;
        }else if(data=="led_off"){
            onOrOff=0;
            pos=2;
        }else if(data=="led_on"){
            onOrOff=1;
            pos=2;
        }
        QModbusDataUnit mdu(QModbusDataUnit::Coils,pos,1);
        mdu.setValue(0,onOrOff);
        m_Master->sendWriteRequest(mdu,id);
    }
}

void MyModBusWork::changeModBusSlave(const QString &data, Settings s)
{
    if(QModbusDataUnit::HoldingRegisters==s.RegisterType){
    if(m_Slave==nullptr){
        return;
    }

    if(!data.startsWith("Params")) {
        return ;  // 如果不是传感器数据，直接返回
    }
    //QMap<QString,QPair<QString,QString>>Data;
    QVector<quint16>Data;
    QStringList dataName={"temp", "humi", "light", "soil", "mq2", "rain"};
     int i=0;
    for(const auto &name:dataName){

        QString integerPart = data.mid(data.indexOf(name + ":") + name.length() + 1);
        integerPart = integerPart.left(integerPart.indexOf("."));

        int dotPos = data.indexOf(".", data.indexOf(name + ":"));
        QString decimalPart = data.mid(dotPos + 1);
        decimalPart = decimalPart.left(decimalPart.indexOf(name == "rain" ? "}" : ";"));
        quint16 intp=integerPart.toUInt();
        quint16 decp=decimalPart.toUInt();

        m_Slave->setData(s.RegisterType,i,intp);
        i++;
         m_Slave->setData(s.RegisterType,i,decp);
        i++;
    }}
    if(s.RegisterType==QModbusDataUnit::Coils){
        int onOrOff=0;
        int pos=0;
        if(data=="hand_mode"){
            onOrOff=0;
            pos=0;
        }else if(data=="auto_mode"){
            onOrOff=1;
            pos=0;
        }else if(data=="relay_off"){
            onOrOff=0;
            pos=1;
        }else if(data=="relay_on"){
            onOrOff=1;
            pos=1;
        }else if(data=="led_off"){
            onOrOff=0;
            pos=2;
        }else if(data=="led_on"){
            onOrOff=1;
            pos=2;
        }
        m_Slave->setData(s.RegisterType,pos,onOrOff);
    }

}

QString MyModBusWork::anylisyData(int  address, quint16 v,QModbusDataUnit::RegisterType RegisterType)
{
    QString data;
    if(RegisterType==QModbusDataUnit::Coils){
        if(address==0&&v==1){
            data="led_on";
        }else if(address==0&&v==0){
            data="led_off";
        }else if(address==1&&v==1){
            data="relay_on";
        }else if(address==1&&v==0){
            data="relay_off";
        }else if(address==2&&v==1){
            data="auto_mode";
        }else if(address==2&&v==0){
            data="hand_mode";
        }else{
            data="暂无数据";
        }
    }else if(RegisterType==QModbusDataUnit::HoldingRegisters){
        QString temp,humi,light,soil,mq2,rain;
        if(address==0){
            temp+=QString("temp:%1.").arg(v);
            data=temp;
        }else if(address==1){
            temp+=QString("%1;").arg(v);
            data=temp;
        }else if(address==2){
            humi+=QString("humi:%1.").arg(v);
              data=humi;
        }else if(address==3){
            humi+=QString("%1;").arg(v);
            data=humi;
        }else if(address==4){
            light+=QString("light:%1.").arg(v);
              data=light;
        }else if(address==5){
            light+=QString("%1;").arg(v);
            data=light;
        }else if(address==6){
            soil+=QString("soil:%1.").arg(v);
              data=soil;
        }else if(address==7){
            soil+=QString("%1;").arg(v);
            data=soil;
        }else if(address==8){
            mq2+=QString("mq2:%1.").arg(v);
              data=mq2;
        }else if(address==9){
            mq2+=QString("%1;").arg(v);
            data=mq2;
        }else if(address==10){
            rain+=QString("rain:%1.").arg(v);
              data=rain;
        }else if(address==11){
            rain+=QString("%1}").arg(v);
            data=rain;
        }else{
             data="暂无数据";
        }

    }


    return data;
}
