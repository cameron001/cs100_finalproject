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



