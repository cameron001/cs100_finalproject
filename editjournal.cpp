#include "editjournal.h"
#include "ui_editjournal.h"

editJournal::editJournal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editJournal)
{
    ui->setupUi(this);
    centerAndResize();
    createButton();
    createLineEdit1();
    createLineEdit2();
    createLineEdit3();
    createLineEdit4();
    createLineEdit5();
    createLineEdit6();
    createLineEdit7();
}

editJournal::~editJournal()
{
    delete ui;
}

void editJournal::centerAndResize()
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

void editJournal::createLineEdit1()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit->setFont(lastNameFont);
    ui->lineEdit->setStyleSheet("color: black");
    ui->lineEdit->setPlaceholderText("What is the book type?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit->height ()) / 2;
    ui->lineEdit->setGeometry(x - 500, y - 300, 200, 35);
}

void editJournal::createLineEdit2()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_2->setFont(lastNameFont);
    ui->lineEdit_2->setStyleSheet("color: black");
    ui->lineEdit_2->setPlaceholderText("What is the publisher?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_2->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_2->height ()) / 2;
    ui->lineEdit_2->setGeometry(x - 250, y - 300, 200, 35);
}

void editJournal::createLineEdit3()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_3->setFont(lastNameFont);
    ui->lineEdit_3->setStyleSheet("color: black");
    ui->lineEdit_3->setPlaceholderText("What is the first published date?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_3->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_3->height ()) / 2;
    ui->lineEdit_3->setGeometry(x, y - 300, 200, 35);
}

void editJournal::createLineEdit4()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_4->setFont(lastNameFont);
    ui->lineEdit_4->setStyleSheet("color: black");
    ui->lineEdit_4->setPlaceholderText("What is the number of pages?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_4->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_4->height ()) / 2;
    ui->lineEdit_4->setGeometry(x + 250, y - 300, 200, 35);
}

void editJournal::createLineEdit5()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_5->setFont(lastNameFont);
    ui->lineEdit_5->setStyleSheet("color: black");
    ui->lineEdit_5->setPlaceholderText("What is the isbn?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_5->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_5->height ()) / 2;
    ui->lineEdit_5->setGeometry(x + 500, y - 300, 200, 35);
}

void editJournal::createLineEdit6()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_6->setFont(lastNameFont);
    ui->lineEdit_6->setStyleSheet("color: black");
    ui->lineEdit_6->setPlaceholderText("What is the price?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_6->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_6->height ()) / 2;
    ui->lineEdit_6->setGeometry(x, y - 200, 200, 35);
}

void editJournal::createLineEdit7()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_7->setFont(lastNameFont);
    ui->lineEdit_7->setStyleSheet("color: black");
    ui->lineEdit_7->setPlaceholderText("What is the book ID?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_7->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_7->height ()) / 2;
    ui->lineEdit_7->setGeometry(x, y - 100, 200, 35);
}

void editJournal::createButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->pushButton->setFont(userFont);
    ui->pushButton->setText("Edit");
    ui->pushButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->pushButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->pushButton->height ()) / 2;
    ui->pushButton->setGeometry(x, y, 200, 35);
}


void editJournal::on_pushButton_clicked()
{
    int bookType = ui->lineEdit->text().toInt();
    QString publisher = ui->lineEdit_2->text();
    QString firstPublishedDate = ui->lineEdit_3->text();
    int numPages = ui->lineEdit_4->text().toInt();
    QString isbn = ui->lineEdit_5->text();
    QString price = ui->lineEdit_6->text();
    int id = ui->lineEdit_7->text().toInt();
    QSqlQuery query;
    query.prepare("UPDATE books SET book_type = ?, publisher = ?, firstPublishDate = ?, pages = ?, isbn = ?, price = ? WHERE id = ?");
    query.addBindValue(bookType);
    query.addBindValue(publisher);
    query.addBindValue(firstPublishedDate);
    query.addBindValue(numPages);
    query.addBindValue(isbn);
    query.addBindValue(price);
    query.addBindValue(id);
    if (!query.exec())
    {
        qDebug() << query.lastError();
    }
    else
    {
        int count = 0;
        while (query.next())
        {
            count++;
        }
        if (count == 1)
        {
            QMessageBox success;
            QFont userFont("Courier", 15, QFont::Bold);
            success.setIcon(QMessageBox::Information);
            success.setFont(userFont);
            success.setText("Journal has been edited!");
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
            success.setText("Journal has been edited!");
            success.setIcon(QMessageBox::Warning);
            success.setWindowTitle("Book Not Found");
            success.exec();
        }
    }
   }
