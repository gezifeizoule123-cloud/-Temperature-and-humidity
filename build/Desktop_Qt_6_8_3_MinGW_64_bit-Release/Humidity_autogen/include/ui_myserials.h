/********************************************************************************
** Form generated from reading UI file 'myserials.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSERIALS_H
#define UI_MYSERIALS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MySerials
{
public:
    QPushButton *openButton;
    QPushButton *sendButton;
    QLineEdit *timelineEdit;
    QPlainTextEdit *sendTextEdit;
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *portName;
    QComboBox *baudRate;
    QLabel *label_2;
    QComboBox *dataBits;
    QLabel *label_3;
    QComboBox *parity;
    QLabel *label_4;
    QComboBox *stopBits;
    QLabel *label_5;
    QComboBox *flowControl;
    QLabel *label_6;
    QPlainTextEdit *recvTextEdit;
    QLabel *label_7;
    QCheckBox *checkBox;

    void setupUi(QWidget *MySerials)
    {
        if (MySerials->objectName().isEmpty())
            MySerials->setObjectName("MySerials");
        MySerials->resize(929, 606);
        MySerials->setStyleSheet(QString::fromUtf8("/* \346\267\241\346\243\225\350\211\262\346\270\251\346\232\226\350\203\214\346\231\257 - QWidget\344\270\273\347\252\227\345\217\243 */\n"
"QWidget {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"                                stop:0 #f5e6d3, stop:0.5 #f0d9c0, stop:1 #ebccad);\n"
"    border: none;\n"
"}\n"
"\n"
"/* \345\210\206\347\273\204\346\241\206\346\240\267\345\274\217 - \347\231\275\350\211\262\345\215\241\347\211\207 */\n"
"QGroupBox {\n"
"    background-color: rgba(255, 255, 255, 0.9);\n"
"    border: 1px solid #d4b996;\n"
"    border-radius: 8px;\n"
"    margin-top: 10px;\n"
"    padding-top: 10px;\n"
"    color: #5c3713;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    subcontrol-position: top center;\n"
"    padding: 0 8px;\n"
"    background-color: #ffffff;\n"
"    color: #8b5a2b;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"/* Frame\346\240\267\345\274\217 */\n"
"QFrame {\n"
"    background-color: rgba(255, 255, 255, 0.85);"
                        "\n"
"    border: 1px solid #d4b996;\n"
"    border-radius: 6px;\n"
"}\n"
"\n"
"/* \346\231\256\351\200\232\346\240\207\347\255\276\346\240\267\345\274\217 */\n"
"QLabel {\n"
"    background-color: transparent;\n"
"    color: #5c3713;\n"
"    font-size: 14px;\n"
"}\n"
"\n"
"/* \347\211\271\346\256\212\346\240\207\347\255\276 - \346\227\266\351\227\264\346\230\276\347\244\272\347\255\211 */\n"
"QLabel#time_1 {\n"
"    color: #8b4513;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* \347\212\266\346\200\201\346\240\207\347\255\276 */\n"
"QLabel#labelDUANKAI,\n"
"QLabel#label_6wIFI {\n"
"    color: #d2691e;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* \350\276\223\345\205\245\346\241\206\346\240\267\345\274\217 - \346\267\241\347\262\211\350\211\262 */\n"
"QLineEdit {\n"
"    background-color: #FFE4E6;  /* \346\267\241\347\262\211\350\211\262 */\n"
"    border: 1px solid #f8c6cb;\n"
"    border-radius: 4px;\n"
"    padding: 6px 8px;\n"
"    color: #5c3713;  /* \346\243\225\350\211\262\346\226\207"
                        "\345\255\227 */\n"
"    font-size: 14px;\n"
"    selection-background-color: #f8c6cb;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border: 1px solid #f4a7b0;\n"
"    background-color: #ffdde0;\n"
"}\n"
"\n"
"/* \347\272\257\346\226\207\346\234\254\347\274\226\350\276\221\346\241\206 - \347\275\221\346\230\223\344\272\221\351\273\221 */\n"
"QPlainTextEdit {\n"
"    background-color: #2d2d2d;  /* \347\275\221\346\230\223\344\272\221\351\273\221 */\n"
"    border: 1px solid #404040;\n"
"    border-radius: 4px;\n"
"    padding: 6px 8px;\n"
"    color: #e0e0e0;  /* \346\265\205\347\201\260\350\211\262\346\226\207\345\255\227 */\n"
"    font-size: 14px;\n"
"    selection-background-color: #1db954;\n"
"}\n"
"\n"
"/* \350\241\250\346\240\274\350\247\206\345\233\276 - \347\275\221\346\230\223\344\272\221\351\273\221 */\n"
"QTableView {\n"
"    background-color: #2d2d2d;  /* \347\275\221\346\230\223\344\272\221\351\273\221 */\n"
"    border: 1px solid #404040;\n"
"    border-radius: 4px;\n"
"    color: #e0e0e0;\n"
"    grid"
                        "line-color: #404040;\n"
