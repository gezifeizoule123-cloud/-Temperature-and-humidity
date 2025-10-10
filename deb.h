#ifndef DEB_H
#define DEB_H

#include <QWidget>
#include <qtimer.h>

namespace Ui {
class Deb;
}

class Deb : public QWidget
{
    Q_OBJECT

public:
    explicit Deb(QWidget *parent = nullptr);
    ~Deb();
    void DisplayData(QString data);

private slots:
    void on_exit_bt_clicked();

    void on_clear_bt_clicked();

    void on_pushButton_2_clicked();

    void on_send_bt_clicked();
    void on_checkBox_stateChanged(int arg1);

signals:
     void sendDataRequested(const QString &data);
    void modbusRequest();
     void modbusReceiveMasterData(const QString &data);
private:
    Ui::Deb *ui;
    QTimer m_timer;

};

#endif // DEB_H
