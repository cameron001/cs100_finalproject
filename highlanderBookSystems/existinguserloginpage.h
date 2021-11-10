#ifndef EXISTINGUSERLOGINPAGE_H
#define EXISTINGUSERLOGINPAGE_H

#include <QDialog>
//Define needed helpers provided by QT
#include <QDesktopWidget>
#include <QStyle>
#include <QDebug>
#include <QFont>
#include <QValidator>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

namespace Ui {
class existingUserLoginPage;
}

class existingUserLoginPage : public QDialog
{
    Q_OBJECT

public:
    explicit existingUserLoginPage(QWidget *parent = nullptr);
    ~existingUserLoginPage();

    /**
         @brief    centerAndResize     A public member function that resizes and centers the screen upon run by the user
         @author   blake2703
         @date     11/10/2021
         */
       void centerAndResize();

private:
    Ui::existingUserLoginPage *ui;
};

#endif // EXISTINGUSERLOGINPAGE_H
