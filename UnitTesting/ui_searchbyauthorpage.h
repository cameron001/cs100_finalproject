/********************************************************************************
** Form generated from reading UI file 'searchbyauthorpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBYAUTHORPAGE_H
#define UI_SEARCHBYAUTHORPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_searchByAuthorPage
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QDialog *searchByAuthorPage)
    {
        if (searchByAuthorPage->objectName().isEmpty())
            searchByAuthorPage->setObjectName(QString::fromUtf8("searchByAuthorPage"));
        searchByAuthorPage->resize(820, 405);
        lineEdit = new QLineEdit(searchByAuthorPage);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 70, 113, 24));
        pushButton = new QPushButton(searchByAuthorPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 120, 80, 24));
        tableView = new QTableView(searchByAuthorPage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(400, 40, 256, 192));

        retranslateUi(searchByAuthorPage);

        QMetaObject::connectSlotsByName(searchByAuthorPage);
    } // setupUi

    void retranslateUi(QDialog *searchByAuthorPage)
    {
        searchByAuthorPage->setWindowTitle(QCoreApplication::translate("searchByAuthorPage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("searchByAuthorPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchByAuthorPage: public Ui_searchByAuthorPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBYAUTHORPAGE_H
