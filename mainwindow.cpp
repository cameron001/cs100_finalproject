#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
 QSqlQuery query;


    query.exec("SELECT * FROM books");
    while(query.next())
    {
        std::cout<< query.value("title").toString().toStdString()<<std::endl;
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

