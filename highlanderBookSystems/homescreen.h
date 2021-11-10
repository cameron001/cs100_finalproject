#ifndef HOMESCREEN_H
#define HOMESCREEN_H

#include "existinguserloginpage.h"

#include <QMainWindow>
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

QT_BEGIN_NAMESPACE
namespace Ui { class homeScreen; }
QT_END_NAMESPACE

class homeScreen : public QMainWindow
{
    Q_OBJECT

public:
    homeScreen(QWidget *parent = nullptr);
    ~homeScreen();

    /**
         @brief    centerAndResize     A public member function that resizes and centers the screen upon run by the user
         @author   blake2703
         @date     11/10/2021
         */
       void centerAndResize();

       /**
         @brief    createWelcomeLabel      A public member function that creates a welcome label upon the call of the
                                           constructor.
         @author   blake2703
         @date     11/10/2021
         */
       void createWelcomeLabel();

       /**
         @brief    createExistingUserLoginButton       A public member function that creates the login button. This button when
                                                       pressed will take the user to a specific login page for all our members
         @author   blake2703
         @date     11/10/2021
         */
       void createExistingUserLoginButton();

       /**
         @brief    createFirstNameEdit     A public member function that creates the first name line edit. This line edit will
                                           take in an input by the user and it should be the first name of that specific user.
                                           If the line edit is left empty it will not allow the user to advance to the next
                                           screen to finish the sign up
         @author   blake2703
         @date     11/10/2021
         */
       void createFirstNameEdit();

       /**
         @brief    lastNameEdit    A public member function that creates the last name line edit. This line edit will take in an
                                   input by the user and it should be the last name of that specific user. If the line edit is
                                   left empty it will not allow the user to advance to the next screen to finish the sign up
         @author   blake2703
         @date     11/10/2021
         */
       void createLastNameEdit();

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
         @brief    createHeadingLaebl    A public member function that creates the heading label at the top of the screen. It will
                                         display the name of the app
         @author   blake2703
         @date     11/10/2021
         */
       void createHeadingLabel();

       /**
         @brief    createDynamicButton    A public member function that creates a dynamic button based on whether the user has inputted
                                          the first and last name into the line edits described above. If there is any input in the line
                                          edit, then the button will appear. If there is no input, then the button will not appear. This
                                          function will account for when a user starts typing and backspaces everything. In this case,
                                          the button will disappear
         @author   blake2703
         @date     11/10/2021
         */
       void createDynamicButton();

   private slots:
       /**
         @brief    on_existingUserLoginButton_clicked     A private slot function that will allow the user to click the
                                                          login if they are an existing user. Upon clicking, the user
                                                          will be taken to a different page where they will enter their
                                                          credentials to login
         @author   blake2703
         @date     11/10/2021
        */
       void on_existingUserLoginButton_clicked();

       /**
         @brief    on_dynamicButton_clicked     A private slot function that will allow the user to click the
                                                          login if they are an existing user. Upon clicking, the user
                                                          will be taken to a different page where they will enter their
                                                          credentials to login
         @author   blake2703
         @date     11/10/2021
        */
       void on_dynamicButton_clicked();

   public slots:
       /**
         @brief    onTextEdited   A public slot that will connect to the first and last name line edit functions. This
                                  function determines if the line edit has been edited by the user. If edited, it displays
                                  a button to let the user continue, if not edited the button remains hidden
         @author   blake2703
         @date     11/10/2021
        */
       void onTextEdited();


private:
    QString firstName;
    QString lastName;
    Ui::homeScreen *ui;
};
#endif // HOMESCREEN_H
