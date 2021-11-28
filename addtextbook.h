#ifndef ADDTEXTBOOK_H
#define ADDTEXTBOOK_H

#include <QDialog>
#include "database.h"

namespace Ui {
class addTextbook;
}

class addTextbook : public QDialog
{
    Q_OBJECT

public:
    explicit addTextbook(QWidget *parent = nullptr);
    ~addTextbook();
    void centerAndResize();
    void createLineEdit1();
    void createLineEdit2();
    void createLineEdit3();
    void createLineEdit4();
    void createLineEdit5();
    void createLineEdit6();
    void createLineEdit7();
    void createLineEdit8();
    void createLineEdit9();
    void createLineEdit10();
    void createLineEdit11();
    void createLineEdit12();
    void createLineEdit13();
    void createLineEdit14();
    void createLineEdit15();
    void createLineEdit16();
    void createLineEdit17();
    void createLineEdit18();
    void createLineEdit19();
    void createLineEdit20();
    void createLineEdit21();
    void createLineEdit22();
    void createLineEdit23();
    void createLineEdit24();
    void createLineEdit25();
    void createButton();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addTextbook *ui;
};

#endif // ADDTEXTBOOK_H
