#include <QtTest>

// add necessary includes here
#include "../booksfactory.h"

class factoryTests : public QObject
{
    Q_OBJECT

public:
    factoryTests();
    ~factoryTests();

private slots:
    void test_case1();
    void test_is_number();
    void test_case2();

};

factoryTests::factoryTests()
{

}

factoryTests::~factoryTests()
{

}

void factoryTests::test_case1()
{
    HighlanderBooks::BooksFactory *factory = new HighlanderBooks::BooksFactory();
    QCOMPARE(factory->is_number("asdfsf"), false);
}

void factoryTests::test_is_number()
{
    HighlanderBooks::BooksFactory *factory = new HighlanderBooks::BooksFactory();
    QCOMPARE(factory->is_number("1"), true);
}

void factoryTests::test_case2()
{

    HighlanderBooks::BooksFactory *factory = new HighlanderBooks::BooksFactory();
    map<string, string> testMap;
    map<string, string> testMap2;
    testMap.insert(std::pair<string, string>("hi", "hi"));
    testMap2.insert(std::pair<string, string>("hi", "hi"));
    //factory->CreateBook(testMap);
    QCOMPARE(factory->CreateBook(testMap), factory->CreateBook(testMap2));

}

QTEST_APPLESS_MAIN(factoryTests)

#include "tst_factorytests.moc"
