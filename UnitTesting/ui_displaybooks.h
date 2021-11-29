/********************************************************************************
** Form generated from reading UI file 'displaybooks.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYBOOKS_H
#define UI_DISPLAYBOOKS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DisplayBooks
{
public:
    QScrollArea *buttons_container;
    QWidget *scrollAreaWidgetContents_2;
    QLabel *welcome_lbl;
    QGroupBox *groupBox;
    QRadioButton *radio_all;
    QRadioButton *radio_text;
    QRadioButton *radio_ref;
    QRadioButton *radio_journal;
    QRadioButton *radio_author;
    QRadioButton *radio_genre;
    QRadioButton *radio_ISBN;
    QLabel *label;
    QLineEdit *search_text;
    QPushButton *search_btn;
    QLabel *search_result_lbl;
    QScrollArea *rSide1;
    QWidget *scrollAreaWidgetContents_3;
    QTableView *booksDataSet;
    QLabel *desc;
    QLabel *imgLbl;
    QLabel *titleLbl;
    QLabel *genre;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *checkout;

    void setupUi(QDialog *DisplayBooks)
    {
        if (DisplayBooks->objectName().isEmpty())
            DisplayBooks->setObjectName(QString::fromUtf8("DisplayBooks"));
        DisplayBooks->resize(1294, 795);
        buttons_container = new QScrollArea(DisplayBooks);
        buttons_container->setObjectName(QString::fromUtf8("buttons_container"));
        buttons_container->setGeometry(QRect(10, 30, 271, 391));
        buttons_container->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 269, 389));
        welcome_lbl = new QLabel(scrollAreaWidgetContents_2);
        welcome_lbl->setObjectName(QString::fromUtf8("welcome_lbl"));
        welcome_lbl->setGeometry(QRect(10, 0, 221, 16));
        groupBox = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 30, 231, 191));
        radio_all = new QRadioButton(groupBox);
        radio_all->setObjectName(QString::fromUtf8("radio_all"));
        radio_all->setGeometry(QRect(10, 20, 99, 20));
        radio_text = new QRadioButton(groupBox);
        radio_text->setObjectName(QString::fromUtf8("radio_text"));
        radio_text->setGeometry(QRect(10, 40, 99, 20));
        radio_ref = new QRadioButton(groupBox);
        radio_ref->setObjectName(QString::fromUtf8("radio_ref"));
        radio_ref->setGeometry(QRect(10, 60, 141, 20));
        radio_journal = new QRadioButton(groupBox);
        radio_journal->setObjectName(QString::fromUtf8("radio_journal"));
        radio_journal->setGeometry(QRect(10, 80, 99, 20));
        radio_author = new QRadioButton(groupBox);
        radio_author->setObjectName(QString::fromUtf8("radio_author"));
        radio_author->setGeometry(QRect(10, 120, 161, 20));
        radio_genre = new QRadioButton(groupBox);
        radio_genre->setObjectName(QString::fromUtf8("radio_genre"));
        radio_genre->setGeometry(QRect(10, 140, 161, 20));
        radio_ISBN = new QRadioButton(groupBox);
        radio_ISBN->setObjectName(QString::fromUtf8("radio_ISBN"));
        radio_ISBN->setGeometry(QRect(10, 160, 161, 20));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 100, 60, 16));
        search_text = new QLineEdit(scrollAreaWidgetContents_2);
        search_text->setObjectName(QString::fromUtf8("search_text"));
        search_text->setGeometry(QRect(20, 230, 231, 31));
        search_btn = new QPushButton(scrollAreaWidgetContents_2);
        search_btn->setObjectName(QString::fromUtf8("search_btn"));
        search_btn->setGeometry(QRect(140, 270, 113, 32));
        search_result_lbl = new QLabel(scrollAreaWidgetContents_2);
        search_result_lbl->setObjectName(QString::fromUtf8("search_result_lbl"));
        search_result_lbl->setGeometry(QRect(10, 290, 231, 51));
        buttons_container->setWidget(scrollAreaWidgetContents_2);
        rSide1 = new QScrollArea(DisplayBooks);
        rSide1->setObjectName(QString::fromUtf8("rSide1"));
        rSide1->setGeometry(QRect(280, 30, 971, 461));
        rSide1->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 969, 459));
        booksDataSet = new QTableView(scrollAreaWidgetContents_3);
        booksDataSet->setObjectName(QString::fromUtf8("booksDataSet"));
        booksDataSet->setGeometry(QRect(60, 60, 256, 192));
        desc = new QLabel(scrollAreaWidgetContents_3);
        desc->setObjectName(QString::fromUtf8("desc"));
        desc->setGeometry(QRect(420, 230, 261, 101));
        imgLbl = new QLabel(scrollAreaWidgetContents_3);
        imgLbl->setObjectName(QString::fromUtf8("imgLbl"));
        imgLbl->setGeometry(QRect(790, 130, 161, 141));
        titleLbl = new QLabel(scrollAreaWidgetContents_3);
        titleLbl->setObjectName(QString::fromUtf8("titleLbl"));
        titleLbl->setGeometry(QRect(80, 10, 171, 16));
        genre = new QLabel(scrollAreaWidgetContents_3);
        genre->setObjectName(QString::fromUtf8("genre"));
        genre->setGeometry(QRect(360, 310, 291, 31));
        scrollArea = new QScrollArea(scrollAreaWidgetContents_3);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(120, 280, 120, 80));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 118, 78));
        scrollArea->setWidget(scrollAreaWidgetContents);
        checkout = new QPushButton(scrollAreaWidgetContents_3);
        checkout->setObjectName(QString::fromUtf8("checkout"));
        checkout->setGeometry(QRect(80, 410, 421, 41));
        rSide1->setWidget(scrollAreaWidgetContents_3);

        retranslateUi(DisplayBooks);

        QMetaObject::connectSlotsByName(DisplayBooks);
    } // setupUi

    void retranslateUi(QDialog *DisplayBooks)
    {
        DisplayBooks->setWindowTitle(QCoreApplication::translate("DisplayBooks", "Dialog", nullptr));
        welcome_lbl->setText(QCoreApplication::translate("DisplayBooks", "Welcome,  Student/Librarian here", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DisplayBooks", "Filter books by:", nullptr));
        radio_all->setText(QCoreApplication::translate("DisplayBooks", "All Books", nullptr));
        radio_text->setText(QCoreApplication::translate("DisplayBooks", "Textbooks", nullptr));
        radio_ref->setText(QCoreApplication::translate("DisplayBooks", "Reference Books", nullptr));
        radio_journal->setText(QCoreApplication::translate("DisplayBooks", "Journals", nullptr));
        radio_author->setText(QCoreApplication::translate("DisplayBooks", "Search by Author", nullptr));
        radio_genre->setText(QCoreApplication::translate("DisplayBooks", "Search by genre", nullptr));
        radio_ISBN->setText(QCoreApplication::translate("DisplayBooks", "Search by ISBN", nullptr));
        label->setText(QCoreApplication::translate("DisplayBooks", "OR", nullptr));
        search_btn->setText(QCoreApplication::translate("DisplayBooks", "Search", nullptr));
        search_result_lbl->setText(QString());
        desc->setText(QString());
        imgLbl->setText(QString());
        titleLbl->setText(QCoreApplication::translate("DisplayBooks", "TextLabel", nullptr));
        genre->setText(QString());
        checkout->setText(QCoreApplication::translate("DisplayBooks", "Checkout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisplayBooks: public Ui_DisplayBooks {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYBOOKS_H
