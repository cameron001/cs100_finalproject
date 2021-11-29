#ifndef DISPLAYBOOKS_H
#define DISPLAYBOOKS_H

#include <QDialog>
#include <QScreen>
#include "booksfactory.h"
#include <iostream>
#include <QFormLayout>
#include <QPixmap>
#include "QUrl"
#include <QtWidgets/QMainWindow>
#include <QByteArray>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QStandardItemModel>
#include <QMainWindow>
using namespace HighlanderBooks;

namespace Ui {
class DisplayBooks;
}

class DisplayBooks : public QDialog
{
    Q_OBJECT

public:
    explicit DisplayBooks(QWidget *parent = nullptr);

    ~DisplayBooks();

    void centerAndResize();
    void tblViewHeader();
    void getTextbooks();
    void getRefbooks();
    void getJournalbooks();
    void populateDataSet();
    void clearBookDetails();


private slots:
    void onTableClicked(const QModelIndex &);
    void downloadFinished(QNetworkReply *reply);
    void showAll();
    void showText();
    void showRef();
    void showJournals();
    void on_search_btn_clicked();

    void on_checkout_clicked();

private:
    Ui::DisplayBooks *ui;
    QStandardItemModel * model;
    QVariant current;
};

#endif // DISPLAYBOOKS_H
