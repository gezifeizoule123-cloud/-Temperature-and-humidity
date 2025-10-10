#ifndef SQL_H
#define SQL_H

#include "sqlitework.h"
#include <QWidget>
#include<QSql>
#include<QSqlDatabase>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QThread>
#include"loginIDandPassword.h"
#include "databasepicture.h"
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
   void initDataBaseThread();
     void searchPerson();
signals:
   void requestInsert(float Stemp,float  Shumi,float  Slight,float  Ssoil,float  Smq2,float  Srain);
    void isRoot(bool s);
    void clearData();
    void signaluserIn(bool isRoot);
    void fileOut(const QString &filename);
    void signalTimePicture(const QString &startTime,const QString &endTime);
    void signalSelectOnPictureData(const QString &startTime,const QString &endTime);
    void isOrNoSelectOk();

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

 void userIn(const islogin &s);
private slots:


    void on_pushButtonExls_clicked();



    void on_pushButtonPicture_clicked();

private:
    Ui::Sql *ui;
    QSqlQueryModel *m_tableMod;
    bool isauto=true;//自动实时刷新
    QThread * m_sqlThread;
    SqliteWork *m_sqliteWork;
    DataBasePicture *m_picture;

};

#endif // SQL_H
