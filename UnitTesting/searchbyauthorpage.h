#ifndef SEARCHBYAUTHORPAGE_H
#define SEARCHBYAUTHORPAGE_H

#include <QDialog>
#include "database.h"

namespace Ui {
class searchByAuthorPage;
}

class searchByAuthorPage : public QDialog
{
    Q_OBJECT

public:
    explicit searchByAuthorPage(QWidget *parent = nullptr);
    ~searchByAuthorPage();
    void centerAndResize();
    void createEdit();
    void createButton();

private slots:
    void on_pushButton_clicked();

private:
    Ui::searchByAuthorPage *ui;
};

#endif // SEARCHBYAUTHORPAGE_H
