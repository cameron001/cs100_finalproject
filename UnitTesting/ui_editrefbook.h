/********************************************************************************
** Form generated from reading UI file 'editrefbook.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITREFBOOK_H
#define UI_EDITREFBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_editRefBook
{
public:
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QPushButton *pushButton;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_12;

    void setupUi(QDialog *editRefBook)
    {
        if (editRefBook->objectName().isEmpty())
            editRefBook->setObjectName(QString::fromUtf8("editRefBook"));
        editRefBook->resize(815, 525);
        lineEdit_8 = new QLineEdit(editRefBook);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(530, 90, 113, 24));
        lineEdit_3 = new QLineEdit(editRefBook);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(370, 30, 113, 24));
        lineEdit_2 = new QLineEdit(editRefBook);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 30, 113, 24));
        lineEdit_4 = new QLineEdit(editRefBook);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(530, 30, 113, 24));
        lineEdit_9 = new QLineEdit(editRefBook);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(680, 30, 113, 24));
        lineEdit_10 = new QLineEdit(editRefBook);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(680, 90, 113, 24));
        pushButton = new QPushButton(editRefBook);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 440, 80, 24));
        lineEdit_7 = new QLineEdit(editRefBook);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(370, 90, 113, 24));
        lineEdit_5 = new QLineEdit(editRefBook);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(40, 90, 113, 24));
        lineEdit_11 = new QLineEdit(editRefBook);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(40, 140, 113, 24));
        lineEdit_6 = new QLineEdit(editRefBook);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(190, 90, 113, 24));
        lineEdit = new QLineEdit(editRefBook);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 30, 113, 24));
        lineEdit_12 = new QLineEdit(editRefBook);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(320, 190, 113, 24));

        retranslateUi(editRefBook);

        QMetaObject::connectSlotsByName(editRefBook);
    } // setupUi

    void retranslateUi(QDialog *editRefBook)
    {
        editRefBook->setWindowTitle(QCoreApplication::translate("editRefBook", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("editRefBook", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editRefBook: public Ui_editRefBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITREFBOOK_H
