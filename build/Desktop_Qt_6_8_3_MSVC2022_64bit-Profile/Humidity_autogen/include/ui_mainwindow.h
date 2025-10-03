/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *exit;
    QAction *data;
    QAction *debug;
    QAction *water;
    QAction *led;
    QAction *openwif;
    QAction *auto_2;
    QWidget *centralwidget;
    QGroupBox *groupBox_6;
    QLabel *label_23;
    QFrame *line_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *time_l;
    QFrame *frame_2;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QFrame *frame;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTemp;
    QLabel *labelHumia;
    QLabel *labelLight;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelSoil;
    QLabel *labelMq2;
    QLabel *labelRain;
    QGroupBox *groupBox_4;
    QLineEdit *soil_yu_la;
    QLineEdit *rain_yu_la;
    QLineEdit *temp_yu_la;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *set_yu_bt;
    QPushButton *clear_yu_bt;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QLabel *label_22;
    QLineEdit *light_yu_la;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_10;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *pushButton;
    QLabel *label_5;
    QLabel *label_3;
    QFrame *line;
    QLabel *label_6;
    QGroupBox *groupBox;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QProgressBar *progressBar;
    QGroupBox *groupBox_5;
    QPushButton *set_light_bt;
    QSlider *horizontalSlider;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *setlightNumla;
    QLabel *setlightNumla_2;
    QSpinBox *spinBox;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1040, 691);
        exit = new QAction(MainWindow);
        exit->setObjectName("exit");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/exit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        exit->setIcon(icon);
        exit->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        data = new QAction(MainWindow);
        data->setObjectName("data");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/data.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        data->setIcon(icon1);
        data->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        debug = new QAction(MainWindow);
        debug->setObjectName("debug");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/app.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        debug->setIcon(icon2);
        debug->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        water = new QAction(MainWindow);
        water->setObjectName("water");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/relay_off.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        water->setIcon(icon3);
        water->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        led = new QAction(MainWindow);
        led->setObjectName("led");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/led_off.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        led->setIcon(icon4);
        led->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        openwif = new QAction(MainWindow);
        openwif->setObjectName("openwif");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/close.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        openwif->setIcon(icon5);
        openwif->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        auto_2 = new QAction(MainWindow);
        auto_2->setObjectName("auto_2");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/auto.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        auto_2->setIcon(icon6);
        auto_2->setMenuRole(QAction::MenuRole::TextHeuristicRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox_6 = new QGroupBox(centralwidget);
        groupBox_6->setObjectName("groupBox_6");
        groupBox_6->setGeometry(QRect(563, 512, 216, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(13);
        groupBox_6->setFont(font);
        groupBox_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(200, 30, 16, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font1.setPointSize(15);
        label_23->setFont(font1);
        line_4 = new QFrame(groupBox_6);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(130, 21, 3, 34));
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(80, 0, 761, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font2.setPointSize(20);
        label_4->setFont(font2);

        horizontalLayout->addWidget(label_4);

        time_l = new QLabel(layoutWidget);
        time_l->setObjectName("time_l");
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush1(QColor(255, 0, 0, 128));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        QBrush brush2(QColor(120, 120, 120, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush2);
        QBrush brush3(QColor(0, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        time_l->setPalette(palette);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\346\226\271\346\255\243\350\210\222\344\275\223")});
        font3.setPointSize(20);
        time_l->setFont(font3);
        time_l->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(time_l);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 370, 471, 231));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_9 = new QPushButton(frame_2);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setGeometry(QRect(430, 190, 41, 41));
        pushButton_9->setStyleSheet(QString::fromUtf8("border-image: url(:/img/clearS.png);"));
        pushButton_8 = new QPushButton(frame_2);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setGeometry(QRect(0, 190, 41, 41));
        pushButton_8->setStyleSheet(QString::fromUtf8("border-image: url(:/img/big.png);"));
        pushButton_7 = new QPushButton(frame_2);
        pushButton_7->setObjectName("pushButton_7");
        pushButton_7->setGeometry(QRect(80, 190, 41, 41));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-image: url(:/img/rest.png);"));
        pushButton_6 = new QPushButton(frame_2);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(150, 190, 41, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("border-image: url(:/img/small.png);"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(500, 90, 521, 311));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(20, 240, 41, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/img/big.png);"));
        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(100, 240, 41, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("border-image: url(:/img/rest.png);"));
        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(170, 240, 41, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("border-image: url(:/img/small.png);"));
        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(450, 240, 41, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("border-image: url(:/img/clearS.png);"));
        pushButton_4->raise();
        pushButton_3->raise();
        pushButton_2->raise();
        pushButton_5->raise();
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(270, 60, 221, 301));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font4.setPointSize(11);
        font4.setBold(true);
        groupBox_3->setFont(font4);
        groupBox_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("border-image: url(:/img/temp.png);"));

        horizontalLayout_3->addWidget(label_10);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName("label_11");
        label_11->setStyleSheet(QString::fromUtf8("border-image: url(:/img/humi.png);"));

        horizontalLayout_3->addWidget(label_11);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("border-image: url(:/img/light.png);"));

        horizontalLayout_3->addWidget(label_12);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelTemp = new QLabel(groupBox_3);
        labelTemp->setObjectName("labelTemp");

        horizontalLayout_2->addWidget(labelTemp);

        labelHumia = new QLabel(groupBox_3);
        labelHumia->setObjectName("labelHumia");

        horizontalLayout_2->addWidget(labelHumia);

        labelLight = new QLabel(groupBox_3);
        labelLight->setObjectName("labelLight");

        horizontalLayout_2->addWidget(labelLight);


        verticalLayout_3->addLayout(horizontalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName("label_19");
        label_19->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/img/humi_soil.png);"));

        horizontalLayout_6->addWidget(label_19);

        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName("label_20");
        label_20->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/img/mq2.png);"));

        horizontalLayout_6->addWidget(label_20);

        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName("label_21");
        label_21->setStyleSheet(QString::fromUtf8("border-image: url(:/img/rain.png);"));

        horizontalLayout_6->addWidget(label_21);


        verticalLayout_5->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        labelSoil = new QLabel(groupBox_3);
        labelSoil->setObjectName("labelSoil");

        horizontalLayout_7->addWidget(labelSoil);

        labelMq2 = new QLabel(groupBox_3);
        labelMq2->setObjectName("labelMq2");

        horizontalLayout_7->addWidget(labelMq2);

        labelRain = new QLabel(groupBox_3);
        labelRain->setObjectName("labelRain");

        horizontalLayout_7->addWidget(labelRain);


        verticalLayout_5->addLayout(horizontalLayout_7);


        verticalLayout_6->addLayout(verticalLayout_5);


        verticalLayout_7->addLayout(verticalLayout_6);

        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName("groupBox_4");
        groupBox_4->setGeometry(QRect(823, 407, 201, 167));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font5.setPointSize(12);
        groupBox_4->setFont(font5);
        groupBox_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        soil_yu_la = new QLineEdit(groupBox_4);
        soil_yu_la->setObjectName("soil_yu_la");
        soil_yu_la->setGeometry(QRect(100, 30, 71, 21));
        rain_yu_la = new QLineEdit(groupBox_4);
        rain_yu_la->setObjectName("rain_yu_la");
        rain_yu_la->setGeometry(QRect(100, 58, 71, 21));
        temp_yu_la = new QLineEdit(groupBox_4);
        temp_yu_la->setObjectName("temp_yu_la");
        temp_yu_la->setGeometry(QRect(100, 88, 71, 21));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(176, 33, 21, 16));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(177, 61, 21, 16));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(177, 89, 21, 16));
        set_yu_bt = new QPushButton(groupBox_4);
        set_yu_bt->setObjectName("set_yu_bt");
        set_yu_bt->setGeometry(QRect(29, 138, 30, 30));
        set_yu_bt->setFont(font);
        set_yu_bt->setStyleSheet(QString::fromUtf8("border-image: url(:/img/set.png);"));
        clear_yu_bt = new QPushButton(groupBox_4);
        clear_yu_bt->setObjectName("clear_yu_bt");
        clear_yu_bt->setGeometry(QRect(108, 137, 38, 32));
        clear_yu_bt->setFont(font5);
        clear_yu_bt->setStyleSheet(QString::fromUtf8("border-image: url(:/img/clear_yu.png);"));
        checkBox = new QCheckBox(groupBox_4);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 30, 83, 19));
        checkBox->setFont(font5);
        checkBox_2 = new QCheckBox(groupBox_4);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(10, 58, 83, 19));
        checkBox_3 = new QCheckBox(groupBox_4);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(10, 88, 83, 19));
        checkBox_4 = new QCheckBox(groupBox_4);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(10, 118, 83, 19));
        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(177, 119, 21, 16));
        light_yu_la = new QLineEdit(groupBox_4);
        light_yu_la->setObjectName("light_yu_la");
        light_yu_la->setGeometry(QRect(100, 119, 71, 20));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 260, 241, 101));
        groupBox_2->setFont(font4);
        horizontalLayout_10 = new QHBoxLayout(groupBox_2);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        pushButton = new QPushButton(groupBox_2);
        pushButton->setObjectName("pushButton");
        pushButton->setStyleSheet(QString::fromUtf8("border-image: url(:/img/server.png);"));

        horizontalLayout_9->addWidget(pushButton);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("border-image: url(:/img/discon.png);"));

        horizontalLayout_9->addWidget(label_5);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");

        horizontalLayout_9->addWidget(label_3);

        line = new QFrame(groupBox_2);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_9->addWidget(line);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("border-image: url(:/img/wifi_off.png);"));

        horizontalLayout_9->addWidget(label_6);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 100, 251, 151));
        groupBox->setFont(font4);
        layoutWidget_3 = new QWidget(groupBox);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 30, 71, 111));
        verticalLayout = new QVBoxLayout(layoutWidget_3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_3);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/img/ip.png);\n"
