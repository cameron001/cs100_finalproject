#ifndef FACULTYLOGIN_H
#define FACULTYLOGIN_H

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

#include "facultyaccountpage.h"
using namespace HighlanderBooks;

namespace Ui {
    class facultyLogin;
}

class facultyLogin : public QDialog
{
    Q_OBJECT

public:
    explicit facultyLogin(QWidget* parent = nullptr);
    ~facultyLogin();

    void centerAndResize();

    void createLoginLabel();

    void createusernameEdit();

   
    void createpasswordEdit();

    void createLoginButton();
    HighlanderBooks::user* login(QString username, QString password);

private slots:
    void on_loginButton_clicked();

private:
    Ui::facultyLogin* ui;
    QMap<QString, QMap<QString, HighlanderBooks::user*> > facultyDbCacheLogin;
};

#endif // FACULTYLOGIN_H
