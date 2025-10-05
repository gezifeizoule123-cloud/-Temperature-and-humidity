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
    QLabel *start_l_2;
    QLabel *end_l;
    QDateTimeEdit *dateTimeEditStart_2;
    QDateTimeEdit *dateTimeEditEnd_2;
    QPushButton *select_data_bt;
    QPushButton *now_bt_2;
    QLabel *icon;
    QPushButton *displayAll_bt;
    QFrame *line_2;
    QPushButton *clear_bt;

    void setupUi(QWidget *Sql)
    {
        if (Sql->objectName().isEmpty())
            Sql->setObjectName("Sql");
        Sql->resize(710, 657);
        Sql->setStyleSheet(QString::fromUtf8("/* \346\267\241\346\243\225\350\211\262\346\270\251\346\232\226\350\203\214\346\231\257 - QWidget\344\270\273\347\252\227\345\217\243 */\n"
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
        tableView = new QTableView(Sql);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(3, 52, 691, 421));
        tableView->setStyleSheet(QString::fromUtf8(""));
        title = new QLabel(Sql);
        title->setObjectName("title");
        title->setGeometry(QRect(260, 2, 191, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221")});
        font.setBold(true);
        title->setFont(font);
        title->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
""));
        title->setLineWidth(10);
        title->setAlignment(Qt::AlignmentFlag::AlignCenter);
        start_l = new QLabel(Sql);
        start_l->setObjectName("start_l");
        start_l->setGeometry(QRect(30, 511, 41, 16));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
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
        comboBox->setGeometry(QRect(510, 512, 151, 41));
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
        exit_bt->setGeometry(QRect(360, 484, 111, 41));
        exit_bt->setFont(font2);
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
        groupBox->setGeometry(QRect(490, 490, 191, 151));
        groupBox->setFont(font1);
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
        spinBox_2->setGeometry(QRect(590, 560, 91, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font4.setPointSize(10);
        spinBox_2->setFont(font4);
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
        select_val_bt->setGeometry(QRect(540, 600, 91, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("AcadEref")});
        font5.setBold(true);
        select_val_bt->setFont(font5);
        select_val_bt->setStyleSheet(QString::fromUtf8("border:2px solid rgb(0, 133, 120);\n"
"border-radius:10px;		 \n"
"background-color: rgb(0, 170, 255);	\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
""));
        spinBox = new QSpinBox(Sql);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(500, 560, 81, 41));
        spinBox->setFont(font4);
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
        groupBox_2->setGeometry(QRect(0, 479, 341, 151));
        groupBox_2->setFont(font1);
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
        currDay_bt->setGeometry(QRect(2, 110, 101, 41));
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
        currThDay_bt->setGeometry(QRect(110, 110, 101, 41));
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
        currWeek_bt->setGeometry(QRect(220, 110, 101, 41));
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
        start_l_2 = new QLabel(groupBox_2);
        start_l_2->setObjectName("start_l_2");
        start_l_2->setGeometry(QRect(0, 35, 41, 21));
        start_l_2->setFont(font1);
        start_l_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        end_l = new QLabel(groupBox_2);
        end_l->setObjectName("end_l");
        end_l->setGeometry(QRect(0, 75, 41, 21));
        end_l->setFont(font1);
        end_l->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        dateTimeEditStart_2 = new QDateTimeEdit(groupBox_2);
        dateTimeEditStart_2->setObjectName("dateTimeEditStart_2");
        dateTimeEditStart_2->setGeometry(QRect(43, 27, 211, 41));
        dateTimeEditEnd_2 = new QDateTimeEdit(groupBox_2);
        dateTimeEditEnd_2->setObjectName("dateTimeEditEnd_2");
        dateTimeEditEnd_2->setGeometry(QRect(43, 70, 211, 41));
        select_data_bt = new QPushButton(groupBox_2);
        select_data_bt->setObjectName("select_data_bt");
        select_data_bt->setGeometry(QRect(260, 20, 81, 41));
        select_data_bt->setFont(font2);
        select_data_bt->setStyleSheet(QString::fromUtf8("border:2px solid rgb(0, 133, 120);\n"
"border-radius:10px;		 \n"
"background-color: rgb(0, 170, 255);	\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
""));
        now_bt_2 = new QPushButton(groupBox_2);
        now_bt_2->setObjectName("now_bt_2");
        now_bt_2->setGeometry(QRect(260, 64, 81, 41));
        now_bt_2->setFont(font2);
        now_bt_2->setStyleSheet(QString::fromUtf8("border:2px solid rgb(132, 66, 198);\n"
"border-radius:10px;		 \n"
"background-color: rgb(170, 85, 255);\n"
"color: rgb(255, 255, 255);\n"
"font-size:15px; 		 \n"
"\n"
"\n"
""));
        icon = new QLabel(Sql);
        icon->setObjectName("icon");
        icon->setGeometry(QRect(450, 12, 35, 35));
        icon->setStyleSheet(QString::fromUtf8("border-image: url(:/img/data_nie.png);"));
        displayAll_bt = new QPushButton(Sql);
        displayAll_bt->setObjectName("displayAll_bt");
        displayAll_bt->setGeometry(QRect(359, 532, 111, 41));
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
        clear_bt = new QPushButton(Sql);
        clear_bt->setObjectName("clear_bt");
        clear_bt->setGeometry(QRect(359, 580, 111, 41));
        clear_bt->setFont(font2);
        clear_bt->setStyleSheet(QString::fromUtf8("border: 2px solid rgb(134, 134, 0);   \n"
"border-radius:10px;		 \n"
"background-color: rgb(170, 170, 0);\n"
"color: rgb(255, 255, 255);			\n"
""));
        tableView->raise();
        title->raise();
        start_l->raise();
        now_bt->raise();
        line->raise();
        exit_bt->raise();
        dateTimeEdit_2->raise();
        groupBox->raise();
        spinBox_2->raise();
        select_val_bt->raise();
        spinBox->raise();
        groupBox_2->raise();
        icon->raise();
        displayAll_bt->raise();
        line_2->raise();
        clear_bt->raise();
        comboBox->raise();

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
        start_l_2->setText(QCoreApplication::translate("Sql", "\345\274\200\345\247\213", nullptr));
        end_l->setText(QCoreApplication::translate("Sql", "\347\273\223\346\235\237", nullptr));
        select_data_bt->setText(QCoreApplication::translate("Sql", "\346\237\245\350\257\242", nullptr));
        now_bt_2->setText(QCoreApplication::translate("Sql", "NOW", nullptr));
        icon->setText(QString());
        displayAll_bt->setText(QCoreApplication::translate("Sql", "\346\230\276\347\244\272\346\211\200\346\234\211", nullptr));
        clear_bt->setText(QCoreApplication::translate("Sql", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sql: public Ui_Sql {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SQL_H
