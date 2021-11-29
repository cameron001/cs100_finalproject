/********************************************************************************
** Form generated from reading UI file 'addbookpage.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBOOKPAGE_H
#define UI_ADDBOOKPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addBookPage
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QDialog *addBookPage)
    {
        if (addBookPage->objectName().isEmpty())
            addBookPage->setObjectName(QString::fromUtf8("addBookPage"));
        addBookPage->resize(835, 518);
        lineEdit = new QLineEdit(addBookPage);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 40, 113, 24));
        pushButton = new QPushButton(addBookPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(450, 450, 80, 24));

        retranslateUi(addBookPage);

        QMetaObject::connectSlotsByName(addBookPage);
    } // setupUi

    void retranslateUi(QDialog *addBookPage)
    {
        addBookPage->setWindowTitle(QCoreApplication::translate("addBookPage", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("addBookPage", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addBookPage: public Ui_addBookPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBOOKPAGE_H
