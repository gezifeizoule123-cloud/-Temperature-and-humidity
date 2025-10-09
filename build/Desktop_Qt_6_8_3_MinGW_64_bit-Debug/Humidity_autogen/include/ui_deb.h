/********************************************************************************
** Form generated from reading UI file 'deb.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEB_H
#define UI_DEB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Deb
{
public:
    QPushButton *exit_bt;
    QLineEdit *send_edi;
    QPushButton *pushButton_2;
    QPlainTextEdit *rec_edi;
    QPushButton *clear_bt;
    QLabel *label;
    QPushButton *send_bt;
    QCheckBox *checkBox;
    QSpinBox *spinBox;
    QLabel *label_2;

    void setupUi(QWidget *Deb)
    {
        if (Deb->objectName().isEmpty())
            Deb->setObjectName("Deb");
        Deb->resize(538, 443);
        Deb->setStyleSheet(QString::fromUtf8("/* \346\267\241\346\243\225\350\211\262\346\270\251\346\232\226\350\203\214\346\231\257 - QWidget\344\270\273\347\252\227\345\217\243 */\n"
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
        exit_bt = new QPushButton(Deb);
        exit_bt->setObjectName("exit_bt");
        exit_bt->setGeometry(QRect(480, 36, 35, 35));
        exit_bt->setStyleSheet(QString::fromUtf8("border-image: url(:/img/exit.png);"));
        send_edi = new QLineEdit(Deb);
        send_edi->setObjectName("send_edi");
        send_edi->setGeometry(QRect(20, 330, 441, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        send_edi->setFont(font);
        send_edi->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        pushButton_2 = new QPushButton(Deb);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(480, 316, 35, 35));
        pushButton_2->setStyleSheet(QString::fromUtf8("border-image: url(:/img/clearS.png);"));
        rec_edi = new QPlainTextEdit(Deb);
        rec_edi->setObjectName("rec_edi");
        rec_edi->setGeometry(QRect(20, 40, 441, 271));
        rec_edi->setFont(font);
        clear_bt = new QPushButton(Deb);
        clear_bt->setObjectName("clear_bt");
        clear_bt->setGeometry(QRect(480, 266, 35, 35));
        clear_bt->setStyleSheet(QString::fromUtf8("border-image: url(:/img/clear_b.png);"));
        label = new QLabel(Deb);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 10, 201, 31));
        QFont font1;
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        send_bt = new QPushButton(Deb);
        send_bt->setObjectName("send_bt");
        send_bt->setGeometry(QRect(480, 360, 35, 35));
        send_bt->setFont(font);
        send_bt->setStyleSheet(QString::fromUtf8("border-image: url(:/img/send.png);"));
        checkBox = new QCheckBox(Deb);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(10, 410, 99, 31));
        spinBox = new QSpinBox(Deb);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(100, 410, 81, 28));
        spinBox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 170, 255);"));
        spinBox->setMaximum(999999);
        spinBox->setValue(1000);
        label_2 = new QLabel(Deb);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(190, 408, 69, 31));

        retranslateUi(Deb);

        QMetaObject::connectSlotsByName(Deb);
    } // setupUi

    void retranslateUi(QWidget *Deb)
    {
        Deb->setWindowTitle(QCoreApplication::translate("Deb", "Form", nullptr));
        exit_bt->setText(QString());
        pushButton_2->setText(QString());
        clear_bt->setText(QString());
        label->setText(QCoreApplication::translate("Deb", "\350\260\203  \350\257\225  \347\225\214  \351\235\242", nullptr));
        send_bt->setText(QString());
        checkBox->setText(QCoreApplication::translate("Deb", "\345\256\232\346\227\266\345\231\250", nullptr));
        label_2->setText(QCoreApplication::translate("Deb", "mms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Deb: public Ui_Deb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEB_H
