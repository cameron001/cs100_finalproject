#include <QtTest>
#include <QCoreApplication>
#include "../database.h"
// add necessary includes here
#include <QSqlDriver>

class dbInstanceTest : public QObject
{
    Q_OBJECT



private slots:
    void test_case1();
    void openDb();
    void closeDb();
    void testConnectName();
    void testFakeConnectName();

};



void dbInstanceTest::test_case1()
{
    Database* testdb = Database::getInstance();
    QVERIFY2(testdb != nullptr, "database instance wasn't created");
}

void dbInstanceTest::openDb()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "first");
    db.setDatabaseName(qApp->applicationDirPath()
                       + QDir::separator()
                       + "Highlander_books.db");
    db.close();
    db.removeDatabase(qApp->applicationDirPath()
                      + QDir::separator()
                      + "Highlander_books.db");
    QCOMPARE(db.open(), true);
}

void dbInstanceTest::closeDb()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "second");
    db.setDatabaseName(qApp->applicationDirPath()
                       + QDir::separator()
                       + "Highlander_books.db");
    if (db.open())
    {
        db.close();
    }
    db.removeDatabase(qApp->applicationDirPath()
                      + QDir::separator()
                      + "Highlander_books.db");
    QCOMPARE(!db.open(), false);
}

void dbInstanceTest::testConnectName()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "first");
    db.setDatabaseName(qApp->applicationDirPath()
                       + QDir::separator()
                       + "Highlander_books.db");
    QVERIFY(db.isValid());
}

void dbInstanceTest::testFakeConnectName()
{
    QSqlDatabase db;
    QCOMPARE(db.isValid(), false);
}

QTEST_MAIN(dbInstanceTest)

#include "tst_dbinstancetest.moc"
