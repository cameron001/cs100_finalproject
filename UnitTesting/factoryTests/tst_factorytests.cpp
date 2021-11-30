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
    void test_case3();
    void test_case4();
    void test_jour();
    void test_jour2();
    void test_jour3();
    void test_jour4();
    void test_text1();
    void test_text2();
    void test_text3();
    void test_text4();
    void test_text5();
    void test_text6();
    void test_ref1();
    void test_ref2();
    void test_ref3();
    void test_ref4();
    void test_ref5();
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

void factoryTests::test_case3()
{
    HighlanderBooks::BooksFactory *factory = new HighlanderBooks::BooksFactory();
    QCOMPARE(factory->is_number("2"), true);
}

void factoryTests::test_case4()
{
    HighlanderBooks::BooksFactory *factory = new HighlanderBooks::BooksFactory();
    QCOMPARE(factory->is_number("3"), true);
}

void factoryTests::test_jour()
{
    journal* test = new journal();
    test->setIsbn("1234");
    test->setTitle("Hunger Games");

    QVERIFY(test->getAuthor() == "");
    QVERIFY(test->getIsbn() == "1234");
    QVERIFY(test->getLanguage() == "");
    QVERIFY(test->getTitle() == "Hunger Games");
}

void factoryTests::test_jour2()
{
    journal* test = new journal();
    test->setePages(100);
    QVERIFY(test->getePages() == 100);
}

void factoryTests::test_jour3()
{
    journal* test = new journal();
    test->setPrice(100);
    QVERIFY(test->getPrice() == 100);
}

void factoryTests::test_jour4()
{
    journal* test = new journal();
    test->setBbeScore(0);
    QVERIFY(test->getBbeScore() == 0);
}

void factoryTests::test_text1()
{
    TextBook *text = new TextBook();
    text->setAuthor("hi");
    QVERIFY(text->getAuthor() == "hi");
}

void factoryTests::test_text2()
{
    TextBook *text = new TextBook();
    text->setTitle("asda");
    QVERIFY(text->getTitle() == "asda");
}

void factoryTests::test_text3()
{
    TextBook *text = new TextBook();
    text->setCharacters("katniss");
    QVERIFY(text->getCharacters() == "katniss");
}

void factoryTests::test_text4()
{
    TextBook *text = new TextBook();
    text->setSetting("a far galaxy");
    QVERIFY(text->getSetting() == "a far galaxy");
}

void factoryTests::test_text5()
{
    TextBook *text = new TextBook();
    text->setAwards("golden globe");
    QVERIFY(text->getAwards() == "golden globe");
}

void factoryTests::test_text6()
{
    TextBook *text = new TextBook();
    text->setPrice(24.99);
    QVERIFY(text->getPrice() == 24.99);
}

void factoryTests::test_ref1()
{
    RefBook *ref = new RefBook();
    ref->setTitle("title");
    QVERIFY(ref->getTitle() == "title");
}

void factoryTests::test_ref2()
{
    RefBook *ref = new RefBook();
    ref->setAuthor("author");
    QVERIFY(ref->getAuthor() == "");
}


void factoryTests::test_ref3()
{
    RefBook *ref = new RefBook();
    ref->setSeries("series");
    QVERIFY(ref->getAuthor() == "");
}


void factoryTests::test_ref4()
{
    RefBook *ref = new RefBook();
    ref->setPrice(150);
    QVERIFY(ref->getPrice() == 150);
}


void factoryTests::test_ref5()
{
    RefBook *ref = new RefBook();
    ref->setID(1);
    QVERIFY(ref->getID() == 1);
}


QTEST_APPLESS_MAIN(factoryTests)

#include "tst_factorytests.moc"
