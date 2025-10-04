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
    QFrame *frame;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelTEMP;
    QLabel *label_11WATER;
    QLabel *label_12LIght;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTemp;
    QLabel *labelHumia;
    QLabel *labelLight;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelWater1;
    QLabel *label_20YA;
    QLabel *label_21Water2;
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
    QPushButton *pushButtonZhuji;
    QLabel *labelDUANKAI;
    QLabel *labelmod;
    QFrame *line;
    QLabel *label_6wIFI;
    QGroupBox *groupBox;
    QWidget *layoutWidget_3;
    QVBoxLayout *verticalLayout;
    QLabel *labelIp;
    QLabel *labelTuqi;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditAddress;
    QLineEdit *lineEdit_2Port;
    QProgressBar *progressBar;
    QGroupBox *groupBox_5;
    QPushButton *set_light_bt;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QPushButton *pushButton_9Clear2;
    QPushButton *pushButton_6X2;
    QPushButton *pushButtonD1;
    QPushButton *pushButtonShua1;
    QPushButton *pushButton_5Clear1;
    QPushButton *pushButtonX1;
    QPushButton *pushButton_3Shua2;
    QPushButton *pushButtonD2;
    QLabel *setlightNumla_2;
    QLabel *setlightNumla;
    QLabel *label;
    QCheckBox *ModbusCheck;
    QPushButton *pushButtonModBus;
    QLabel *label_2;
    QPushButton *pushButtoSerial;
    QCheckBox *ChecSerial;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1080, 766);
        MainWindow->setStyleSheet(QString::fromUtf8("/* \347\275\221\346\230\223\344\272\221\351\237\263\344\271\220\351\243\216\346\240\274\346\232\227\350\211\262\344\270\273\351\242\230 */\n"
"QMainWindow {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                stop:0 #1a1a1a, stop:0.5 #2d2d2d, stop:1 #1e1e1e);\n"
"    border: none;\n"
"}\n"
"\n"
"/* \345\210\206\347\273\204\346\241\206\346\240\267\345\274\217 - \347\275\221\346\230\223\344\272\221\351\243\216\346\240\274\347\232\204\345\215\241\347\211\207\345\274\217\350\256\276\350\256\241 */\n"
"QMainWindow QGroupBox {\n"
"    background-color: rgba(40, 40, 40, 0.8);\n"
"    border: 1px solid #404040;\n"
"    border-radius: 8px;\n"
"    margin-top: 10px;\n"
"    padding-top: 10px;\n"
"    color: #e0e0e0;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QMainWindow QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 0 8px;\n"
"    background-color: #2d2d2d;\n"
"    color: #ffffff;\n"
"    border-radius: 4px;\n"
"}"
                        "\n"
"\n"
"/* Frame\346\240\267\345\274\217 */\n"
"QMainWindow QFrame {\n"
"    background-color: rgba(45, 45, 45, 0.9);\n"
"    border: 1px solid #404040;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"/* \346\240\207\347\255\276\346\240\267\345\274\217 */\n"
"QMainWindow QLabel {\n"
"    background-color: transparent;\n"
"    color: #e0e0e0;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* \347\211\271\346\256\212\346\240\207\347\255\276 - \346\227\266\351\227\264\346\230\276\347\244\272\347\255\211 */\n"
"QMainWindow QLabel#time_1,\n"
"QMainWindow QLabel[label_4] {\n"
"    color: #ffffff;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* \347\212\266\346\200\201\346\240\207\347\255\276 - WiFi\343\200\201\345\274\200\345\205\263\347\212\266\346\200\201 */\n"
"QMainWindow QLabel#labelDUANKAI,\n"
"QMainWindow QLabel#label_6wIFI {\n"
"    color: #1db954; /* \347\275\221\346\230\223\344\272\221\347\273\277 */\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* \350\276\223\345\205\245\346\241\206\346\240\267\345"
                        "\274\217 */\n"
"QMainWindow QLineEdit {\n"
"    background-color: #333333;\n"
"    border: 1px solid #555555;\n"
"    border-radius: 4px;\n"
"    padding: 6px 8px;\n"
"    color: #ffffff;\n"
"    font-size: 14px;\n"
"    selection-background-color: #1db954;\n"
"}\n"
"\n"
"QMainWindow QLineEdit:focus {\n"
"    border: 1px solid #1db954;\n"
"    background-color: #3a3a3a;\n"
"}\n"
"\n"
"/* \345\244\215\351\200\211\346\241\206\346\240\267\345\274\217 */\n"
"QMainWindow QCheckBox {\n"
"    background-color: transparent;\n"
"    color: #e0e0e0;\n"
"    spacing: 8px;\n"
"}\n"
"\n"
"QMainWindow QCheckBox::indicator {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border: 1px solid #666666;\n"
"    border-radius: 3px;\n"
"    background-color: #333333;\n"
"}\n"
"\n"
"QMainWindow QCheckBox::indicator:checked {\n"
"    background-color: #1db954;\n"
"    border: 1px solid #1db954;\n"
"    image: url(:/checked.png); /* \345\217\257\344\273\245\350\256\276\347\275\256\345\257\271\345\213\276\345\233\276\346\240\207 */\n"
""
                        "}\n"
"\n"
"QMainWindow QCheckBox::indicator:hover {\n"
"    border: 1px solid #888888;\n"
"}\n"
"\n"
"/* \346\273\221\345\212\250\346\235\241\346\240\267\345\274\217 */\n"
"QMainWindow QSlider::groove:horizontal {\n"
"    border: 1px solid #444444;\n"
"    height: 4px;\n"
"    background-color: #444444;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QMainWindow QSlider::handle:horizontal {\n"
"    background-color: #1db954;\n"
"    border: 1px solid #1db954;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border-radius: 8px;\n"
"    margin: -6px 0;\n"
"}\n"
"\n"
"QMainWindow QSlider::handle:horizontal:hover {\n"
"    background-color: #1ed760;\n"
"    border: 1px solid #1ed760;\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\240\267\345\274\217\344\277\235\346\214\201\344\270\215\345\217\230 */\n"
"QMainWindow QPushButton,\n"
"QMainWindow QToolButton {\n"
"    border: none;\n"
"    background-color: transparent;\n"
"    outline: none;\n"
"    padding: 8px 12px;\n"
"    border-radius: 4px;\n"
"    font-size: 14px"
                        ";\n"
"    color: #e0e0e0;\n"
"}\n"
"\n"
"QMainWindow QPushButton:hover,\n"
"QMainWindow QToolButton:hover {\n"
"    background-color: #FFE4E6;\n"
"    border: none;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QMainWindow QPushButton:pressed,\n"
"QMainWindow QToolButton:pressed {\n"
"    background-color: #F3E8FF;\n"
"    border: none;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QMainWindow QPushButton:focus,\n"
"QMainWindow QToolButton:focus {\n"
"    outline: none;\n"
"    border: none;\n"
"}\n"
"\n"
"/* \347\211\271\346\256\212\346\214\211\351\222\256 - \346\270\205\347\251\272\343\200\201\350\256\276\347\275\256\346\214\211\351\222\256 */\n"
"QMainWindow QPushButton#clear_yu_bt,\n"
"QMainWindow QPushButton#set_yu_bt,\n"
"QMainWindow QPushButton#set_light_bt {\n"
"    background-color: #404040;\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QMainWindow QPushButton#clear_yu_bt:hover,\n"
"QMainWindow QPushButton#set_yu_bt:hover,\n"
"QMainWindow QPushButton#set_light_bt:hover {\n"
"    background-color: #4a4a4a;\n"
"}\n"
"\n"
"/"
                        "* \347\272\277\346\235\241\345\210\206\351\232\224\347\254\246 */\n"
"QMainWindow Line {\n"
"    background-color: #404040;\n"
"    border: none;\n"
"}"));
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
        groupBox_6->setGeometry(QRect(583, 560, 241, 81));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setPointSize(12);
        font.setBold(true);
        groupBox_6->setFont(font);
        groupBox_6->setStyleSheet(QString::fromUtf8("color: rgb(170, 170, 255);"));
        groupBox_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(210, 50, 16, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font1.setBold(true);
        label_23->setFont(font1);
        line_4 = new QFrame(groupBox_6);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(130, 30, 3, 34));
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(230, 0, 621, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName("label_4");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(false);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(170, 170, 255);\n"
"font: 700 12pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));

        horizontalLayout->addWidget(label_4);

        time_l = new QLabel(layoutWidget);
        time_l->setObjectName("time_l");
        time_l->setEnabled(true);
        QPalette palette;
        QBrush brush(QColor(170, 170, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush3(QColor(255, 0, 0, 128));
        brush3.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush5(QColor(0, 0, 0, 128));
        brush5.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        time_l->setPalette(palette);
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font3.setPointSize(14);
        font3.setBold(true);
        font3.setItalic(false);
        time_l->setFont(font3);
        time_l->setStyleSheet(QString::fromUtf8("color: rgb(170, 170, 255);\n"
"font: 700 14pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        time_l->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(time_l);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(20, 370, 471, 231));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(550, 80, 521, 311));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        groupBox_3 = new QGroupBox(centralwidget);
        groupBox_3->setObjectName("groupBox_3");
        groupBox_3->setGeometry(QRect(270, 60, 271, 301));
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
        labelTEMP = new QLabel(groupBox_3);
        labelTEMP->setObjectName("labelTEMP");
        labelTEMP->setStyleSheet(QString::fromUtf8("border-image: url(:/img/temp.png);"));

        horizontalLayout_3->addWidget(labelTEMP);

        label_11WATER = new QLabel(groupBox_3);
        label_11WATER->setObjectName("label_11WATER");
        label_11WATER->setStyleSheet(QString::fromUtf8("border-image: url(:/img/humi.png);"));

        horizontalLayout_3->addWidget(label_11WATER);

        label_12LIght = new QLabel(groupBox_3);
        label_12LIght->setObjectName("label_12LIght");
        label_12LIght->setStyleSheet(QString::fromUtf8("border-image: url(:/img/light.png);"));

        horizontalLayout_3->addWidget(label_12LIght);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelTemp = new QLabel(groupBox_3);
        labelTemp->setObjectName("labelTemp");
        labelTemp->setEnabled(true);

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
        labelWater1 = new QLabel(groupBox_3);
        labelWater1->setObjectName("labelWater1");
        labelWater1->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/img/humi_soil.png);"));

        horizontalLayout_6->addWidget(labelWater1);

        label_20YA = new QLabel(groupBox_3);
        label_20YA->setObjectName("label_20YA");
        label_20YA->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/img/mq2.png);"));

        horizontalLayout_6->addWidget(label_20YA);

        label_21Water2 = new QLabel(groupBox_3);
        label_21Water2->setObjectName("label_21Water2");
        label_21Water2->setStyleSheet(QString::fromUtf8("border-image: url(:/img/rain.png);"));

        horizontalLayout_6->addWidget(label_21Water2);


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
        groupBox_4->setGeometry(QRect(843, 447, 221, 201));
        groupBox_4->setFont(font);
        groupBox_4->setStyleSheet(QString::fromUtf8("color: rgb(170, 170, 255);"));
        groupBox_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        soil_yu_la = new QLineEdit(groupBox_4);
        soil_yu_la->setObjectName("soil_yu_la");
        soil_yu_la->setGeometry(QRect(120, 30, 71, 31));
        rain_yu_la = new QLineEdit(groupBox_4);
        rain_yu_la->setObjectName("rain_yu_la");
        rain_yu_la->setGeometry(QRect(120, 67, 71, 31));
        temp_yu_la = new QLineEdit(groupBox_4);
        temp_yu_la->setObjectName("temp_yu_la");
        temp_yu_la->setGeometry(QRect(120, 100, 71, 31));
        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(200, 40, 21, 16));
        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(200, 70, 21, 16));
        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(200, 110, 21, 16));
        set_yu_bt = new QPushButton(groupBox_4);
        set_yu_bt->setObjectName("set_yu_bt");
        set_yu_bt->setGeometry(QRect(10, 160, 30, 30));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        set_yu_bt->setFont(font5);
        set_yu_bt->setStyleSheet(QString::fromUtf8("border-image: url(:/img/set.png);"));
        clear_yu_bt = new QPushButton(groupBox_4);
        clear_yu_bt->setObjectName("clear_yu_bt");
        clear_yu_bt->setGeometry(QRect(60, 160, 38, 32));
        clear_yu_bt->setFont(font5);
        clear_yu_bt->setStyleSheet(QString::fromUtf8("border-image: url(:/img/clear_yu.png);"));
        checkBox = new QCheckBox(groupBox_4);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 40, 111, 21));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font6.setPointSize(12);
        checkBox->setFont(font6);
        checkBox_2 = new QCheckBox(groupBox_4);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setGeometry(QRect(10, 70, 83, 19));
        checkBox_3 = new QCheckBox(groupBox_4);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setGeometry(QRect(10, 100, 83, 19));
        checkBox_4 = new QCheckBox(groupBox_4);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setGeometry(QRect(10, 130, 83, 19));
        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(200, 140, 21, 16));
        light_yu_la = new QLineEdit(groupBox_4);
        light_yu_la->setObjectName("light_yu_la");
        light_yu_la->setGeometry(QRect(120, 130, 71, 31));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 260, 241, 101));
        groupBox_2->setFont(font4);
        horizontalLayout_10 = new QHBoxLayout(groupBox_2);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        pushButtonZhuji = new QPushButton(groupBox_2);
        pushButtonZhuji->setObjectName("pushButtonZhuji");
        pushButtonZhuji->setMinimumSize(QSize(40, 40));
        pushButtonZhuji->setMaximumSize(QSize(40, 40));
        pushButtonZhuji->setStyleSheet(QString::fromUtf8("border-image: url(:/img/server.png);"));

        horizontalLayout_9->addWidget(pushButtonZhuji);

        labelDUANKAI = new QLabel(groupBox_2);
        labelDUANKAI->setObjectName("labelDUANKAI");
        labelDUANKAI->setMaximumSize(QSize(25, 25));
        labelDUANKAI->setStyleSheet(QString::fromUtf8("border-image: url(:/img/discon.png);"));

        horizontalLayout_9->addWidget(labelDUANKAI);

        labelmod = new QLabel(groupBox_2);
        labelmod->setObjectName("labelmod");

        horizontalLayout_9->addWidget(labelmod);

        line = new QFrame(groupBox_2);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout_9->addWidget(line);

        label_6wIFI = new QLabel(groupBox_2);
        label_6wIFI->setObjectName("label_6wIFI");
        label_6wIFI->setStyleSheet(QString::fromUtf8("border-image: url(:/img/wifi_off.png);"));

        horizontalLayout_9->addWidget(label_6wIFI);


        horizontalLayout_10->addLayout(horizontalLayout_9);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 90, 251, 161));
        groupBox->setFont(font4);
        layoutWidget_3 = new QWidget(groupBox);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(10, 30, 71, 111));
        verticalLayout = new QVBoxLayout(layoutWidget_3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        labelIp = new QLabel(layoutWidget_3);
        labelIp->setObjectName("labelIp");
        labelIp->setStyleSheet(QString::fromUtf8("border-image: url(:/img/ip.png);\n"
""));

        verticalLayout->addWidget(labelIp);

        labelTuqi = new QLabel(layoutWidget_3);
        labelTuqi->setObjectName("labelTuqi");
        labelTuqi->setStyleSheet(QString::fromUtf8("\n"
"border-image: url(:/img/duan.png);"));

        verticalLayout->addWidget(labelTuqi);

        layoutWidget_4 = new QWidget(groupBox);
        layoutWidget_4->setObjectName("layoutWidget_4");
        layoutWidget_4->setGeometry(QRect(90, 30, 144, 111));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEditAddress = new QLineEdit(layoutWidget_4);
        lineEditAddress->setObjectName("lineEditAddress");
        lineEditAddress->setMinimumSize(QSize(0, 50));
        lineEditAddress->setMaximumSize(QSize(16777215, 50));

        verticalLayout_2->addWidget(lineEditAddress);

        lineEdit_2Port = new QLineEdit(layoutWidget_4);
        lineEdit_2Port->setObjectName("lineEdit_2Port");
        lineEdit_2Port->setMinimumSize(QSize(0, 50));
        lineEdit_2Port->setMaximumSize(QSize(16777215, 50));

        verticalLayout_2->addWidget(lineEdit_2Port);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(593, 600, 118, 23));
        progressBar->setValue(24);
        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName("groupBox_5");
        groupBox_5->setGeometry(QRect(580, 460, 211, 93));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font7.setPointSize(13);
        font7.setBold(true);
        groupBox_5->setFont(font7);
        groupBox_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        set_light_bt = new QPushButton(groupBox_5);
        set_light_bt->setObjectName("set_light_bt");
        set_light_bt->setGeometry(QRect(70, 60, 66, 31));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush6(QColor(64, 64, 64, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush6);
        QBrush brush7(QColor(51, 51, 51, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush7);
        QBrush brush8(QColor(170, 170, 255, 128));
        brush8.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush8);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush7);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush8);
