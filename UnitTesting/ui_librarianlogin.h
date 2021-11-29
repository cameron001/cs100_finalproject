/********************************************************************************
** Form generated from reading UI file 'librarianlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARIANLOGIN_H
#define UI_LIBRARIANLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_librarianLogin
{
public:
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QLabel *loginLabel;
    QPushButton *loginButton;

    void setupUi(QDialog *librarianLogin)
    {
        if (librarianLogin->objectName().isEmpty())
            librarianLogin->setObjectName(QString::fromUtf8("librarianLogin"));
        librarianLogin->resize(400, 300);
        usernameEdit = new QLineEdit(librarianLogin);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));
        usernameEdit->setGeometry(QRect(10, 70, 113, 24));
        passwordEdit = new QLineEdit(librarianLogin);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setGeometry(QRect(20, 130, 113, 24));
        loginLabel = new QLabel(librarianLogin);
        loginLabel->setObjectName(QString::fromUtf8("loginLabel"));
        loginLabel->setGeometry(QRect(180, 40, 60, 16));
        loginButton = new QPushButton(librarianLogin);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(210, 110, 80, 24));

        retranslateUi(librarianLogin);

        QMetaObject::connectSlotsByName(librarianLogin);
    } // setupUi

    void retranslateUi(QDialog *librarianLogin)
    {
        librarianLogin->setWindowTitle(QCoreApplication::translate("librarianLogin", "Dialog", nullptr));
        loginLabel->setText(QCoreApplication::translate("librarianLogin", "TextLabel", nullptr));
        loginButton->setText(QCoreApplication::translate("librarianLogin", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class librarianLogin: public Ui_librarianLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIANLOGIN_H
