#ifndef ADDJOURNAL_H
#define ADDJOURNAL_H

#include <QDialog>
#include "database.h"

namespace Ui {
class addJournal;
}

class addJournal : public QDialog
{
    Q_OBJECT

public:
    explicit addJournal(QWidget *parent = nullptr);
    ~addJournal();
    void centerAndResize();
    void createLineEdit1();
    void createLineEdit2();
    void createLineEdit3();
    void createLineEdit4();
    void createLineEdit5();
    void createLineEdit6();
    void createButton();

private slots:
    void on_pushButton_clicked();

private:
    Ui::addJournal *ui;
};

#endif // ADDJOURNAL_H
