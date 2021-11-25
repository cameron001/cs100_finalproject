#ifndef ADDBOOKPAGE_H
#define ADDBOOKPAGE_H

#include <QDialog>

#include "database.h"
#include "addtextbook.h"
#include "addrefbook.h"
#include "addjournal.h"

namespace Ui {
class addBookPage;
}

class addBookPage : public QDialog
{
    Q_OBJECT

public:
    explicit addBookPage(QWidget *parent = nullptr);
    ~addBookPage();
    void centerAndResize();
    void createLineEdit1();
    void createButton();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addBookPage *ui;
};

#endif // ADDBOOKPAGE_H
