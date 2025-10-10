#include "databasepicture.h"
#include "ui_databasepicture.h"
#include <qchart.h>
#include <qchartview.h>
#include <qdatetime.h>
#include <qlineseries.h>
#include<QDateTimeAxis>
#include <qvalueaxis.h>
DataBasePicture::DataBasePicture(const QString &s, const QString &s1)
    : ui(new Ui::DataBasePicture)
{
    ui->setupUi(this);
    initUi(s,s1);

}

DataBasePicture::~DataBasePicture()
{
    delete ui;
}



void DataBasePicture::initUi(const QString &s,const QString &s1)
{
    qDebug()<<"initPicture";
    QChart *chart=new QChart;
    QChartView *chartview=new QChartView(chart);
    chartview->setRenderHint(QPainter::Antialiasing);
    QLayout *oldLayout=ui->frame->layout();
    if(oldLayout){
        delete oldLayout;

    }
    QVBoxLayout *vlayout=new QVBoxLayout(ui->frame);
    vlayout->addWidget(chartview);
    QLineSeries *series0=new QLineSeries;
    QLineSeries *series1 = new QLineSeries;
    QLineSeries *series2 = new QLineSeries;
    QLineSeries *series3=new QLineSeries;
    QLineSeries *series4 = new QLineSeries;
    QLineSeries *series5 = new QLineSeries;
    series0->setName("温度");
    series1->setName("湿度");
    series2->setName("光强");
    series3->setName("土壤湿度");
    series4->setName("有害气体");
    series5->setName("雨滴");
    chart->addSeries(series0);
    chart->addSeries(series1);
    chart->addSeries(series2);
    chart->addSeries(series3);
    chart->addSeries(series4);
    chart->addSeries(series5);

    QDateTimeAxis *axisX = new QDateTimeAxis;
    axisX->setFormat("yyyy-MM-dd hh:mm:ss");
    axisX->setTickCount(5);
    axisX->setTitleText("time(s)");
    chart->setAxisX(axisX,series0);
    chart->setAxisX(axisX,series1);
    chart->setAxisX(axisX,series2);
    chart->setAxisX(axisX,series3);
    chart->setAxisX(axisX,series4);
    chart->setAxisX(axisX,series5);
    QValueAxis  *axisY = new QValueAxis;
    axisY->setRange(0,100);
    chart->setAxisY(axisY,series0);
    chart->setAxisY(axisY,series1);
    chart->setAxisY(axisY,series2);
    chart->setAxisY(axisY,series3);
    chart->setAxisY(axisY,series4);
    chart->setAxisY(axisY,series5);

    chart->axisX()->setMin(s);
    chart->axisX()->setMax(s1);
    chartview->setStyleSheet(R"(
        QChartView {
            background-color: #FFF0F5;
            border: 1px solid #FFB6C1;
            border-radius: 5px;
        }
    )");

}

void DataBasePicture::addChartData(const QStringList &row)
{
    QChartView *chartview=qobject_cast<QChartView*>(ui->frame->layout()->itemAt(0)->widget());
    QChart *chart=chartview->chart();
    QLineSeries *series0=(QLineSeries*)chartview->chart()->series().at(0);
    QLineSeries *series1=(QLineSeries*)chartview->chart()->series().at(1);
    QLineSeries *series2=(QLineSeries*)chartview->chart()->series().at(2);
    QLineSeries *series3=(QLineSeries*)chartview->chart()->series().at(3);
    QLineSeries *series4=(QLineSeries*)chartview->chart()->series().at(4);
    QLineSeries *series5=(QLineSeries*)chartview->chart()->series().at(5);
    //时间戳（毫秒）

    qDebug()<<row.at(0).toFloat()<<"+"<<row.at(1).toFloat();
    QString timeString = row.at(0);
    QDateTime dateTime = QDateTime::fromString(timeString, "yyyy-MM-dd hh:mm:ss");
    series0->append(dateTime.toMSecsSinceEpoch(),row.at(1).toFloat());
    series1->append(dateTime.toMSecsSinceEpoch(),row.at(2).toFloat());
    series2->append(dateTime.toMSecsSinceEpoch(),row.at(3).toFloat());
    series3->append(dateTime.toMSecsSinceEpoch(),row.at(4).toFloat());
    series4->append(dateTime.toMSecsSinceEpoch(),row.at(5).toFloat());
    series5->append(dateTime.toMSecsSinceEpoch(),row.at(6).toFloat());


}

void DataBasePicture::finishDataLoading()
{
 emit dataLoadFinished();
}



