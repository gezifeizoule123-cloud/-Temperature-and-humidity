#ifndef DATABASEPICTURE_H
#define DATABASEPICTURE_H

#include <QWidget>

namespace Ui {
class DataBasePicture;
}

class DataBasePicture : public QWidget
{
    Q_OBJECT

public:
    explicit DataBasePicture(const QString &s,const QString &s1);
    ~DataBasePicture();

    void initUi(const QString &s, const QString &s1);
public slots:
    void addChartData(const QStringList &row);
    void finishDataLoading();
     signals:
    void dataLoadFinished();


private:
    Ui::DataBasePicture *ui;
    //温湿度变量
    float temp_data;
    float humi_data;
    float light_data;

    float soil_data;
    float mq2_data;

    float rain_data;

};

#endif // DATABASEPICTURE_H
