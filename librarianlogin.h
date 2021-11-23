#ifndef LIBRARIANLOGIN_H
#define LIBRARIANLOGIN_H

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

#include "librarianaccountpage.h"


namespace Ui {
class librarianLogin;
}

class librarianLogin : public QDialog
{
    Q_OBJECT

public:
    explicit librarianLogin(QWidget *parent = nullptr);
    ~librarianLogin();

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

          /**
            @brief    createLibrarianLoginButton       A public member function that creates the login button. This button when
                                                          pressed will take the user to a specific login page for all our members
            @author   blake2703
            @date     11/10/2021
            */
          void createLoginButton();

private slots:
          void on_loginButton_clicked();

private:
    Ui::librarianLogin *ui;
};

#endif // LIBRARIANLOGIN_H
