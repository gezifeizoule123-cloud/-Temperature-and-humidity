/********************************************************************************
** Form generated from reading UI file 'mymodbus.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMODBUS_H
#define UI_MYMODBUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyModBus
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *mIP_COM;
    QLineEdit *m_Port;
    QComboBox *mType;
    QLabel *label_3;
    QComboBox *MasterOrSlave;
    QLabel *label_5;
    QLineEdit *mAddr;
    QLabel *label_4;
    QLabel *label_11;
    QComboBox *sTable;
    QGroupBox *groupBox;
    QLabel *label_6;
    QComboBox *portName;
    QComboBox *baudRate;
    QLabel *label_7;
    QComboBox *dataBits;
    QLabel *label_8;
    QComboBox *parity;
    QLabel *label_9;
    QComboBox *stopBits;
    QLabel *label_10;
    QComboBox *flowControl;
    QLabel *label_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyModBus)
    {
        if (MyModBus->objectName().isEmpty())
            MyModBus->setObjectName("MyModBus");
        MyModBus->resize(790, 582);
        MyModBus->setStyleSheet(QString::fromUtf8("\n"
"QWidget\n"
"{  \n"
"	font:  16pt \"Microsoft YaHei\";\n"
"     color:  #ffffff;\n"
"}\n"
"\n"
"QLabel {\n"
"	font:  14pt \"Microsoft YaHei\";\n"
"    color: #4fa08b;\n"
"}\n"
"\n"
"QGroupBox {\n"
"    border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;   \n"
"\n"
"}\n"
"\n"
"QGroupBox::title {\n"
" \n"
"    subcontrol-origin: margin;\n"
"    left:20px;\n"
"    padding: -10px 5px 0px 5px;\n"
"}\n"
"\n"
"QMainWindow {\n"
"	background-color:#151a1e;\n"
"}\n"
"QCalendar {\n"
"	background-color: #151a1e;\n"
"}\n"
"QTextEdit {\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"	background-color: #222b2e;\n"
"	color: #d3dae3;\n"
"}\n"
"QPlainTextEdit {\n"
"    font:  10pt \"Microsoft YaHei\";\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"	background-color: #222b2e;\n"
"	color: #d3dae3;\n"
"}\n"
"QToolButton {\n"
"	border-style: solid;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(21"
                        "5, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(217, 217, 217), stop:1 rgb(227, 227, 227));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(227, 227, 227), stop:1 rgb(217, 217, 217));\n"
"	border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"	background-color: rgb(255,255,255);\n"
"}\n"
"QToolButton:hover{\n"
"	border-style: solid;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(195, 195, 195), stop:1 rgb(222, 222, 222));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(197, 197, 197), stop:1 rgb(227, 227, 227));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(227, 227, 227), stop:1 rgb(19"
                        "7, 197, 197));\n"
"	border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(195, 195, 195), stop:1 rgb(222, 222, 222));\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: rgb(0,0,0);\n"
"	padding: 2px;\n"
"	background-color: rgb(255,255,255);\n"
"}\n"
"QToolButton:pressed{\n"
"	border-style: solid;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-right-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(217, 217, 217), stop:1 rgb(227, 227, 227));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(227, 227, 227), stop:1 rgb(217, 217, 217));\n"
"	border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: rgb(0,0,0);\n"
"	padding: 2px;\n"
"	background-color: rgb(142,142,142);\n"
"}\n"
""
                        "QPushButton{\n"
"\n"
"    border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b; \n"
" \n"
"	border-radius: 5px;\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"	background-color: #151a1e;\n"
"}\n"
"QPushButton::default{\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #FFFFFF;\n"
"	padding: 2px;\n"
"	background-color: #151a1e;;\n"
"}\n"
"QPushButton:hover{\n"
"	border-style: solid;\n"
"	border-color: #050a0e;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"	background-color: #1c1f1f;\n"
"}\n"
"QPushButton:pressed{\n"
"	border-style: solid;\n"
"	border-color: #050a0e;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #d3dae3;\n"
"	padding: 2px;\n"
"	background-color: #2c2f2f;\n"
"}\n"
"QPushButton:disabled{\n"
"	border-style: solid;\n"
"	border-top-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-"
                        "right-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(217, 217, 217), stop:1 rgb(227, 227, 227));\n"
"	border-left-color: qlineargradient(spread:pad, x1:0, y1:0.5, x2:1, y2:0.5, stop:0 rgb(227, 227, 227), stop:1 rgb(217, 217, 217));\n"
"	border-bottom-color: qlineargradient(spread:pad, x1:0.5, y1:1, x2:0.5, y2:0, stop:0 rgb(215, 215, 215), stop:1 rgb(222, 222, 222));\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	color: #808086;\n"
"	padding: 2px;\n"
"	background-color: rgb(142,142,142);\n"
"}\n"
"QLineEdit {\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"	background-color: #222b2e;\n"
"	color: #d3dae3;\n"
"}\n"
"\n"
"\n"
"\n"
"QLCDNumber {\n"
"	color: #4d9b87;\n"
"}\n"
"QProgressBar {\n"
"	text-align: center;\n"
"	color: #d3dae3;\n"
"	border-radius: 10px;\n"
"	border-color: transparent;\n"
"	border-style: solid;\n"
"	background-color: #52595d;\n"
"}\n"
"QProgressBar::chunk {\n"
"	background-color: #214037	;\n"
"	border-radius: 10px;\n"
"}\n"
""
                        "QMenuBar {\n"
"	background-color: #151a1e;\n"
"}\n"
"QMenuBar::item {\n"
"	color: #d3dae3;\n"
"  	spacing: 3px;\n"
"  	padding: 1px 4px;\n"
"	background-color: #151a1e;\n"
"}\n"
"\n"
"QMenuBar::item:selected {\n"
"  	background-color: #252a2e;\n"
"	color: #FFFFFF;\n"
"}\n"
"QMenu {\n"
"	background-color: #151a1e;\n"
"}\n"
"QMenu::item:selected {\n"
"	background-color: #252a2e;\n"
"	color: #FFFFFF;\n"
"}\n"
"QMenu::item {\n"
"	color: #d3dae3;\n"
"	background-color: #151a1e;\n"
"}\n"
"QTabWidget {\n"
"	color:rgb(0,0,0);\n"
"	background-color:#000000;\n"
"}\n"
"QTabWidget::pane {\n"
"		border-color: #050a0e;\n"
"		background-color: #1e282c;\n"
"		border-style: solid;\n"
"		border-width: 1px;\n"
"    	border-bottom-left-radius: 4px;\n"
"		border-bottom-right-radius: 4px;\n"
"}\n"
"QTabBar::tab:first {\n"
"	border-style: solid;\n"
"	border-left-width:1px;\n"
"	border-right-width:0px;\n"
"	border-top-width:1px;\n"
"	border-bottom-width:0px;\n"
"	border-top-color: #050a0e;\n"
"	border-left-color: #050a0e;\n"
"	border"
                        "-bottom-color: #050a0e;\n"
"	border-top-left-radius: 4px;\n"
"	color: #d3dae3;\n"
"	padding: 3px;\n"
"	margin-left:0px;\n"
"	background-color: #151a1e;\n"
"}\n"
"QTabBar::tab:last {\n"
"	border-style: solid;\n"
"	border-top-width:1px;\n"
"	border-left-width:1px;\n"
"	border-right-width:1px;\n"
"	border-bottom-width:0px;\n"
"	border-color: #050a0e;\n"
"	border-top-right-radius: 4px;\n"
"	color: #d3dae3;\n"
"	padding: 3px;\n"
"	margin-left:0px;\n"
"	background-color: #151a1e;\n"
"}\n"
"QTabBar::tab {\n"
"	border-style: solid;\n"
"	border-top-width:1px;\n"
"	border-bottom-width:0px;\n"
"	border-left-width:1px;\n"
"	border-top-color: #050a0e;\n"
"	border-left-color: #050a0e;\n"
"	border-bottom-color: #050a0e;\n"
"	color: #d3dae3;\n"
"	padding: 3px;\n"
"	margin-left:0px;\n"
"	background-color: #151a1e;\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:last:selected, QTabBar::tab:hover {\n"
"  	border-style: solid;\n"
"  	border-left-width:1px;\n"
"	border-bottom-width:0px;\n"
"	border-right-color: transparent;\n"
"	bor"
                        "der-top-color: #050a0e;\n"
"	border-left-color: #050a0e;\n"
"	border-bottom-color: #050a0e;\n"
"	color: #FFFFFF;\n"
"	padding: 3px;\n"
"	margin-left:0px;\n"
"	background-color: #1e282c;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:first:selected, QTabBar::tab:hover {\n"
"  	border-style: solid;\n"
"  	border-left-width:1px;\n"
"  	border-bottom-width:0px;\n"
"  	border-top-width:1px;\n"
"	border-right-color: transparent;\n"
"	border-top-color: #050a0e;\n"
"	border-left-color: #050a0e;\n"
"	border-bottom-color: #050a0e;\n"
"	color: #FFFFFF;\n"
"	padding: 3px;\n"
"	margin-left:0px;\n"
"	background-color: #1e282c;\n"
"}\n"
"\n"
"QCheckBox { \n"
"	padding: 2px;\n"
"}\n"
"QCheckBox:disabled {\n"
"	color: #808086;\n"
"	padding: 2px;\n"
"}\n"
"\n"
"QCheckBox:hover {\n"
"	border-radius:4px;\n"
"	border-style:solid;\n"
"	padding-left: 1px;\n"
"	padding-right: 1px;\n"
"	padding-bottom: 1px;\n"
"	padding-top: 1px;\n"
"	border-width:1px;\n"
"	border-color: transparent;\n"
"}\n"
"QCheckBox::indicator:checked {\n"
"\n"
""
                        "	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-width: 1px;\n"
"	border-color: #4fa08b; \n"
"	background-color:  #4fa08b;\n"
"}\n"
"QCheckBox::indicator:unchecked {\n"
"\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-width: 1px;\n"
"	border-color: #4fa08b;\n"
"	background-color:  #FFFFFF;\n"
"}\n"
"QRadioButton {\n"
"	color: #d3dae3;\n"
"	padding: 1px;\n"
"}\n"
"QRadioButton::indicator:checked {\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-color: #4fa08b;\n"
"	color: #a9b7c6;\n"
"	background-color: qradialgradient(cx:0.5, cy:0.5, radius:0.4,fx:0.5, fy:0.5, stop:0 #4fa08b, stop:1 #1e282c);\n"
"}\n"
"QRadioButton::indicator:!checked {\n"
"	height: 10px;\n"
"	width: 10px;\n"
"	border-style:solid;\n"
"	border-radius:5px;\n"
"	border-width: 1px;\n"
"	border-color: #4fa08b;\n"
"	color: #a9b7c6;\n"
"	background-color: transparent;\n"
"}\n"
"QStatusBar {\n"
"	color:#027f7f;\n"
"}\n"
"QSpinBox {"
                        "\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QDoubleSpinBox {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QTimeEdit {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QDateTimeEdit {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QDateEdit {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QFontComboBox {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"QComboBox {\n"
"	color: #d3dae3;\n"
"	background-color: #222b2e;\n"
"	border-width: 1px;\n"
"	border-styl"
                        "e: solid;\n"
"	border-color: #4fa08b;\n"
"}\n"
"/* \344\270\213\346\213\211\345\220\216\357\274\214\346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\346\240\267\345\274\217 */\n"
"QComboBox QAbstractItemView {\n"
"    outline: 0px solid gray;   /* \351\200\211\345\256\232\351\241\271\347\232\204\350\231\232\346\241\206 */\n"
"    border: 1px solid  #4fa08b;   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\347\232\204\350\276\271\346\241\206 */ \n"
"    background-color: #222b2e; /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"    selection-background-color: #4fa08b;   /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\350\242\253\351\200\211\344\270\255\351\241\271\347\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"QComboBox:disabled\n"
"{ \n"
"background-color: gray; /* \346\225\264\344\270\252\344\270\213\346\213\211\347\252\227\344\275\223\347"
                        "\232\204\350\203\214\346\231\257\350\211\262 */\n"
