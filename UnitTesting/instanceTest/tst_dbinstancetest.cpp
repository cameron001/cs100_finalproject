#include <QtTest>
#include <QCoreApplication>
#include "../database.h"
// add necessary includes here

class dbInstanceTest : public QObject
{
    Q_OBJECT



private slots:
    void test_case1();

};



void dbInstanceTest::test_case1()
{
    Database* testdb = Database::getInstance();
    QVERIFY2(testdb != nullptr, "database instance wasn't created");
}

QTEST_MAIN(dbInstanceTest)

#include "tst_dbinstancetest.moc"
