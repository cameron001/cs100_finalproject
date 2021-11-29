/********************************************************************************
** Form generated from reading UI file 'searchbyisbnpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBYISBNPAGE_H
#define UI_SEARCHBYISBNPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_searchByISBNPage
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QDialog *searchByISBNPage)
    {
        if (searchByISBNPage->objectName().isEmpty())
            searchByISBNPage->setObjectName(QString::fromUtf8("searchByISBNPage"));
        searchByISBNPage->resize(820, 405);
        lineEdit = new QLineEdit(searchByISBNPage);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(150, 70, 113, 24));
        pushButton = new QPushButton(searchByISBNPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 120, 80, 24));
        tableView = new QTableView(searchByISBNPage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(400, 40, 256, 192));

        retranslateUi(searchByISBNPage);

        QMetaObject::connectSlotsByName(searchByISBNPage);
    } // setupUi

    void retranslateUi(QDialog *searchByISBNPage)
    {
        searchByISBNPage->setWindowTitle(QCoreApplication::translate("searchByISBNPage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("searchByISBNPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchByISBNPage: public Ui_searchByISBNPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBYISBNPAGE_H
