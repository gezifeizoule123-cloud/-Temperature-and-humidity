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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
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

    void setupUi(QWidget *Deb)
    {
        if (Deb->objectName().isEmpty())
            Deb->setObjectName("Deb");
        Deb->resize(530, 419);
        exit_bt = new QPushButton(Deb);
        exit_bt->setObjectName("exit_bt");
        exit_bt->setGeometry(QRect(480, 36, 35, 35));
        exit_bt->setStyleSheet(QString::fromUtf8("border-image: url(:/img/exit.png);"));
        send_edi = new QLineEdit(Deb);
        send_edi->setObjectName("send_edi");
        send_edi->setGeometry(QRect(20, 330, 441, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(11);
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
        label->setGeometry(QRect(170, 10, 201, 31));
        send_bt = new QPushButton(Deb);
        send_bt->setObjectName("send_bt");
        send_bt->setGeometry(QRect(480, 360, 35, 35));
        send_bt->setFont(font);
        send_bt->setStyleSheet(QString::fromUtf8("border-image: url(:/img/send.png);"));

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
    } // retranslateUi

};

namespace Ui {
    class Deb: public Ui_Deb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEB_H
