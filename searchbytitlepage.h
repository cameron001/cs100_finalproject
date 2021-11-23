#ifndef SEARCHBYTITLEPAGE_H
#define SEARCHBYTITLEPAGE_H

#include <QDialog>
#include "database.h"

namespace Ui {
class searchByTitlePage;
}

class searchByTitlePage : public QDialog
{
    Q_OBJECT

public:
    explicit searchByTitlePage(QWidget *parent = nullptr);
    ~searchByTitlePage();
    void centerAndResize();
    void createEdit();
    void createButton();


private slots:
    void on_pushButton_clicked();

private:
    Ui::searchByTitlePage *ui;
};

#endif // SEARCHBYTITLEPAGE_H
