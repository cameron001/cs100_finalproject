#ifndef STUDENTACCOUNTINFOPAGE_H
#define STUDENTACCOUNTINFOPAGE_H

#include <QDialog>

#include <QScreen>
#include <QStyle>
#include <QDebug>
#include <QFont>
#include <QValidator>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include "database.h"
#include <QStandardItemModel>

namespace Ui {
class studentAccountInfoPage;
}

class studentAccountInfoPage : public QDialog
{
    Q_OBJECT

public:
    explicit studentAccountInfoPage(QWidget *parent = nullptr);
    ~studentAccountInfoPage();

    /**
            @brief    centerAndResize     A public member function that resizes and centers the screen upon run by the user
            @author   blake2703
            @date     11/10/2021
            */
          void centerAndResize();
          void createUsernameEdit();
          void createPasswordEdit();
          void createLoginButton();
          void createLabel();

private slots:
          void on_loginButton_clicked();

private:
    Ui::studentAccountInfoPage *ui;
};

#endif // STUDENTACCOUNTINFOPAGE_H
