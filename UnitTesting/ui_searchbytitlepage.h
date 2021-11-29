/********************************************************************************
** Form generated from reading UI file 'searchbytitlepage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBYTITLEPAGE_H
#define UI_SEARCHBYTITLEPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_searchByTitlePage
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTableView *tableView;

    void setupUi(QDialog *searchByTitlePage)
    {
        if (searchByTitlePage->objectName().isEmpty())
            searchByTitlePage->setObjectName(QString::fromUtf8("searchByTitlePage"));
        searchByTitlePage->resize(644, 403);
        lineEdit = new QLineEdit(searchByTitlePage);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(130, 70, 113, 24));
        pushButton = new QPushButton(searchByTitlePage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 130, 80, 24));
        tableView = new QTableView(searchByTitlePage);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(310, 50, 256, 192));

        retranslateUi(searchByTitlePage);

        QMetaObject::connectSlotsByName(searchByTitlePage);
    } // setupUi

    void retranslateUi(QDialog *searchByTitlePage)
    {
        searchByTitlePage->setWindowTitle(QCoreApplication::translate("searchByTitlePage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("searchByTitlePage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchByTitlePage: public Ui_searchByTitlePage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBYTITLEPAGE_H