"    alternate-background-color: #333333;\n"
"}\n"
"\n"
"QTableView::item {\n"
"    background-color: #2d2d2d;\n"
"    color: #e0e0e0;\n"
"    border: none;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    background-color: #1db954;\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QTableView::item:hover {\n"
"    background-color: #3a3a3a;\n"
"}\n"
"\n"
"QHeaderView::section {\n"
"    background-color: #404040;\n"
"    color: #e0e0e0;\n"
"    padding: 6px;\n"
"    border: none;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"/* \345\244\215\351\200\211\346\241\206\346\240\267\345\274\217 */\n"
"QCheckBox {\n"
"    background-color: transparent;\n"
"    color: #5c3713;\n"
"    spacing: 8px;\n"
"}\n"
"\n"
"QCheckBox::indicator {\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border: 1px solid #b08f6d;\n"
"    border-radius: 3px;\n"
"    background-color: #ffffff;\n"
"}\n"
"\n"
"QCheckBox::indicator:checked {\n"
"    background-color: #d2691e;\n"
"    border: 1px solid #d2691e;"
                        "\n"
"}\n"
"\n"
"/* \346\273\221\345\212\250\346\235\241\346\240\267\345\274\217 */\n"
"QSlider::groove:horizontal {\n"
"    border: 1px solid #b08f6d;\n"
"    height: 4px;\n"
"    background-color: #e8d5c4;\n"
"    border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background-color: #d2691e;\n"
"    border: 1px solid #d2691e;\n"
"    width: 16px;\n"
"    height: 16px;\n"
"    border-radius: 8px;\n"
"    margin: -6px 0;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background-color: #e37c2b;\n"
"    border: 1px solid #e37c2b;\n"
"}\n"
"\n"
"/* \346\214\211\351\222\256\346\240\267\345\274\217 - \344\277\235\346\214\201\345\216\237\346\234\211\347\262\211\350\211\262\346\225\210\346\236\234 */\n"
"QPushButton,\n"
"QToolButton {\n"
"    border: none;\n"
"    background-color: transparent;\n"
"    outline: none;\n"
"    padding: 8px 12px;\n"
"    border-radius: 4px;\n"
"    font-size: 14px;\n"
"    color: #5c3713;  /* \346\243\225\350\211\262\346\226\207\345\255\227 */\n"
"}\n"
"\n"
""
                        "QPushButton:hover,\n"
"QToolButton:hover {\n"
"    background-color: #FFE4E6;  /* \346\267\241\347\262\211\350\211\262 */\n"
"    border: none;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QPushButton:pressed,\n"
"QToolButton:pressed {\n"
"    background-color: #F3E8FF;  /* \346\267\241\347\264\253\350\211\262 */\n"
"    border: none;\n"
"    color: #333333;\n"
"}\n"
"\n"
"QPushButton:focus,\n"
"QToolButton:focus {\n"
"    outline: none;\n"
"    border: none;\n"
"}\n"
"\n"
"/* \347\211\271\346\256\212\346\214\211\351\222\256\346\240\267\345\274\217 */\n"
"QPushButton#clear_yu_bt,\n"
"QPushButton#set_yu_bt,\n"
"QPushButton#set_light_bt {\n"
"    background-color: #d4b996;\n"
"    color: #5c3713;\n"
"}\n"
"\n"
"QPushButton#clear_yu_bt:hover,\n"
"QPushButton#set_yu_bt:hover,\n"
"QPushButton#set_light_bt:hover {\n"
"    background-color: #e0c9a8;\n"
"}\n"
"\n"
"/* \347\272\277\346\235\241\345\210\206\351\232\224\347\254\246 */\n"
"Line {\n"
"    background-color: #d4b996;\n"
"    border: none;\n"
"}\n"
"\n"
"/* \350\277"
                        "\233\345\272\246\346\235\241\346\240\267\345\274\217 */\n"
