#include "addrefbook.h"
#include "ui_addrefbook.h"
#include <booksfactory.h>

using namespace HighlanderBooks;
addRefBook::addRefBook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addRefBook)
{
    ui->setupUi(this);
    centerAndResize();
    createLineEdit1();
    createLineEdit10();
    createLineEdit11();
    createLineEdit2();
    createLineEdit3();
    createLineEdit4();
    createLineEdit5();
    createLineEdit6();
    createLineEdit7();
    createLineEdit8();
    createLineEdit9();
    createButton();
}

addRefBook::~addRefBook()
{
    delete ui;
}

void addRefBook::centerAndResize()
{
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int height = screenGeometry.height() * 9;
    int width = screenGeometry.width() * 9;
    //    //Grab screen size for this computer
    QSize newSize(width, height);
    setGeometry(0, 0, height, width);
    //    //Set Screensize
}

void addRefBook::createLineEdit1()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit->setFont(lastNameFont);
    ui->lineEdit->setStyleSheet("color:#fff;");
    ui->lineEdit->setPlaceholderText("What is the book type?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit->height ()) / 2;
    ui->lineEdit->setGeometry(x - 500, y - 300, 200, 35);
}

void addRefBook::createButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->pushButton->setFont(userFont);
    ui->pushButton->setText("Add");
    ui->pushButton->setStyleSheet("background-color:");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->pushButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->pushButton->height ()) / 2;
    ui->pushButton->setGeometry(x, y + 200, 200, 25);
}
void addRefBook::createLineEdit2()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_2->setFont(lastNameFont);
   ui->lineEdit_2->setStyleSheet("color:#fff;");
    ui->lineEdit_2->setPlaceholderText("What is the book title?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_2->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_2->height ()) / 2;
    ui->lineEdit_2->setGeometry(x - 250, y - 300, 200, 35);
}
void addRefBook::createLineEdit3()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_3->setFont(lastNameFont);
    ui->lineEdit_3->setStyleSheet("color:#fff;");
    ui->lineEdit_3->setPlaceholderText("What is the book rating?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_3->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_3->height ()) / 2;
    ui->lineEdit_3->setGeometry(x, y - 300, 200, 35);
}
void addRefBook::createLineEdit4()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_4->setFont(lastNameFont);
    ui->lineEdit_4->setStyleSheet("color:#fff;");
    ui->lineEdit_4->setPlaceholderText("What is the language?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_4->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_4->height ()) / 2;
    ui->lineEdit_4->setGeometry(x + 250, y - 300, 200, 35);
}
void addRefBook::createLineEdit5()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_5->setFont(lastNameFont);
    ui->lineEdit_5->setStyleSheet("color:#fff;");
    ui->lineEdit_5->setPlaceholderText("What is the isbn?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_5->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_5->height ()) / 2;
    ui->lineEdit_5->setGeometry(x + 500, y - 300, 200, 35);
}
void addRefBook::createLineEdit6()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_6->setFont(lastNameFont);
    ui->lineEdit_6->setStyleSheet("color:#fff;");
    ui->lineEdit_6->setPlaceholderText("What is the number of ratings?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_6->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_6->height ()) / 2;
    ui->lineEdit_6->setGeometry(x - 500, y - 200, 200, 35);
}
void addRefBook::createLineEdit7()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_7->setFont(lastNameFont);
    ui->lineEdit_7->setStyleSheet("color:#fff;");
    ui->lineEdit_7->setPlaceholderText("What is the book format?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_7->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_7->height ()) / 2;
    ui->lineEdit_7->setGeometry(x - 250, y - 200, 200, 35);
}
void addRefBook::createLineEdit8()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_8->setFont(lastNameFont);
    ui->lineEdit_8->setStyleSheet("color:#fff;");
    ui->lineEdit_8->setPlaceholderText("How many pages?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_8->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_8->height ()) / 2;
    ui->lineEdit_8->setGeometry(x, y - 200, 200, 35);
}
void addRefBook::createLineEdit9()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_9->setFont(lastNameFont);
    ui->lineEdit_9->setStyleSheet("color:#fff;");
    ui->lineEdit_9->setPlaceholderText("Who is the publisher?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_9->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_9->height ()) / 2;
    ui->lineEdit_9->setGeometry(x + 250, y - 200, 200, 35);
}
void addRefBook::createLineEdit10()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_10->setFont(lastNameFont);
    ui->lineEdit_10->setStyleSheet("color:#fff;");
    ui->lineEdit_10->setPlaceholderText("What is the books cover image?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_10->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_10->height ()) / 2;
    ui->lineEdit_10->setGeometry(x + 500, y - 200, 200, 35);
}
void addRefBook::createLineEdit11()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_11->setFont(lastNameFont);
    ui->lineEdit_11->setStyleSheet("color:#fff;");
    ui->lineEdit_11->setPlaceholderText("Who are the book's price?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_11->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_11->height ()) / 2;
    ui->lineEdit_11->setGeometry(x, y - 100, 200, 35);
}

void addRefBook::on_pushButton_clicked()
{
    string bookType = ui->lineEdit->text().toStdString();
    string title = ui->lineEdit_2->text().toStdString();
    string rating = ui->lineEdit_3->text().toStdString();
    string language = ui->lineEdit_4->text().toStdString();
    string isbn = ui->lineEdit_5->text().toStdString();
    string numRatings = ui->lineEdit_6->text().toStdString();
    string  bookFormat = ui->lineEdit_7->text().toStdString();
    string pages = ui->lineEdit_8->text().toStdString();
    string publisher = ui->lineEdit_9->text().toStdString();
    string cvrImg = ui->lineEdit_10->text().toStdString();
    string price = ui->lineEdit_11->text().toStdString();

    map<string, string> bookQuery;
    bookQuery.insert(pair<string, string>("book_type","1" ));
    bookQuery.insert(pair<string, string>("title", title));
    bookQuery.insert(pair<string, string>("rating", rating));
    bookQuery.insert(pair<string, string>("language",language ));
    bookQuery.insert(pair<string, string>("isbn", isbn));
    bookQuery.insert(pair<string, string>("numRatings", numRatings));
    bookQuery.insert(pair<string, string>("bookFormat", bookFormat));
    bookQuery.insert(pair<string, string>("pages", pages));
    bookQuery.insert(pair<string, string>("publisher", publisher));
    bookQuery.insert(pair<string, string>("coverImg",cvrImg ));
    bookQuery.insert(pair<string, string>("price",price ));
    BooksFactory b;
   int count = b.CreateBook(bookQuery);

        if (count == 1)
        {
            QMessageBox success;
            QFont userFont("Courier", 15, QFont::Bold);
            success.setIcon(QMessageBox::Information);
            success.setFont(userFont);
            success.setText("Book has been added!");
            success.setIcon(QMessageBox::Warning);
            success.setWindowTitle("Book Found");
            success.exec();
        }
        else
        {
            QMessageBox success;
            QFont userFont("Courier", 15, QFont::Bold);
            success.setIcon(QMessageBox::Information);
            success.setFont(userFont);
            success.setText("Book has been added!");
            success.setIcon(QMessageBox::Warning);
            success.setWindowTitle("Book Not Found");
            success.exec();
        }

}

