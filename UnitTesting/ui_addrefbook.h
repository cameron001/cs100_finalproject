/********************************************************************************
** Form generated from reading UI file 'addrefbook.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDREFBOOK_H
#define UI_ADDREFBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addRefBook
{
public:
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *addRefBook)
    {
        if (addRefBook->objectName().isEmpty())
            addRefBook->setObjectName(QString::fromUtf8("addRefBook"));
        addRefBook->resize(906, 561);
        lineEdit_4 = new QLineEdit(addRefBook);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(530, 10, 113, 24));
        lineEdit_9 = new QLineEdit(addRefBook);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(680, 10, 113, 24));
        lineEdit_11 = new QLineEdit(addRefBook);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(40, 120, 113, 24));
        lineEdit_10 = new QLineEdit(addRefBook);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(680, 70, 113, 24));
        lineEdit_5 = new QLineEdit(addRefBook);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(40, 70, 113, 24));
        lineEdit_7 = new QLineEdit(addRefBook);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(370, 70, 113, 24));
        lineEdit_3 = new QLineEdit(addRefBook);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(370, 10, 113, 24));
        lineEdit_8 = new QLineEdit(addRefBook);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(530, 70, 113, 24));
        lineEdit_6 = new QLineEdit(addRefBook);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(190, 70, 113, 24));
        lineEdit_2 = new QLineEdit(addRefBook);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(200, 10, 113, 24));
        lineEdit = new QLineEdit(addRefBook);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 10, 113, 24));
        pushButton = new QPushButton(addRefBook);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 420, 80, 24));

        retranslateUi(addRefBook);

        QMetaObject::connectSlotsByName(addRefBook);
    } // setupUi

    void retranslateUi(QDialog *addRefBook)
    {
        addRefBook->setWindowTitle(QCoreApplication::translate("addRefBook", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addRefBook", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addRefBook: public Ui_addRefBook {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDREFBOOK_H
