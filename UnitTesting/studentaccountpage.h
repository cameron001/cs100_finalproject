#ifndef STUDENTACCOUNTPAGE_H
#define STUDENTACCOUNTPAGE_H

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
#include "displaybooks.h"

namespace Ui {
class studentAccountPage;
}

class studentAccountPage : public QDialog
{
    Q_OBJECT

public:
    explicit studentAccountPage(QWidget *parent = nullptr);
    ~studentAccountPage();


    /**
            @brief    centerAndResize     A public member function that resizes and centers the screen upon run by the user
            @author   blake2703
            @date     11/10/2021
            */
          void centerAndResize();

          void createWelcomeLabel();

          void createAccountInfoButton();

          void createLibraryBooksButton();

          void createTransactionButton();

          void createAccountDebtButton();
          void createLogoutButton();

private slots:
          void on_accountInfoButton_clicked();

          void on_libraryBooksButton_clicked();

          void on_logout_clicked();

private:
    Ui::studentAccountPage *ui;
    QWidget *dailog;
};

#endif // STUDENTACCOUNTPAGE_H
