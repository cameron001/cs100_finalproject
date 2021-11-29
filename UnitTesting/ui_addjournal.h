/********************************************************************************
** Form generated from reading UI file 'addjournal.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDJOURNAL_H
#define UI_ADDJOURNAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addJournal
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton;
    QLineEdit *lineEdit_6;

    void setupUi(QDialog *addJournal)
    {
        if (addJournal->objectName().isEmpty())
            addJournal->setObjectName(QString::fromUtf8("addJournal"));
        addJournal->resize(768, 428);
        lineEdit = new QLineEdit(addJournal);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 40, 113, 24));
        lineEdit_2 = new QLineEdit(addJournal);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(170, 90, 113, 24));
        lineEdit_3 = new QLineEdit(addJournal);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 150, 113, 24));
        lineEdit_4 = new QLineEdit(addJournal);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(190, 220, 113, 24));
        lineEdit_5 = new QLineEdit(addJournal);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(180, 290, 113, 24));
        pushButton = new QPushButton(addJournal);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(330, 100, 80, 24));
        lineEdit_6 = new QLineEdit(addJournal);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(320, 240, 113, 24));

        retranslateUi(addJournal);

        QMetaObject::connectSlotsByName(addJournal);
    } // setupUi

    void retranslateUi(QDialog *addJournal)
    {
        addJournal->setWindowTitle(QCoreApplication::translate("addJournal", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addJournal", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addJournal: public Ui_addJournal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDJOURNAL_H
