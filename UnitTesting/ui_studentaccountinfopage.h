/********************************************************************************
** Form generated from reading UI file 'studentaccountinfopage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTACCOUNTINFOPAGE_H
#define UI_STUDENTACCOUNTINFOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_studentAccountInfoPage
{
public:
    QLineEdit *usernameEdit;
    QLineEdit *passwordEdit;
    QPushButton *loginButton;
    QTableView *tableView;
    QLabel *label;

    void setupUi(QDialog *studentAccountInfoPage)
    {
        if (studentAccountInfoPage->objectName().isEmpty())
            studentAccountInfoPage->setObjectName(QString::fromUtf8("studentAccountInfoPage"));
        studentAccountInfoPage->resize(640, 371);
        usernameEdit = new QLineEdit(studentAccountInfoPage);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));
        usernameEdit->setGeometry(QRect(30, 30, 113, 24));
        passwordEdit = new QLineEdit(studentAccountInfoPage);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setGeometry(QRect(30, 80, 113, 24));
        loginButton = new QPushButton(studentAccountInfoPage);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(20, 130, 80, 24));
        tableView = new QTableView(studentAccountInfoPage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(320, 50, 256, 192));
        tableView->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(studentAccountInfoPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 240, 60, 16));

        retranslateUi(studentAccountInfoPage);

        QMetaObject::connectSlotsByName(studentAccountInfoPage);
    } // setupUi

    void retranslateUi(QDialog *studentAccountInfoPage)
    {
        studentAccountInfoPage->setWindowTitle(QCoreApplication::translate("studentAccountInfoPage", "Dialog", nullptr));
        loginButton->setText(QCoreApplication::translate("studentAccountInfoPage", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("studentAccountInfoPage", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentAccountInfoPage: public Ui_studentAccountInfoPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTACCOUNTINFOPAGE_H
