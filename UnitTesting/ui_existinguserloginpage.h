/********************************************************************************
** Form generated from reading UI file 'existinguserloginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXISTINGUSERLOGINPAGE_H
#define UI_EXISTINGUSERLOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_existingUserLoginPage
{
public:
    QPushButton *loginButton;
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QLabel *loginLabel;

    void setupUi(QDialog *existingUserLoginPage)
    {
        if (existingUserLoginPage->objectName().isEmpty())
            existingUserLoginPage->setObjectName(QString::fromUtf8("existingUserLoginPage"));
        existingUserLoginPage->resize(400, 300);
        loginButton = new QPushButton(existingUserLoginPage);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(210, 80, 80, 24));
        usernameEdit = new QLineEdit(existingUserLoginPage);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));
        usernameEdit->setGeometry(QRect(60, 140, 113, 24));
        passwordEdit = new QLineEdit(existingUserLoginPage);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setGeometry(QRect(70, 220, 113, 24));
        loginLabel = new QLabel(existingUserLoginPage);
        loginLabel->setObjectName(QString::fromUtf8("loginLabel"));
        loginLabel->setGeometry(QRect(70, 30, 60, 16));

        retranslateUi(existingUserLoginPage);

        QMetaObject::connectSlotsByName(existingUserLoginPage);
    } // setupUi

    void retranslateUi(QDialog *existingUserLoginPage)
    {
        existingUserLoginPage->setWindowTitle(QCoreApplication::translate("existingUserLoginPage", "Dialog", nullptr));
        loginButton->setText(QCoreApplication::translate("existingUserLoginPage", "PushButton", nullptr));
        loginLabel->setText(QCoreApplication::translate("existingUserLoginPage", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class existingUserLoginPage: public Ui_existingUserLoginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXISTINGUSERLOGINPAGE_H
