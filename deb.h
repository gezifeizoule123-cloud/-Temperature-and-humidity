#ifndef DEB_H
#define DEB_H

#include <QWidget>

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
signals:
     void sendDataRequested(const QString &data);
private:
    Ui::Deb *ui;
};

#endif // DEB_H
