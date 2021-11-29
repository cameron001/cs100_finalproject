#ifndef EDITJOURNAL_H
#define EDITJOURNAL_H

#include <QDialog>
#include "database.h"

namespace Ui {
class editJournal;
}

class editJournal : public QDialog
{
    Q_OBJECT

public:
    explicit editJournal(QWidget *parent = nullptr);
    ~editJournal();
    void centerAndResize();
    void createLineEdit1();
    void createLineEdit2();
    void createLineEdit3();
    void createLineEdit4();
    void createLineEdit5();
    void createLineEdit6();
    void createLineEdit7();
    void createButton();

private slots:
    void on_pushButton_clicked();

private:
    Ui::editJournal *ui;
};

#endif // EDITJOURNAL_H
