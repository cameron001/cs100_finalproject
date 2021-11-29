/********************************************************************************
** Form generated from reading UI file 'homescreen.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMESCREEN_H
#define UI_HOMESCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homeScreen
{
public:
    QWidget *centralwidget;
    QLabel *welcomeLabel;
    QPushButton *existingUserLoginButton;
    QLineEdit *firstNameLineEdit;
    QLineEdit *lastNameLineEdit;
    QLabel *headingLabel;
    QPushButton *dynamicButton;
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QPushButton *librarianLoginButton;
    QPushButton *booksList;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *homeScreen)
    {
        if (homeScreen->objectName().isEmpty())
            homeScreen->setObjectName(QString::fromUtf8("homeScreen"));
        homeScreen->resize(800, 600);
        centralwidget = new QWidget(homeScreen);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        welcomeLabel = new QLabel(centralwidget);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(160, 40, 59, 16));
        existingUserLoginButton = new QPushButton(centralwidget);
        existingUserLoginButton->setObjectName(QString::fromUtf8("existingUserLoginButton"));
        existingUserLoginButton->setGeometry(QRect(170, 190, 80, 24));
        firstNameLineEdit = new QLineEdit(centralwidget);
        firstNameLineEdit->setObjectName(QString::fromUtf8("firstNameLineEdit"));
        firstNameLineEdit->setGeometry(QRect(70, 110, 113, 24));
        lastNameLineEdit = new QLineEdit(centralwidget);
        lastNameLineEdit->setObjectName(QString::fromUtf8("lastNameLineEdit"));
        lastNameLineEdit->setGeometry(QRect(100, 260, 113, 24));
        headingLabel = new QLabel(centralwidget);
        headingLabel->setObjectName(QString::fromUtf8("headingLabel"));
        headingLabel->setGeometry(QRect(320, 70, 59, 16));
        dynamicButton = new QPushButton(centralwidget);
        dynamicButton->setObjectName(QString::fromUtf8("dynamicButton"));
        dynamicButton->setGeometry(QRect(340, 270, 80, 24));
        usernameEdit = new QLineEdit(centralwidget);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));
        usernameEdit->setGeometry(QRect(290, 350, 113, 24));
        passwordEdit = new QLineEdit(centralwidget);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setGeometry(QRect(30, 160, 113, 24));
        librarianLoginButton = new QPushButton(centralwidget);
        librarianLoginButton->setObjectName(QString::fromUtf8("librarianLoginButton"));
        librarianLoginButton->setGeometry(QRect(360, 130, 80, 24));
        booksList = new QPushButton(centralwidget);
        booksList->setObjectName(QString::fromUtf8("booksList"));
        booksList->setGeometry(QRect(190, 450, 113, 32));
        homeScreen->setCentralWidget(centralwidget);
        menubar = new QMenuBar(homeScreen);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        homeScreen->setMenuBar(menubar);
        statusbar = new QStatusBar(homeScreen);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        homeScreen->setStatusBar(statusbar);

        retranslateUi(homeScreen);

        QMetaObject::connectSlotsByName(homeScreen);
    } // setupUi

    void retranslateUi(QMainWindow *homeScreen)
    {
        homeScreen->setWindowTitle(QCoreApplication::translate("homeScreen", "homeScreen", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("homeScreen", "TextLabel", nullptr));
        existingUserLoginButton->setText(QCoreApplication::translate("homeScreen", "PushButton", nullptr));
        headingLabel->setText(QCoreApplication::translate("homeScreen", "TextLabel", nullptr));
        dynamicButton->setText(QCoreApplication::translate("homeScreen", "PushButton", nullptr));
        librarianLoginButton->setText(QCoreApplication::translate("homeScreen", "PushButton", nullptr));
        booksList->setText(QCoreApplication::translate("homeScreen", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homeScreen: public Ui_homeScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMESCREEN_H
