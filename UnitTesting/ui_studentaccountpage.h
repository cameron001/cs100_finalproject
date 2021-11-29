/********************************************************************************
** Form generated from reading UI file 'studentaccountpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENTACCOUNTPAGE_H
#define UI_STUDENTACCOUNTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_studentAccountPage
{
public:
    QLabel *loginLabel;
    QPushButton *accountInfoButton;
    QPushButton *libraryBooksButton;
    QPushButton *transactionButton;
    QPushButton *accountDebtButton;

    void setupUi(QDialog *studentAccountPage)
    {
        if (studentAccountPage->objectName().isEmpty())
            studentAccountPage->setObjectName(QString::fromUtf8("studentAccountPage"));
        studentAccountPage->resize(671, 535);
        loginLabel = new QLabel(studentAccountPage);
        loginLabel->setObjectName(QString::fromUtf8("loginLabel"));
        loginLabel->setGeometry(QRect(120, 90, 60, 16));
        accountInfoButton = new QPushButton(studentAccountPage);
        accountInfoButton->setObjectName(QString::fromUtf8("accountInfoButton"));
        accountInfoButton->setGeometry(QRect(280, 140, 80, 24));
        libraryBooksButton = new QPushButton(studentAccountPage);
        libraryBooksButton->setObjectName(QString::fromUtf8("libraryBooksButton"));
        libraryBooksButton->setGeometry(QRect(280, 180, 80, 24));
        transactionButton = new QPushButton(studentAccountPage);
        transactionButton->setObjectName(QString::fromUtf8("transactionButton"));
        transactionButton->setGeometry(QRect(280, 220, 80, 24));
        accountDebtButton = new QPushButton(studentAccountPage);
        accountDebtButton->setObjectName(QString::fromUtf8("accountDebtButton"));
        accountDebtButton->setGeometry(QRect(280, 260, 80, 24));

        retranslateUi(studentAccountPage);

        QMetaObject::connectSlotsByName(studentAccountPage);
    } // setupUi

    void retranslateUi(QDialog *studentAccountPage)
    {
        studentAccountPage->setWindowTitle(QCoreApplication::translate("studentAccountPage", "Dialog", nullptr));
        loginLabel->setText(QCoreApplication::translate("studentAccountPage", "TextLabel", nullptr));
        accountInfoButton->setText(QCoreApplication::translate("studentAccountPage", "PushButton", nullptr));
        libraryBooksButton->setText(QCoreApplication::translate("studentAccountPage", "PushButton", nullptr));
        transactionButton->setText(QCoreApplication::translate("studentAccountPage", "PushButton", nullptr));
        accountDebtButton->setText(QCoreApplication::translate("studentAccountPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class studentAccountPage: public Ui_studentAccountPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENTACCOUNTPAGE_H
