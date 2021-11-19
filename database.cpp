#include "database.h"
#include "studentaccountpage.h"

Database* Database::instance = nullptr;

Database::Database() : QSqlDatabase(addDatabase("QSQLITE"))
{
    this->setDatabaseName(qApp->applicationDirPath()
                          + QDir::separator()
                          + "Highlander_books.db");
    QFileInfo databaseInfo(qApp->applicationDirPath()
                           + QDir::separator()
                           + "Highlander_books.db");
    qDebug() << "database path:" << qApp->applicationDirPath()
                + QDir::separator()
                + "Highlander_books.db";
    if (databaseInfo.exists())
    {
        qDebug() << "Database file is open.\n";
        this->open();
        QSqlQuery query;
        query.prepare("PRAGMA foreign_keys = ON");
        query.exec();
    }
    else
    {
        qDebug() << "Database file is not open.\n";
    }
}

Database* Database::getInstance()
{
    if(instance == nullptr)
        instance = new Database;
    return instance;
}

Database::~Database(){
    this->close();
    instance=nullptr;
}

user* Database::login(QString username, QString password)
{
    query.prepare("SELECT * FROM users WHERE username = ? AND password = ? AND userType = ? ");
    query.addBindValue(username);
    query.addBindValue(password);
    query.addBindValue("STUDENT");
    if (!query.exec())
    {
        qDebug() << query.lastError();
    }
    else
    {
        int count = 0;
        while(query.next())
        {
            count++;
            QString name = query.value(1).toString();
            QMessageBox success;
            QFont userFont("Courier", 15, QFont::Bold);
            success.setIcon(QMessageBox::Information);
            success.setFont(userFont);
            success.setText("Username and Password Correct! Welcome " + name);
            success.setIcon(QMessageBox::Warning);
            success.setWindowTitle("Invalid user");
            success.exec();
            //open new page
            studentAccountPage newLogin;
            newLogin.setModal(true);
            newLogin.show();
            newLogin.exec();
        }
        if (count < 1)
        {
            QMessageBox error;
            error.setText("Error! Username or password is incorrect");
            error.setIcon(QMessageBox::Warning);
            error.setWindowTitle("Invalid user");
            error.exec();
        }
    }
    return userDbCacheLogin[username][password];
}

