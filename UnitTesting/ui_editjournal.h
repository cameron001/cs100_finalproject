/********************************************************************************
** Form generated from reading UI file 'editjournal.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITJOURNAL_H
#define UI_EDITJOURNAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_editJournal
{
public:
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_7;

    void setupUi(QDialog *editJournal)
    {
        if (editJournal->objectName().isEmpty())
            editJournal->setObjectName(QString::fromUtf8("editJournal"));
        editJournal->resize(732, 487);
        lineEdit_6 = new QLineEdit(editJournal);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(200, 230, 113, 24));
        lineEdit_2 = new QLineEdit(editJournal);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(50, 80, 113, 24));
        pushButton = new QPushButton(editJournal);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 90, 80, 24));
        lineEdit_3 = new QLineEdit(editJournal);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(40, 140, 113, 24));
        lineEdit_4 = new QLineEdit(editJournal);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(70, 210, 113, 24));
        lineEdit = new QLineEdit(editJournal);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 30, 113, 24));
        lineEdit_5 = new QLineEdit(editJournal);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(60, 280, 113, 24));
        lineEdit_7 = new QLineEdit(editJournal);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(380, 340, 113, 24));

        retranslateUi(editJournal);

        QMetaObject::connectSlotsByName(editJournal);
    } // setupUi

    void retranslateUi(QDialog *editJournal)
    {
        editJournal->setWindowTitle(QCoreApplication::translate("editJournal", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("editJournal", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editJournal: public Ui_editJournal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITJOURNAL_H
