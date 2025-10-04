#include "deb.h"
#include "ui_deb.h"

Deb::Deb(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Deb)
{
    ui->setupUi(this);
    setFixedSize(529,495);
     QString imagePath=QApplication::applicationDirPath();
    ui->exit_bt->setIcon(QIcon(imagePath+"/img/exit.png"));
    ui->clear_bt->setIcon(QIcon(imagePath+"/img/clear_b.png"));
    ui->pushButton_2->setIcon(QIcon(imagePath+"/img/clearS.png"));
    ui->send_bt->setIcon(QIcon(imagePath+"/img/send.png"));
    ui->rec_edi->setEnabled(false);
}

Deb::~Deb()
{
    delete ui;
}

void Deb::DisplayData(QString data)
{
    ui->rec_edi->appendPlainText(data);
}



void Deb::on_exit_bt_clicked()
{
    this->close();
}


void Deb::on_clear_bt_clicked()
{
     ui->rec_edi->clear();
}


void Deb::on_pushButton_2_clicked()
{
     ui->send_edi->clear();
}


void Deb::on_send_bt_clicked()
{
    QString sendText = ui->send_edi->text();

    if (!sendText.isEmpty()) {
        // 在接收框显示发送的内容
        ui->rec_edi->appendPlainText("-> " + sendText);

        // 发出信号，让主窗口处理发送
        emit sendDataRequested(sendText);

        // 清空发送框
        ui->send_edi->clear();
    }
}

