
#include"login.h"
#include <QApplication>
#include"mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login log;
    log.show();

    return a.exec();
}
