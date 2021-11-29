/********************************************************************************
** Form generated from reading UI file 'deletebookpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETEBOOKPAGE_H
#define UI_DELETEBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_deleteBookPage
{
public:
    QLineEdit *titleEdit;
    QLineEdit *authorEdit;
    QPushButton *loginButton;

    void setupUi(QDialog *deleteBookPage)
    {
        if (deleteBookPage->objectName().isEmpty())
            deleteBookPage->setObjectName(QString::fromUtf8("deleteBookPage"));
        deleteBookPage->resize(400, 300);
        titleEdit = new QLineEdit(deleteBookPage);
        titleEdit->setObjectName(QString::fromUtf8("titleEdit"));
        titleEdit->setGeometry(QRect(40, 70, 113, 24));
        authorEdit = new QLineEdit(deleteBookPage);
        authorEdit->setObjectName(QString::fromUtf8("authorEdit"));
        authorEdit->setGeometry(QRect(210, 70, 113, 24));
        loginButton = new QPushButton(deleteBookPage);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(120, 140, 80, 24));

        retranslateUi(deleteBookPage);

        QMetaObject::connectSlotsByName(deleteBookPage);
    } // setupUi

    void retranslateUi(QDialog *deleteBookPage)
    {
        deleteBookPage->setWindowTitle(QCoreApplication::translate("deleteBookPage", "Dialog", nullptr));
        loginButton->setText(QCoreApplication::translate("deleteBookPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class deleteBookPage: public Ui_deleteBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETEBOOKPAGE_H
