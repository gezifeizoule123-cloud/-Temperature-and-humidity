#ifndef SQL_H
#define SQL_H

#include <QWidget>
#include<QSql>
#include<QSqlDatabase>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QThread>

namespace Ui {
class Sql;
}

class Sql : public QWidget
{
    Q_OBJECT

public:
    explicit Sql(QWidget *parent = nullptr);
    ~Sql();
   void UpdataToDataBase(float Stemp,float  Shumi,float  Slight,float  Ssoil,float  Smq2,float  Srain);
    void initDatabase();
   void initUi();

   void SelectData();
     void autoRef(bool t);
signals:
   void requestInsert(float Stemp,float  Shumi,float  Slight,float  Ssoil,float  Smq2,float  Srain);
    void clearData();
public slots:
    void on_exit_bt_clicked();
    void onClearFinished(bool success);
    void on_select_data_bt_clicked();

    void on_displayAll_bt_clicked();

    void on_now_bt_2_clicked();

    void on_currDay_bt_clicked();

    void on_currThDay_bt_clicked();

    void on_currWeek_bt_clicked();

    void on_select_val_bt_clicked();

    void on_clear_bt_clicked();


private:
    Ui::Sql *ui;
    QSqlQueryModel *m_tableMod;
    bool isauto=true;//自动实时刷新

};

#endif // SQL_H
