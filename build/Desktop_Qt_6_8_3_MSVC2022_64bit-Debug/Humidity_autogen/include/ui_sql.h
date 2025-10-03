/********************************************************************************
** Form generated from reading UI file 'sql.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SQL_H
#define UI_SQL_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sql
{
public:
    QTableView *tableView;
    QLabel *title;
    QLabel *start_l;
    QPushButton *now_bt;
    QComboBox *comboBox;
    QFrame *line;
    QPushButton *exit_bt;
    QDateTimeEdit *dateTimeEdit_2;
    QGroupBox *groupBox;
    QSpinBox *spinBox_2;
    QPushButton *select_val_bt;
    QSpinBox *spinBox;
    QGroupBox *groupBox_2;
    QPushButton *currDay_bt;
    QPushButton *currThDay_bt;
    QPushButton *currWeek_bt;
    QDateTimeEdit *dateTimeEdit;
    QLabel *icon;
    QPushButton *select_data_bt;
    QPushButton *displayAll_bt;
    QFrame *line_2;
    QLabel *end_l;
    QPushButton *clear_bt;

    void setupUi(QWidget *Sql)
    {
        if (Sql->objectName().isEmpty())
            Sql->setObjectName("Sql");
        Sql->resize(705, 622);
        tableView = new QTableView(Sql);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(3, 52, 691, 421));
        tableView->setStyleSheet(QString::fromUtf8(""));
        title = new QLabel(Sql);
        title->setObjectName("title");
        title->setGeometry(QRect(260, 2, 191, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(19);
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        title->setLineWidth(10);
        start_l = new QLabel(Sql);
        start_l->setObjectName("start_l");
        start_l->setGeometry(QRect(30, 511, 41, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font1.setPointSize(12);
        font1.setBold(true);
        start_l->setFont(font1);
        start_l->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        now_bt = new QPushButton(Sql);
        now_bt->setObjectName("now_bt");
        now_bt->setGeometry(QRect(270, 539, 50, 25));
        QFont font2;
        font2.setBold(true);
        now_bt->setFont(font2);
        now_bt->setStyleSheet(QString::fromUtf8("border:2px solid rgb(132, 66, 198);\n"
"border-radius:10px;		 \n"
"background-color: rgb(170, 85, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
""));
        comboBox = new QComboBox(Sql);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(510, 512, 111, 25));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font3.setPointSize(13);
        comboBox->setFont(font3);
        comboBox->setStyleSheet(QString::fromUtf8("border:2px solid rgb(100, 100, 194);\n"
"border-radius:10px;		 \n"
"background-color: rgb(129, 129, 194);\n"
"color: rgb(255, 255, 255);\n"
"\n"
"\n"
"\n"
""));
        line = new QFrame(Sql);
        line->setObjectName("line");
        line->setGeometry(QRect(350, 502, 3, 86));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        exit_bt = new QPushButton(Sql);
        exit_bt->setObjectName("exit_bt");
        exit_bt->setGeometry(QRect(380, 497, 70, 28));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        exit_bt->setFont(font4);
        exit_bt->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(59, 59, 208);   \n"
"border-radius:10px;		 \n"
"background-color: rgb(85, 85, 255);\n"
"color: rgb(255, 255, 255);			\n"
"\n"
""));
        dateTimeEdit_2 = new QDateTimeEdit(Sql);
        dateTimeEdit_2->setObjectName("dateTimeEdit_2");
        dateTimeEdit_2->setGeometry(QRect(70, 539, 194, 22));
        dateTimeEdit_2->setFont(font3);
        dateTimeEdit_2->setDate(QDate(2022, 10, 7));
        dateTimeEdit_2->setTime(QTime(20, 50, 0));
        groupBox = new QGroupBox(Sql);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(500, 486, 141, 121));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        groupBox->setFont(font5);
        groupBox->setStyleSheet(QString::fromUtf8("border:2px solid rgb(80, 229, 229);\n"
"border-radius:10px;		 \n"
"background-color: rgb(170, 255, 255);\n"
"color: rgb(0, 0, 0);\n"
"font-size:15px; 		 \n"
"\n"
""));
        groupBox->setAlignment(Qt::AlignmentFlag::AlignCenter);
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        spinBox_2 = new QSpinBox(Sql);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(570, 542, 53, 24));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font6.setPointSize(10);
        spinBox_2->setFont(font6);
        spinBox_2->setStyleSheet(QString::fromUtf8("border:2px solid rgb(140, 66, 0);\n"
"border-radius:10px;		 \n"
"background-color: rgb(198, 66, 0);\n"
"color: rgb(255, 255, 255);\n"
" \n"
"\n"
"\n"
""));
        spinBox_2->setMaximum(100);
        spinBox_2->setValue(100);
        select_val_bt = new QPushButton(Sql);
        select_val_bt->setObjectName("select_val_bt");
        select_val_bt->setGeometry(QRect(530, 572, 61, 25));
        QFont font7;
        font7.setFamilies({QString::fromUtf8("AcadEref")});
        font7.setBold(true);
        select_val_bt->setFont(font7);
        select_val_bt->setStyleSheet(QString::fromUtf8("border:2px solid rgb(0, 133, 120);\n"
"border-radius:10px;		 \n"
"background-color: rgb(0, 170, 255);	\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
""));
        spinBox = new QSpinBox(Sql);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(510, 542, 53, 24));
        spinBox->setFont(font6);
        spinBox->setStyleSheet(QString::fromUtf8("border:2px solid rgb(140, 66, 0);\n"
"border-radius:10px;		 \n"
"background-color: rgb(198, 66, 0);\n"
"color: rgb(255, 255, 255);\n"
" \n"
"\n"
"\n"
""));
        spinBox->setMaximum(100);
        groupBox_2 = new QGroupBox(Sql);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 489, 321, 111));
        groupBox_2->setFont(font5);
        groupBox_2->setStyleSheet(QString::fromUtf8("border:2px solid rgb(151, 151, 227);\n"
"border-radius:10px;		 \n"
"background-color: rgb(170, 170, 255);\n"
"color: rgb(0, 0, 0);\n"
"font-size:16px; 		 \n"
"\n"
""));
        groupBox_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        currDay_bt = new QPushButton(groupBox_2);
        currDay_bt->setObjectName("currDay_bt");
        currDay_bt->setGeometry(QRect(20, 80, 83, 23));
        currDay_bt->setStyleSheet(QString::fromUtf8("border:2px solid rgb(0, 120, 180);\n"
"border-radius:10px;		 \n"
"background-color: rgb(0, 170, 127);\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
""));
        currThDay_bt = new QPushButton(groupBox_2);
        currThDay_bt->setObjectName("currThDay_bt");
        currThDay_bt->setGeometry(QRect(120, 80, 83, 23));
        currThDay_bt->setStyleSheet(QString::fromUtf8("border:2px solid rgb(63, 63, 190);\n"
"border-radius:10px;		 \n"
"background-color: rgb(85, 85, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
""));
        currWeek_bt = new QPushButton(groupBox_2);
        currWeek_bt->setObjectName("currWeek_bt");
        currWeek_bt->setGeometry(QRect(220, 80, 83, 23));
        currWeek_bt->setStyleSheet(QString::fromUtf8("border:2px solid rgb(180, 0, 180);\n"
"border-radius:10px;		 \n"
"background-color: rgb(255, 0, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
"\n"
"\n"
""));
        dateTimeEdit = new QDateTimeEdit(Sql);
        dateTimeEdit->setObjectName("dateTimeEdit");
        dateTimeEdit->setGeometry(QRect(70, 509, 194, 21));
        dateTimeEdit->setFont(font3);
        dateTimeEdit->setStyleSheet(QString::fromUtf8(""));
        dateTimeEdit->setDate(QDate(2022, 10, 7));
        dateTimeEdit->setTime(QTime(20, 50, 0));
        icon = new QLabel(Sql);
        icon->setObjectName("icon");
        icon->setGeometry(QRect(450, 12, 35, 35));
        icon->setStyleSheet(QString::fromUtf8("border-image: url(:/img/data_nie.png);"));
        select_data_bt = new QPushButton(Sql);
        select_data_bt->setObjectName("select_data_bt");
        select_data_bt->setGeometry(QRect(270, 509, 50, 25));
        select_data_bt->setFont(font2);
        select_data_bt->setStyleSheet(QString::fromUtf8("border:2px solid rgb(0, 133, 120);\n"
"border-radius:10px;		 \n"
"background-color: rgb(0, 170, 255);	\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
""));
        displayAll_bt = new QPushButton(Sql);
        displayAll_bt->setObjectName("displayAll_bt");
        displayAll_bt->setGeometry(QRect(380, 532, 70, 28));
        displayAll_bt->setFont(font2);
        displayAll_bt->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(180, 150, 0);   \n"
"border-radius:10px;		 \n"
"background-color: rgb(255, 170, 0);\n"
"color: rgb(255, 255, 255);			\n"
"font-size:15px; 		 \n"
""));
        line_2 = new QFrame(Sql);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(490, 501, 3, 86));
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        end_l = new QLabel(Sql);
        end_l->setObjectName("end_l");
        end_l->setGeometry(QRect(30, 542, 41, 16));
        end_l->setFont(font1);
        end_l->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        clear_bt = new QPushButton(Sql);
        clear_bt->setObjectName("clear_bt");
        clear_bt->setGeometry(QRect(380, 570, 70, 28));
        QFont font8;
        font8.setPointSize(11);
        font8.setBold(true);
        clear_bt->setFont(font8);
        clear_bt->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(134, 134, 0);   \n"
"border-radius:10px;		 \n"
"background-color: rgb(170, 170, 0);\n"
"color: rgb(255, 255, 255);			\n"
""));

        retranslateUi(Sql);

        QMetaObject::connectSlotsByName(Sql);
    } // setupUi

    void retranslateUi(QWidget *Sql)
    {
        Sql->setWindowTitle(QCoreApplication::translate("Sql", "Form", nullptr));
        title->setText(QCoreApplication::translate("Sql", "\346\225\260\346\215\256\345\272\223\347\256\241\347\220\206\345\271\263\345\217\260", nullptr));
        start_l->setText(QCoreApplication::translate("Sql", "\345\274\200\345\247\213", nullptr));
        now_bt->setText(QCoreApplication::translate("Sql", "NOW", nullptr));
        exit_bt->setText(QCoreApplication::translate("Sql", "\351\200\200\345\207\272", nullptr));
        dateTimeEdit_2->setDisplayFormat(QCoreApplication::translate("Sql", "yyyy-MM-dd HH:mm:ss", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Sql", "\345\200\274\346\237\245\350\257\242", nullptr));
        select_val_bt->setText(QCoreApplication::translate("Sql", "\346\237\245\350\257\242", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("Sql", "\346\227\245\346\234\237\346\237\245\350\257\242", nullptr));
        currDay_bt->setText(QCoreApplication::translate("Sql", "\346\234\200\350\277\221\344\270\200\345\244\251", nullptr));
        currThDay_bt->setText(QCoreApplication::translate("Sql", "\346\234\200\350\277\221\344\270\211\345\244\251", nullptr));
        currWeek_bt->setText(QCoreApplication::translate("Sql", "\346\234\200\350\277\221\344\270\200\345\221\250", nullptr));
        dateTimeEdit->setDisplayFormat(QCoreApplication::translate("Sql", "yyyy-MM-dd HH:mm:ss", nullptr));
        icon->setText(QString());
        select_data_bt->setText(QCoreApplication::translate("Sql", "\346\237\245\350\257\242", nullptr));
        displayAll_bt->setText(QCoreApplication::translate("Sql", "\346\230\276\347\244\272\346\211\200\346\234\211", nullptr));
        end_l->setText(QCoreApplication::translate("Sql", "\347\273\223\346\235\237", nullptr));
        clear_bt->setText(QCoreApplication::translate("Sql", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sql: public Ui_Sql {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQL_H
