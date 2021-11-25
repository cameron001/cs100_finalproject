#ifndef ADDREFBOOK_H
#define ADDREFBOOK_H

#include <QDialog>
#include "database.h"

namespace Ui {
class addRefBook;
}

class addRefBook : public QDialog
{
    Q_OBJECT

public:
    explicit addRefBook(QWidget *parent = nullptr);
    ~addRefBook();
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
    void createButton();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addRefBook *ui;
};

#endif // ADDREFBOOK_H