"QProgressBar {\n"
"    border: 1px solid #b08f6d;\n"
"    border-radius: 4px;\n"
"    text-align: center;\n"
"    color: #5c3713;\n"
"    background-color: #e8d5c4;\n"
"}\n"
"\n"
"QProgressBar::chunk {\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:0,\n"
"                                      stop:0 #d2691e, stop:1 #e37c2b);\n"
"    border-radius: 3px;\n"
"}"));
        openButton = new QPushButton(MySerials);
        openButton->setObjectName("openButton");
        openButton->setGeometry(QRect(10, 550, 141, 51));
        openButton->setStyleSheet(QString::fromUtf8(""));
        sendButton = new QPushButton(MySerials);
        sendButton->setObjectName("sendButton");
        sendButton->setGeometry(QRect(490, 550, 421, 51));
        sendButton->setStyleSheet(QString::fromUtf8(""));
        timelineEdit = new QLineEdit(MySerials);
        timelineEdit->setObjectName("timelineEdit");
        timelineEdit->setGeometry(QRect(260, 550, 141, 51));
        sendTextEdit = new QPlainTextEdit(MySerials);
        sendTextEdit->setObjectName("sendTextEdit");
        sendTextEdit->setGeometry(QRect(440, 410, 481, 131));
        groupBox = new QGroupBox(MySerials);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 10, 411, 531));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 70, 111, 41));
        portName = new QComboBox(groupBox);
        portName->setObjectName("portName");
        portName->setGeometry(QRect(150, 70, 211, 41));
        baudRate = new QComboBox(groupBox);
        baudRate->setObjectName("baudRate");
        baudRate->setGeometry(QRect(150, 140, 211, 41));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 140, 111, 41));
        dataBits = new QComboBox(groupBox);
        dataBits->setObjectName("dataBits");
        dataBits->setGeometry(QRect(150, 210, 211, 41));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 210, 111, 41));
        parity = new QComboBox(groupBox);
        parity->setObjectName("parity");
        parity->setGeometry(QRect(150, 280, 211, 41));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 280, 111, 41));
        stopBits = new QComboBox(groupBox);
        stopBits->setObjectName("stopBits");
        stopBits->setGeometry(QRect(150, 360, 211, 41));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 360, 111, 41));
        flowControl = new QComboBox(groupBox);
        flowControl->setObjectName("flowControl");
        flowControl->setGeometry(QRect(150, 440, 211, 41));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 440, 111, 41));
        recvTextEdit = new QPlainTextEdit(MySerials);
        recvTextEdit->setObjectName("recvTextEdit");
        recvTextEdit->setGeometry(QRect(440, 10, 481, 381));
        label_7 = new QLabel(MySerials);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(410, 550, 61, 51));
        checkBox = new QCheckBox(MySerials);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(160, 550, 91, 51));
        sendButton->raise();
        timelineEdit->raise();
        sendTextEdit->raise();
        groupBox->raise();
        recvTextEdit->raise();
        label_7->raise();
        checkBox->raise();
        openButton->raise();

        retranslateUi(MySerials);

        QMetaObject::connectSlotsByName(MySerials);
    } // setupUi

    void retranslateUi(QWidget *MySerials)
    {
        MySerials->setWindowTitle(QCoreApplication::translate("MySerials", "Form", nullptr));
        openButton->setText(QCoreApplication::translate("MySerials", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        sendButton->setText(QCoreApplication::translate("MySerials", "\345\217\221\351\200\201", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MySerials", "\344\270\262\345\217\243\345\217\202\346\225\260\350\256\276\347\275\256", nullptr));
        label->setText(QCoreApplication::translate("MySerials", "\347\253\257\345\217\243\345\220\215\347\247\260", nullptr));
        label_2->setText(QCoreApplication::translate("MySerials", "\346\263\242\347\211\271\347\216\207", nullptr));
        label_3->setText(QCoreApplication::translate("MySerials", "\346\225\260\346\215\256\344\275\215", nullptr));
        label_4->setText(QCoreApplication::translate("MySerials", "\345\245\207\345\201\266\346\240\241\351\252\214", nullptr));
        label_5->setText(QCoreApplication::translate("MySerials", "\345\201\234\346\255\242\344\275\215", nullptr));
        label_6->setText(QCoreApplication::translate("MySerials", "\346\265\201\346\216\247\345\210\266", nullptr));
        label_7->setText(QCoreApplication::translate("MySerials", "ms/\346\254\241", nullptr));
        checkBox->setText(QCoreApplication::translate("MySerials", "\345\256\232\346\227\266\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MySerials: public Ui_MySerials {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSERIALS_H