""));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(layoutWidget_3);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/img/duan.png);"));

        verticalLayout->addWidget(label_2);

        layoutWidget_4 = new QWidget(groupBox);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(90, 30, 144, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget_4);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(0, 50));
        lineEdit->setMaximumSize(QSize(16777215, 50));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget_4);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setMinimumSize(QSize(0, 50));
        lineEdit_2->setMaximumSize(QSize(16777215, 50));

        verticalLayout_2->addWidget(lineEdit_2);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(573, 540, 118, 23));
        progressBar->setValue(24);
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(560, 420, 211, 93));
        groupBox_5->setFont(font);
        groupBox_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        set_light_bt = new QPushButton(groupBox_5);
        set_light_bt->setObjectName("set_light_bt");
        set_light_bt->setGeometry(QRect(70, 60, 66, 25));
        QPalette palette1;
        QBrush brush4(QColor(51, 51, 51, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush4);
        set_light_bt->setPalette(palette1);
        QFont font6;
        font6.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font6.setPointSize(10);
        set_light_bt->setFont(font6);
        set_light_bt->setStyleSheet(QString::fromUtf8(""));
        horizontalSlider = new QSlider(groupBox_5);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(10, 40, 191, 22));
        horizontalSlider->setStyleSheet(QString::fromUtf8(""));
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        layoutWidget_2 = new QWidget(centralwidget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(640, 442, 41, 27));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        setlightNumla = new QLabel(layoutWidget_2);
        setlightNumla->setObjectName("setlightNumla");
        QFont font7;
        font7.setPointSize(12);
        setlightNumla->setFont(font7);
        setlightNumla->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_8->addWidget(setlightNumla);

        setlightNumla_2 = new QLabel(layoutWidget_2);
        setlightNumla_2->setObjectName("setlightNumla_2");
        setlightNumla_2->setFont(font7);
        setlightNumla_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout_8->addWidget(setlightNumla_2);

        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(700, 540, 61, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1040, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(openwif);
        toolBar->addSeparator();
        toolBar->addAction(led);
        toolBar->addAction(water);
        toolBar->addAction(auto_2);
        toolBar->addSeparator();
        toolBar->addAction(data);
        toolBar->addAction(debug);
        toolBar->addSeparator();
        toolBar->addAction(exit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        exit->setText(QCoreApplication::translate("MainWindow", "exit", nullptr));
        data->setText(QCoreApplication::translate("MainWindow", "data", nullptr));
        debug->setText(QCoreApplication::translate("MainWindow", "debug", nullptr));
        water->setText(QCoreApplication::translate("MainWindow", "water", nullptr));
        led->setText(QCoreApplication::translate("MainWindow", "led", nullptr));
        openwif->setText(QCoreApplication::translate("MainWindow", "wif", nullptr));
        auto_2->setText(QCoreApplication::translate("MainWindow", "auto", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "\350\223\204\346\260\264\347\212\266\346\200\201", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "s", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\237\272\344\272\216\347\211\251\350\201\224\347\275\221\347\232\204\347\233\206\346\240\275\346\260\264\345\210\206\350\207\252\345\212\250\344\277\235\346\214\201\347\263\273\347\273\237", nullptr));
        time_l->setText(QCoreApplication::translate("MainWindow", "12\357\274\23200\357\274\23200", nullptr));
        pushButton_9->setText(QString());
        pushButton_8->setText(QString());
        pushButton_7->setText(QString());
        pushButton_6->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\351\203\250\345\210\206", nullptr));
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        labelTemp->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        labelHumia->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        labelLight->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        label_19->setText(QString());
        label_20->setText(QString());
        label_21->setText(QString());
        labelSoil->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        labelMq2->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        labelRain->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\351\230\210\345\200\274\350\256\276\345\256\232", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        set_yu_bt->setText(QString());
        clear_yu_bt->setText(QString());
        checkBox->setText(QCoreApplication::translate("MainWindow", "\345\234\237\345\243\244\346\271\277\345\272\246", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "\351\233\250    \346\273\264", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "\346\270\251    \345\272\246", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "\345\205\211    \345\274\272", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\346\250\241\345\274\217\351\200\211\346\213\251", nullptr));
        pushButton->setText(QString());
        label_5->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\344\270\273\346\234\272\346\250\241\345\274\217", nullptr));
        label_6->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\347\275\221\347\273\234\351\205\215\347\275\256", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\345\205\211\345\274\272\346\216\247\345\210\266", nullptr));
        set_light_bt->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\256\232", nullptr));
        setlightNumla->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        setlightNumla_2->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
