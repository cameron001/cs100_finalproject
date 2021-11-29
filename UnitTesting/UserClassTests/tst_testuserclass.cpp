#include <QtTest>
#include <QCoreApplication>
#include "../user.h"
// add necessary includes here

class testUserClass : public QObject
{
    Q_OBJECT


private slots:
    void test_case1_normal();
    void test_case2_leavingempty();
    void test_case3_weirdinputs();
};



void testUserClass::test_case1_normal()
{

    user* testuser = new user();

    testuser->setFirstName("Paul");
    testuser->setLastName("McCartney");
    testuser->setUsername("Beatle");
    testuser->setUserId(1965);

    QVERIFY2(testuser->getFirstName() == "Paul", "didnt return correct firstname");
    QVERIFY2(testuser->getLastName() == "McCartney", "didnt return correct lastname");
    QVERIFY2(testuser->getUsername() == "Beatle", "didnt return correct username");
    QVERIFY2(testuser->getUserId() == 1965, "didnt return correct userID");


//    query.prepare("INSERT INTO users ("
//                                   "fName, "
//                                   "lName, "
//                                   "username, "
//                                   "password, "
//                                   "userType) "
//                                   "VALUES (?, ?, ?, ?, ?);");
//      query.addBindValue(firstname);
//      query.addBindValue(lastname);
//      query.addBindValue(username);
//      query.addBindValue(password);
//       query.addBindValue("STUDENT");



}
void testUserClass::test_case2_leavingempty(){

    user* testuser2 = new user();

    testuser2->setUserId(0);

    QVERIFY2(testuser2->getFirstName() == "", "didnt return an empty string");
    QVERIFY2(testuser2->getLastName() == "", "didnt return an empty string");
    QVERIFY2(testuser2->getUsername() == "", "didnt return an empty string");
    QVERIFY2(testuser2->getUserId() == 0, "didnt return 0");
}

void testUserClass::test_case3_weirdinputs(){

    user* testuser = new user();

    testuser->setFirstName("123");
    testuser->setLastName("\n");
    testuser->setUsername("");
    testuser->setUserId(-3);

    QVERIFY2(testuser->getFirstName() == "123", "didnt return correct firstname");
    QVERIFY2(testuser->getLastName() == "\n", "didnt return correct lastname");
    QVERIFY2(testuser->getUsername() == "", "didnt return correct username");
    QVERIFY2(testuser->getUserId() == -3, "didnt return correct userID");


}

QTEST_MAIN(testUserClass)

#include "tst_testuserclass.moc"
