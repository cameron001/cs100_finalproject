#include "homescreen.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    homeScreen w;
    w.show();
    return a.exec();
}
