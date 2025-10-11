#include "sql.h"
#include "ui_sql.h"
#include <qmessagebox.h>
#include<QSqlRecord>
#include<QFileDialog>
Sql::Sql(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Sql)
{
    ui->setupUi(this);
    QString imagePath=QApplication::applicationDirPath();
    ui->icon->setPixmap(QPixmap(imagePath+"/img/data_nie.png"));
    ui->icon->setScaledContents(true);
    initUi();
    initDatabase();


}

Sql::~Sql()
{
    delete ui;
}

void Sql::initDataBaseThread()
{
    m_sqlThread=new QThread(this);
    m_sqliteWork=new SqliteWork;
    m_sqliteWork->moveToThread(m_sqlThread);
    connect(m_sqlThread, &QThread::started, m_sqliteWork, &SqliteWork::initConnect);
    connect(this,&Sql::requestInsert,m_sqliteWork,&SqliteWork::receiveInsert);
    connect(m_sqlThread,&QThread::finished,this,&Sql::deleteLater);
    connect(m_sqliteWork,&SqliteWork::isOkInser,this,&Sql::autoRef);
    connect(this,&Sql::clearData,m_sqliteWork,&SqliteWork::clearData);
    connect(m_sqliteWork, &SqliteWork::clearFinished,this, &Sql::onClearFinished);
    connect(this,&Sql::fileOut,m_sqliteWork,&SqliteWork::fileOut);

    m_sqlThread->start();
}


void Sql::UpdataToDataBase(float Stemp, float Shumi, float Slight, float Ssoil, float Smq2, float Srain)
{
    emit requestInsert(Stemp,Shumi, Slight, Ssoil, Smq2,Srain);
}



void Sql::initDatabase()
{
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE","connectionA");
    db.setDatabaseName("Stock.db");
    if(!db.open()){
        QMessageBox::critical(0,"tip","数据库创建失败");
    }
    QSqlQuery query(QSqlDatabase::database("connectionA"));
    query.exec("CREATE TABLE IF NOT EXISTS qtdata ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
               "CurrenTime TEXT, "
               "temp REAL, "
               "humi REAL, "
               "light REAL, "
               "soil REAL, "
               "mq2 REAL, "
               "rain REAL)");
    if( !query.exec("CREATE TABLE IF NOT EXISTS login ("
                   "name VARCHAR(50) PRIMARY KEY, "
                   "password VARCHAR(50) NOT NULL, "
                    "type VARCHAR(20) NOT NULL)")){qDebug()<<"login 创建失败";}
    if( !query.exec("insert ")){qDebug()<<"login 插入失败";}




    m_tableMod = new QSqlQueryModel;

    initDataBaseThread();
}

void Sql::initUi()
{

    setFixedSize(710,657);
    ui->tableView->setColumnWidth(0,80);
    ui->tableView->setColumnWidth(1,200);
    ui->tableView->setColumnWidth(2,70);
    ui->tableView->setColumnWidth(3,70);
    ui->tableView->setColumnWidth(4,70);
    ui->tableView->setColumnWidth(5,70);
    ui->tableView->setColumnWidth(6,70);
    ui->tableView->setColumnWidth(7,70);
    ui->comboBox->addItem("temp");
    ui->comboBox->addItem("humi");
    ui->comboBox->addItem("light");
    ui->comboBox->addItem("soil");
    ui->comboBox->addItem("mq2");
    ui->comboBox->addItem("rain");
    ui->dateTimeEditStart_2->setDisplayFormat("yyyy-MM-dd HH:mm:ss");
    ui->dateTimeEditEnd_2->setDisplayFormat("yyyy-MM-dd HH:mm:ss");
    ui->dateTimeEditStart_2->setDateTime(QDateTime::currentDateTime().addSecs(0));
    ui->dateTimeEditEnd_2->setDateTime(QDateTime::currentDateTime().addSecs(0));

}


void Sql::SelectData()
{

    QString start=ui->dateTimeEditStart_2->text();
    QString end=ui->dateTimeEditEnd_2->text();

    QSqlQuery query((QSqlDatabase::database("connectionA")));
    query.prepare("SELECT * FROM qtdata WHERE CurrenTime BETWEEN ? AND ?");
    query.addBindValue(start);
    query.addBindValue(end);
    if (query.exec()) {
        m_tableMod->setQuery(query);
    }
    ui->tableView->setModel(m_tableMod);


}

void Sql::on_exit_bt_clicked()
{
    this->close();
}


void Sql::on_select_data_bt_clicked()
{
    SelectData();
    isauto=false;
}


void Sql::on_displayAll_bt_clicked()
{    QSqlQuery query((QSqlDatabase::database("connectionA")));
    query.prepare("SELECT * FROM qtdata;");
    if (query.exec()) {
        m_tableMod->setQuery(query);
    }
    ui->tableView->setModel(m_tableMod);
    isauto=true;
}


