/********************************************************************************
** Form generated from reading UI file 'librarianaccountpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARIANACCOUNTPAGE_H
#define UI_LIBRARIANACCOUNTPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_librarianAccountPage
{
public:
    QPushButton *addBookButton;
    QPushButton *editBookButton;
    QPushButton *deleteBookButton;
    QPushButton *displayBooksButton;
    QLabel *label;
    QPushButton *searchByAuthorButton;
    QPushButton *searchByBookTitleButton;
    QPushButton *searchByISBNButton;

    void setupUi(QDialog *librarianAccountPage)
    {
        if (librarianAccountPage->objectName().isEmpty())
            librarianAccountPage->setObjectName(QString::fromUtf8("librarianAccountPage"));
        librarianAccountPage->resize(400, 300);
        addBookButton = new QPushButton(librarianAccountPage);
        addBookButton->setObjectName(QString::fromUtf8("addBookButton"));
        addBookButton->setGeometry(QRect(90, 40, 80, 24));
        editBookButton = new QPushButton(librarianAccountPage);
        editBookButton->setObjectName(QString::fromUtf8("editBookButton"));
        editBookButton->setGeometry(QRect(90, 80, 80, 24));
        deleteBookButton = new QPushButton(librarianAccountPage);
        deleteBookButton->setObjectName(QString::fromUtf8("deleteBookButton"));
        deleteBookButton->setGeometry(QRect(90, 120, 80, 24));
        displayBooksButton = new QPushButton(librarianAccountPage);
        displayBooksButton->setObjectName(QString::fromUtf8("displayBooksButton"));
        displayBooksButton->setGeometry(QRect(90, 160, 80, 24));
        label = new QLabel(librarianAccountPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 50, 60, 16));
        searchByAuthorButton = new QPushButton(librarianAccountPage);
        searchByAuthorButton->setObjectName(QString::fromUtf8("searchByAuthorButton"));
        searchByAuthorButton->setGeometry(QRect(210, 90, 80, 24));
        searchByBookTitleButton = new QPushButton(librarianAccountPage);
        searchByBookTitleButton->setObjectName(QString::fromUtf8("searchByBookTitleButton"));
        searchByBookTitleButton->setGeometry(QRect(210, 130, 80, 24));
        searchByISBNButton = new QPushButton(librarianAccountPage);
        searchByISBNButton->setObjectName(QString::fromUtf8("searchByISBNButton"));
        searchByISBNButton->setGeometry(QRect(210, 160, 81, 32));

        retranslateUi(librarianAccountPage);

        QMetaObject::connectSlotsByName(librarianAccountPage);
    } // setupUi

    void retranslateUi(QDialog *librarianAccountPage)
    {
        librarianAccountPage->setWindowTitle(QCoreApplication::translate("librarianAccountPage", "Dialog", nullptr));
        addBookButton->setText(QCoreApplication::translate("librarianAccountPage", "PushButton", nullptr));
        editBookButton->setText(QCoreApplication::translate("librarianAccountPage", "PushButton", nullptr));
        deleteBookButton->setText(QCoreApplication::translate("librarianAccountPage", "PushButton", nullptr));
        displayBooksButton->setText(QCoreApplication::translate("librarianAccountPage", "PushButton", nullptr));
        label->setText(QCoreApplication::translate("librarianAccountPage", "TextLabel", nullptr));
        searchByAuthorButton->setText(QCoreApplication::translate("librarianAccountPage", "PushButton", nullptr));
        searchByBookTitleButton->setText(QCoreApplication::translate("librarianAccountPage", "PushButton", nullptr));
        searchByISBNButton->setText(QCoreApplication::translate("librarianAccountPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class librarianAccountPage: public Ui_librarianAccountPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARIANACCOUNTPAGE_H
