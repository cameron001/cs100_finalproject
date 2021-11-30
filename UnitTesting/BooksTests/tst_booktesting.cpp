#include <QtTest>
#include <QCoreApplication>
#include "../TextBook.h"
#include "../RefBook.h"
#include "../journal.h"
#include "../book.h"
// add necessary includes here

class booktesting : public QObject
{
    Q_OBJECT

public:
    booktesting();
    ~booktesting();

private slots:
    void test_text();
    void test_ref();
    void test_jour();
};

booktesting::booktesting()
{

}

booktesting::~booktesting()
{

}

void booktesting::test_text()
{
    TextBook* test = new TextBook();
    test->setAuthor("bob");
    test->setIsbn("1234");
    test->setLanguage("English");
    test->setTitle("Hunger Games");

    QVERIFY(test->getAuthor() == "bob");
    QVERIFY(test->getIsbn() == "1234");
    QVERIFY(test->getLanguage() == "English");
    QVERIFY(test->getTitle() == "Hunger Games");
}

void booktesting::test_ref()
{
    RefBook* test = new RefBook();
    test->setAuthor("bob");
    test->setIsbn("1234");
    test->setLanguage("English");
    test->setTitle("Hunger Games");

    QVERIFY(test->getAuthor() == "bob");
    QVERIFY(test->getIsbn() == "1234");
    QVERIFY(test->getLanguage() == "English");
    QVERIFY(test->getTitle() == "Hunger Games");
}

void booktesting::test_jour()
{
    journal* test = new journal();
    test->setAuthor("bob");
    test->setIsbn("1234");
    test->setLanguage("English");
    test->setTitle("Hunger Games");

    QVERIFY(test->getAuthor() == "bob");
    QVERIFY(test->getIsbn() == "1234");
    QVERIFY(test->getLanguage() == "English");
    QVERIFY(test->getTitle() == "Hunger Games");
}


QTEST_MAIN(booktesting)

#include "tst_booktesting.moc"