void Sql::on_now_bt_2_clicked()
{    isauto=false;
    ui->dateTimeEditEnd_2->setDateTime(QDateTime::currentDateTime().addSecs(0));

}


void Sql::on_currDay_bt_clicked()
{     isauto=false;
    ui->dateTimeEditStart_2->setDateTime(QDateTime::currentDateTime().addDays(-1));
    ui->dateTimeEditEnd_2->setDateTime(QDateTime::currentDateTime().addDays(0));
    SelectData();

}


void Sql::on_currThDay_bt_clicked()
{    isauto=false;
    ui->dateTimeEditStart_2->setDateTime(QDateTime::currentDateTime().addDays(-3));
    ui->dateTimeEditEnd_2->setDateTime(QDateTime::currentDateTime().addDays(0));
    SelectData();
}


void Sql::on_currWeek_bt_clicked()
{ isauto=false;
    ui->dateTimeEditStart_2->setDateTime(QDateTime::currentDateTime().addDays(-7));
    ui->dateTimeEditEnd_2->setDateTime(QDateTime::currentDateTime().addDays(0));
    SelectData();
}


void Sql::on_select_val_bt_clicked()
{    isauto=false;
    QString strNum = ui->comboBox->currentText();

    //获取上下值
    QString min = ui->spinBox->text();
    QString max= ui->spinBox_2->text();

    QSqlQuery query((QSqlDatabase::database("connectionA")));
    query.prepare("select *from qtdata where ?>= ? AND humi<=?;");
    query.addBindValue(strNum);
    query.addBindValue(min);
    query.addBindValue(max);

    if (query.exec()) {
        m_tableMod->setQuery(query);
    }
    m_tableMod->setQuery(query);
    ui->tableView->setModel(m_tableMod);
}


void Sql::on_clear_bt_clicked()
{

    emit clearData();

}

void Sql::userIn(const islogin &s)
{
       qDebug()<<"testuserin";

    QSqlQuery query(QSqlDatabase::database("connectionA"));
    query.prepare("SELECT type FROM login WHERE login.name=? AND login.password=?;");
    query.addBindValue(s.name);
    query.addBindValue(s.password);

    qDebug()<<query.boundValues();

    if(query.exec()){
     qDebug()<<"此处执行sql";
        QSqlRecord r;
        if(query.next()){
            r=query.record();
            QString type=r.value("type").toString();
            qDebug()<<type;
            if(type=="管理员"){
                qDebug()<<"此处为管理员登录";
                emit signaluserIn(true);

            }else{
                qDebug()<<"此处员登录";
                emit signaluserIn(false);
            }
        }
    }

}

void Sql::autoRef(bool t)
{
    if(t){
    if(isauto){
            QSqlQuery query((QSqlDatabase::database("connectionA")));
            query.prepare("SELECT * FROM qtdata;");
            m_tableMod->setQuery(query);
        ui->tableView->setModel(m_tableMod);
    }
    }
}

void Sql::onClearFinished(bool success)
{
    if (success) {
        // 清除成功后才刷新显示
        QSqlQuery query(QSqlDatabase::database("connectionA"));
        query.prepare("SELECT * FROM qtdata;");
        if (query.exec()) {
            m_tableMod->setQuery(query);
            ui->tableView->setModel(m_tableMod);
        }
        //qDebug() << "数据库清除完成，界面已刷新";
    } else {
        //qDebug() << "数据库清除失败";
    }
}



void Sql::on_pushButtonExls_clicked()//导出
{
        //-------------此处标记-----------------

    QString filename=QFileDialog::getSaveFileName(this,"XLS","我被导出了","CSV Files (*.csv);;All File (*)");
    emit fileOut(filename);

}




void Sql::on_pushButtonPicture_clicked()
{
    m_picture=new DataBasePicture(ui->dateTimeEditStart_2->text(),ui->dateTimeEditEnd_2->text());
    connect(m_picture, &DataBasePicture::dataLoadFinished, this, [this]() {
        qDebug() << "数据加载完成，显示窗口";
        m_picture->show();
    });
    QSqlQuery query(QSqlDatabase::database("connectionA"));
    query.prepare("select CurrenTime, temp, humi, light, soil, mq2, rain from qtdata where CurrenTime BETWEEN ? and ?");
    query.addBindValue(ui->dateTimeEditStart_2->text());
    query.addBindValue(ui->dateTimeEditEnd_2->text());

    if(!query.exec()){
        qDebug() << "执行失败";
        return;
    }

    QSqlRecord record = query.record();
    while(query.next()){
        QStringList row;
        for(int i = 0; i < record.count(); i++){
            row << query.value(i).toString();
        }
        m_picture->addChartData(row);  // 改为 addChartData
    }

    // 所有数据添加完成后发射信号
    m_picture->finishDataLoading();

    m_picture->setAttribute(Qt::WA_DeleteOnClose);
}

