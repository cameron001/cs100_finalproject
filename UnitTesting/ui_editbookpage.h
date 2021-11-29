/********************************************************************************
** Form generated from reading UI file 'editbookpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITBOOKPAGE_H
#define UI_EDITBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_editBookPage
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;

    void setupUi(QDialog *editBookPage)
    {
        if (editBookPage->objectName().isEmpty())
            editBookPage->setObjectName(QString::fromUtf8("editBookPage"));
        editBookPage->resize(713, 545);
        pushButton = new QPushButton(editBookPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(460, 430, 80, 24));
        lineEdit = new QLineEdit(editBookPage);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 40, 113, 24));

        retranslateUi(editBookPage);

        QMetaObject::connectSlotsByName(editBookPage);
    } // setupUi

    void retranslateUi(QDialog *editBookPage)
    {
        editBookPage->setWindowTitle(QCoreApplication::translate("editBookPage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("editBookPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editBookPage: public Ui_editBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITBOOKPAGE_H
