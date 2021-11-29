#include "database.h"
#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include "homescreen.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "HighlanderBooks_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }
    Database* DB = Database::getInstance();
    homeScreen w;
    w.show();
    return a.exec();
}
