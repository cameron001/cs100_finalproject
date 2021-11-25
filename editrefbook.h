#ifndef EDITREFBOOK_H
#define EDITREFBOOK_H

#include <QDialog>
#include "database.h"

namespace Ui {
class editRefBook;
}

class editRefBook : public QDialog
{
    Q_OBJECT

public:
    explicit editRefBook(QWidget *parent = nullptr);
    ~editRefBook();
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
    void createButton();

private slots:
    void on_pushButton_clicked();

private:
    Ui::editRefBook *ui;
};

#endif // EDITREFBOOK_H
