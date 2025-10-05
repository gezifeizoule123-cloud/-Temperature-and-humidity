#ifndef LOGIN_H
#define LOGIN_H

#include "mainwindow.h"
#include <QMainWindow>
#include"loginIDandPassword.h"
#include"sql.h"
namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    void keyPressEvent(QKeyEvent *event) override;
private slots:
    void on_pushButton_clicked();
    void islog();

private:
    Ui::Login *ui;
    MainWindow *m_mainwindow=nullptr;

signals:
    void userIn(const islogin &s);

};

#endif // LOGIN_H
