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

    void populateDataSet();
   //void resizeEvent(QResizeEvent *event);
private slots:
    void onTableClicked(const QModelIndex &);
    void downloadFinished(QNetworkReply *reply);
private:
    Ui::DisplayBooks *ui;
};

#endif // DISPLAYBOOKS_H
