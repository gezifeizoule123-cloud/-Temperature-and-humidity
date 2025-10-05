#include "login.h"
#include "ui_login.h"

Login::Login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Login)
{
    ui->setupUi(this);
    m_mainwindow=new MainWindow;

    connect(m_mainwindow,&MainWindow::closeLogin,this,&Login::islog);
    connect(this,&Login::userIn,m_mainwindow,&MainWindow::receiveLogin);

}

Login::~Login()
{
    delete ui;
}

void Login::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Return ||event->key()==Qt::Key_Enter){
        on_pushButton_clicked();
        event->accept();
    }else{
        QMainWindow::keyPressEvent(event);  // 调用父类处理其他按键
    }
}



void Login::on_pushButton_clicked()
{
    islogin s;
    s.name=ui->lineEditName->text();
    s.password=ui->lineEditPassword->text();

    qDebug()<<"test btn";
    emit userIn(s);

}

void Login::islog()
{
    m_mainwindow->show();

    this->hide();
}

