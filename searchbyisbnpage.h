#ifndef SEARCHBYISBNPAGE_H
#define SEARCHBYISBNPAGE_H

#include <QDialog>
#include "database.h"

namespace Ui {
class searchByISBNPage;
}

class searchByISBNPage : public QDialog
{
    Q_OBJECT

public:
    explicit searchByISBNPage(QWidget *parent = nullptr);
    ~searchByISBNPage();
    void centerAndResize();
    void createEdit();
    void createButton();

private slots:
    void on_pushButton_clicked();

private:
    Ui::searchByISBNPage *ui;
};



#endif // SEARCHBYISBNPAGE_H
