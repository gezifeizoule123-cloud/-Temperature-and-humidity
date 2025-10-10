/********************************************************************************
** Form generated from reading UI file 'databasepicture.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASEPICTURE_H
#define UI_DATABASEPICTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DataBasePicture
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;

    void setupUi(QWidget *DataBasePicture)
    {
        if (DataBasePicture->objectName().isEmpty())
            DataBasePicture->setObjectName("DataBasePicture");
        DataBasePicture->resize(617, 506);
        verticalLayout = new QVBoxLayout(DataBasePicture);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(DataBasePicture);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout->addWidget(frame);


        retranslateUi(DataBasePicture);

        QMetaObject::connectSlotsByName(DataBasePicture);
    } // setupUi

    void retranslateUi(QWidget *DataBasePicture)
    {
        DataBasePicture->setWindowTitle(QCoreApplication::translate("DataBasePicture", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DataBasePicture: public Ui_DataBasePicture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASEPICTURE_H