#endif
        set_light_bt->setPalette(palette1);
        QFont font8;
        font8.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font8.setBold(false);
        set_light_bt->setFont(font8);
        set_light_bt->setStyleSheet(QString::fromUtf8("color: rgb(170, 170, 255);"));
        horizontalSlider = new QSlider(groupBox_5);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(10, 40, 191, 22));
        horizontalSlider->setStyleSheet(QString::fromUtf8(""));
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(720, 600, 61, 31));
        pushButton_9Clear2 = new QPushButton(centralwidget);
        pushButton_9Clear2->setObjectName("pushButton_9Clear2");
        pushButton_9Clear2->setGeometry(QRect(440, 600, 41, 41));
        pushButton_9Clear2->setStyleSheet(QString::fromUtf8("border-image: url(:/img/clearS.png);"));
        pushButton_6X2 = new QPushButton(centralwidget);
        pushButton_6X2->setObjectName("pushButton_6X2");
        pushButton_6X2->setGeometry(QRect(150, 600, 41, 41));
        pushButton_6X2->setStyleSheet(QString::fromUtf8("border-image: url(:/img/small.png);"));
        pushButtonD1 = new QPushButton(centralwidget);
        pushButtonD1->setObjectName("pushButtonD1");
        pushButtonD1->setGeometry(QRect(10, 600, 41, 41));
        pushButtonD1->setStyleSheet(QString::fromUtf8("border-image: url(:/img/big.png);"));
        pushButtonShua1 = new QPushButton(centralwidget);
        pushButtonShua1->setObjectName("pushButtonShua1");
        pushButtonShua1->setGeometry(QRect(80, 600, 41, 41));
        pushButtonShua1->setStyleSheet(QString::fromUtf8("border-image: url(:/img/rest.png);"));
        pushButton_5Clear1 = new QPushButton(centralwidget);
        pushButton_5Clear1->setObjectName("pushButton_5Clear1");
        pushButton_5Clear1->setGeometry(QRect(1030, 400, 41, 41));
        pushButton_5Clear1->setStyleSheet(QString::fromUtf8("border-image: url(:/img/clearS.png);"));
        pushButtonX1 = new QPushButton(centralwidget);
        pushButtonX1->setObjectName("pushButtonX1");
        pushButtonX1->setGeometry(QRect(670, 400, 41, 41));
        pushButtonX1->setStyleSheet(QString::fromUtf8("border-image: url(:/img/small.png);"));
        pushButton_3Shua2 = new QPushButton(centralwidget);
        pushButton_3Shua2->setObjectName("pushButton_3Shua2");
        pushButton_3Shua2->setGeometry(QRect(620, 400, 41, 41));
        pushButton_3Shua2->setStyleSheet(QString::fromUtf8("border-image: url(:/img/rest.png);"));
        pushButtonD2 = new QPushButton(centralwidget);
        pushButtonD2->setObjectName("pushButtonD2");
        pushButtonD2->setGeometry(QRect(560, 400, 41, 41));
        pushButtonD2->setStyleSheet(QString::fromUtf8("border-image: url(:/img/big.png);"));
        setlightNumla_2 = new QLabel(centralwidget);
        setlightNumla_2->setObjectName("setlightNumla_2");
        setlightNumla_2->setGeometry(QRect(690, 490, 16, 20));
        QFont font9;
        setlightNumla_2->setFont(font9);
        setlightNumla_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        setlightNumla = new QLabel(centralwidget);
        setlightNumla->setObjectName("setlightNumla");
        setlightNumla->setGeometry(QRect(650, 489, 31, 21));
        setlightNumla->setFont(font9);
        setlightNumla->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 221, 61));
        ModbusCheck = new QCheckBox(centralwidget);
        ModbusCheck->setObjectName("ModbusCheck");
        ModbusCheck->setGeometry(QRect(180, 30, 99, 24));
        pushButtonModBus = new QPushButton(centralwidget);
        pushButtonModBus->setObjectName("pushButtonModBus");
        pushButtonModBus->setGeometry(QRect(110, 10, 61, 51));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(860, 10, 221, 61));
        pushButtoSerial = new QPushButton(centralwidget);
        pushButtoSerial->setObjectName("pushButtoSerial");
        pushButtoSerial->setGeometry(QRect(940, 10, 121, 51));
        pushButtoSerial->setStyleSheet(QString::fromUtf8(""));
        ChecSerial = new QCheckBox(centralwidget);
        ChecSerial->setObjectName("ChecSerial");
        ChecSerial->setGeometry(QRect(1060, 640, 16, 16));
        MainWindow->setCentralWidget(centralwidget);
        setlightNumla_2->raise();
        setlightNumla->raise();
        groupBox_6->raise();
        layoutWidget->raise();
        frame_2->raise();
        frame->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        groupBox_2->raise();
        groupBox->raise();
        progressBar->raise();
        groupBox_5->raise();
        spinBox->raise();
        pushButton_9Clear2->raise();
        pushButton_6X2->raise();
        pushButtonD1->raise();
        pushButtonShua1->raise();
        pushButton_5Clear1->raise();
        pushButtonX1->raise();
        pushButton_3Shua2->raise();
        pushButtonD2->raise();
        label->raise();
        ModbusCheck->raise();
        pushButtonModBus->raise();
        label_2->raise();
        ChecSerial->raise();
        pushButtoSerial->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1080, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setMovable(true);
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
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "\346\243\200\346\265\213\351\203\250\345\210\206", nullptr));
        labelTEMP->setText(QString());
        label_11WATER->setText(QString());
        label_12LIght->setText(QString());
        labelTemp->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        labelHumia->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        labelLight->setText(QCoreApplication::translate("MainWindow", "N/A", nullptr));
        labelWater1->setText(QString());
        label_20YA->setText(QString());
        label_21Water2->setText(QString());
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
        pushButtonZhuji->setText(QString());
        labelDUANKAI->setText(QString());
        labelmod->setText(QCoreApplication::translate("MainWindow", "\344\270\273\346\234\272\346\250\241\345\274\217", nullptr));
        label_6wIFI->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\347\275\221\347\273\234\351\205\215\347\275\256", nullptr));
        labelIp->setText(QString());
        labelTuqi->setText(QString());
        groupBox_5->setTitle(QCoreApplication::translate("MainWindow", "\345\205\211\345\274\272\346\216\247\345\210\266", nullptr));
        set_light_bt->setText(QCoreApplication::translate("MainWindow", "\350\256\276\345\256\232", nullptr));
        pushButton_9Clear2->setText(QString());
        pushButton_6X2->setText(QString());
        pushButtonD1->setText(QString());
        pushButtonShua1->setText(QString());
        pushButton_5Clear1->setText(QString());
        pushButtonX1->setText(QString());
        pushButton_3Shua2->setText(QString());
        pushButtonD2->setText(QString());
        setlightNumla_2->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        setlightNumla->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "ModBus\350\256\276\347\275\256", nullptr));
        ModbusCheck->setText(QString());
        pushButtonModBus->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\231\256\351\200\232\344\270\262\345\217\243", nullptr));
        pushButtoSerial->setText(QString());
        ChecSerial->setText(QString());
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
