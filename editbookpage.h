#ifndef EDITBOOKPAGE_H
#define EDITBOOKPAGE_H

#include <QDialog>
#include "database.h"
#include "edittextbook.h"
#include "editjournal.h"
#include "editrefbook.h"

namespace Ui {
class editBookPage;
}

class editBookPage : public QDialog
{
    Q_OBJECT

public:
    explicit editBookPage(QWidget *parent = nullptr);
    ~editBookPage();
    void centerAndResize();
    void createLineEdit1();
    void createButton();

private slots:
    void on_pushButton_clicked();

private:
    Ui::editBookPage *ui;
};

#endif // EDITBOOKPAGE_H