"}\n"
"\n"
"\n"
"/*\350\241\250\346\240\274\345\244\264\351\203\250*/\n"
"\n"
"QHeaderView             \n"
"{\n"
"    background:transparent;   \n"
"	border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;    \n"
"}\n"
"\n"
"QHeaderView::section          \n"
"{\n"
"    font-size:14px;                 \n"
"    font-family:\"Microsoft YaHei\"; \n"
"    color:#FFFFFF;   \n"
"    background:#222b2e;     \n"
"    \n"
"  \n"
"}  \n"
"\n"
"\n"
"QTableWidget::item::selected      \n"
"{\n"
"    border-width: 1px;\n"
"	border-style: solid;\n"
"	border-color: #4fa08b;    \n"
"}\n"
"\n"
"\n"
" \n"
"QTableWidget            \n"
"{ \n"
"    font-size:16px;                \n"
"    font-family:\"Microsoft YaHei\";  \n"
"    color:#ffffff;  \n"
"	background-color: #222b2e;     \n"
"}\n"
" \n"
" \n"
" \n"
" "));
        centralwidget = new QWidget(MyModBus);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 101, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 100, 101, 31));
        mIP_COM = new QLineEdit(centralwidget);
        mIP_COM->setObjectName("mIP_COM");
        mIP_COM->setGeometry(QRect(9, 130, 331, 41));
        m_Port = new QLineEdit(centralwidget);
        m_Port->setObjectName("m_Port");
        m_Port->setGeometry(QRect(9, 210, 331, 41));
        mType = new QComboBox(centralwidget);
        mType->setObjectName("mType");
        mType->setGeometry(QRect(9, 40, 331, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 180, 101, 31));
        MasterOrSlave = new QComboBox(centralwidget);
        MasterOrSlave->setObjectName("MasterOrSlave");
        MasterOrSlave->setGeometry(QRect(10, 320, 331, 41));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 390, 101, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        label_5->setFont(font);
        mAddr = new QLineEdit(centralwidget);
        mAddr->setObjectName("mAddr");
        mAddr->setGeometry(QRect(10, 440, 101, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        mAddr->setFont(font1);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 290, 151, 31));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(170, 390, 111, 41));
        sTable = new QComboBox(centralwidget);
        sTable->setObjectName("sTable");
        sTable->setGeometry(QRect(120, 440, 221, 41));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(360, 0, 411, 491));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 70, 111, 41));
        portName = new QComboBox(groupBox);
        portName->setObjectName("portName");
        portName->setGeometry(QRect(150, 70, 211, 41));
        baudRate = new QComboBox(groupBox);
        baudRate->setObjectName("baudRate");
        baudRate->setGeometry(QRect(150, 140, 211, 41));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 140, 111, 41));
        dataBits = new QComboBox(groupBox);
        dataBits->setObjectName("dataBits");
        dataBits->setGeometry(QRect(150, 210, 211, 41));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 210, 111, 41));
        parity = new QComboBox(groupBox);
        parity->setObjectName("parity");
        parity->setGeometry(QRect(150, 280, 211, 41));
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(40, 280, 111, 41));
        stopBits = new QComboBox(groupBox);
        stopBits->setObjectName("stopBits");
        stopBits->setGeometry(QRect(150, 360, 211, 41));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(40, 360, 111, 41));
        flowControl = new QComboBox(groupBox);
        flowControl->setObjectName("flowControl");
        flowControl->setGeometry(QRect(150, 440, 211, 41));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(40, 440, 111, 41));
        MyModBus->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyModBus);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 790, 38));
        MyModBus->setMenuBar(menubar);
        statusbar = new QStatusBar(MyModBus);
        statusbar->setObjectName("statusbar");
        MyModBus->setStatusBar(statusbar);

        retranslateUi(MyModBus);

        QMetaObject::connectSlotsByName(MyModBus);
    } // setupUi

    void retranslateUi(QMainWindow *MyModBus)
    {
        MyModBus->setWindowTitle(QCoreApplication::translate("MyModBus", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MyModBus", "\351\200\232\350\256\257\346\226\271\345\274\217", nullptr));
        label_2->setText(QCoreApplication::translate("MyModBus", "IP\346\210\226COM", nullptr));
        label_3->setText(QCoreApplication::translate("MyModBus", "\347\253\257\345\217\243", nullptr));
        label_5->setText(QCoreApplication::translate("MyModBus", "\344\273\216\347\253\231\345\234\260\345\235\200", nullptr));
        label_4->setText(QCoreApplication::translate("MyModBus", "MasterOrSlave", nullptr));
        label_11->setText(QCoreApplication::translate("MyModBus", "\350\241\250\347\261\273\345\236\213", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MyModBus", "\344\270\262\345\217\243\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        label_6->setText(QCoreApplication::translate("MyModBus", "\347\253\257\345\217\243\345\220\215\347\247\260", nullptr));
        label_7->setText(QCoreApplication::translate("MyModBus", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_8->setText(QCoreApplication::translate("MyModBus", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_9->setText(QCoreApplication::translate("MyModBus", "\345\245\207\345\201\266\346\240\241\351\252\214", nullptr));
        label_10->setText(QCoreApplication::translate("MyModBus", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_12->setText(QCoreApplication::translate("MyModBus", "\346\265\201\346\216\247\345\210\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyModBus: public Ui_MyModBus {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMODBUS_H
