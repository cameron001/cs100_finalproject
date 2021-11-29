#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlQueryModel>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QFile>
#include <QDebug>
#include <QApplication>
#include <QDir>
//#include <strings.h>

#include <QFileInfo>
#include <QSqlError>
#include <QSqlRecord>
#include <QVariant>
#include <QtDebug>
#include <QSqlTableModel>
#include <QMap>
#include <QMessageBox>
#include <QVector>
#include <QScreen>
#include "user.h"
#include "librarianaccountpage.h"


class user;
/**
 * @brief The Database class
 * is used to access the database to use in the program
 */
class Database: public QSqlDatabase
{
public:
    /**
     * @brief Function to return the database instance
     * @return the database pointer instance to the project sql database
     */
    static Database* getInstance();




private:
    /**
     * @brief Class constructor
     *
     * Set the path and open the database file for the program
     */
    Database();
    static Database* instance;
    Database *db;

    QSqlQuery query;



    ~Database();




};

#endif // DATABASE_H
