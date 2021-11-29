#ifndef EXISTINGUSERLOGINPAGE_H
#define EXISTINGUSERLOGINPAGE_H

#include <QDialog>
//Define needed helpers provided by QT
//#include <QDesktopWidget>
#include <QScreen>
#include <QStyle>
#include <QDebug>
#include <QFont>
#include <QValidator>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFileInfo>
#include <QSqlTableModel>
#include <iostream>

#include "database.h"
#include "studentaccountpage.h"
using namespace HighlanderBooks;
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

       /**
         @brief    createLoginLabel      A public member function that creates a welcome label upon the call of the
                                           constructor.
         @author   blake2703
         @date     11/10/2021
         */
       void createLoginLabel();

       /**
         @brief    usernameEdit    A public member function that creates the username line edit. This line edit will take in an
                                   input by the user and it should be the username of that specific user. If the line edit is
                                   left empty it will not allow the user to advance to the next screen to finish the sign up
         @author   blake2703
         @date     11/10/2021
         */
       void createusernameEdit();

       /**
         @brief    passowrdEdit    A public member function that creates the password line edit. This line edit will take in an
                                   input by the user and it should be the password of that specific user. If the line edit is
                                   left empty it will not allow the user to advance to the next screen to finish the sign up
         @author   blake2703
         @date     11/10/2021
         */
       void createpasswordEdit();

       void createLoginButton();
       HighlanderBooks::user* login(QString username, QString password);

private slots:
       void on_loginButton_clicked();

private:
    Ui::existingUserLoginPage *ui;
    QSqlQuery query;
    QVector<HighlanderBooks::user> userVector;
    QMap<QString, QMap<QString, HighlanderBooks::user*> > userDbCacheLogin;
};

#endif // EXISTINGUSERLOGINPAGE_H
