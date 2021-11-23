#ifndef DELETEBOOKPAGE_H
#define DELETEBOOKPAGE_H

#include <QDialog>
#include <QScreen>
#include "database.h"

namespace Ui {
class deleteBookPage;
}

class deleteBookPage : public QDialog
{
    Q_OBJECT

public:
    explicit deleteBookPage(QWidget *parent = nullptr);
    ~deleteBookPage();

    void centerAndResize();
    void createBookTitleEdit();
    void createAuthorEdit();
    void createButton();

private slots:
    void on_loginButton_clicked();

private:
    Ui::deleteBookPage *ui;
};

#endif // DELETEBOOKPAGE_H
