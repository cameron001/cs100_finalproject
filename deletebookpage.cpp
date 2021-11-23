#include "deletebookpage.h"
#include "ui_deletebookpage.h"

deleteBookPage::deleteBookPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteBookPage)
{
    ui->setupUi(this);
    centerAndResize();
    createBookTitleEdit();
    createAuthorEdit();
    createButton();
}

deleteBookPage::~deleteBookPage()
{
    delete ui;
}

void deleteBookPage::centerAndResize()
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

void deleteBookPage::createBookTitleEdit()
{
    QFont lastNameFont("Courier", 25, QFont::Bold);
    ui->titleEdit->setFont(lastNameFont);
    ui->titleEdit->setStyleSheet("color: black");
    ui->titleEdit->setPlaceholderText("What is the Book Title?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->titleEdit->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->titleEdit->height ()) / 2;
    ui->titleEdit->setGeometry(x - 300, y, 375, 35);
}

void deleteBookPage::createAuthorEdit()
{
    QFont lastNameFont("Courier", 25, QFont::Bold);
    ui->authorEdit->setFont(lastNameFont);
    ui->authorEdit->setStyleSheet("color: black");
    ui->authorEdit->setPlaceholderText("What is your password?");
    ui->authorEdit->setEchoMode(QLineEdit::Password);
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->authorEdit->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->authorEdit->height ()) / 2;
    ui->authorEdit->setGeometry(x + 200, y, 375, 35);
}

void deleteBookPage::createButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->loginButton->setFont(userFont);
    ui->loginButton->setText("Delete This Record");
    ui->loginButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->loginButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->loginButton->height ()) / 2;
    ui->loginButton->setGeometry(x - 100, y + 100, 400, 25);
}

void deleteBookPage::on_loginButton_clicked()
{
    QString name = ui->titleEdit->text();
    QString author = ui->authorEdit->text();
    QSqlQuery query;
    query.prepare("SELECT * FROM books WHERE title = ? AND author = ? ");
    query.addBindValue(name);
    query.addBindValue(author);
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
            success.setText("Book was found... Now Deleting!");
            success.setIcon(QMessageBox::Warning);
            success.setWindowTitle("Book Found");
            success.exec();
            query.prepare("DELETE FROM books WHERE  title = ? AND author = ? ");
            query.addBindValue(name);
            query.addBindValue(author);
            if (!query.exec())
            {
                qDebug() << query.lastError();
            }
            else
            {
                QMessageBox success;
                QFont userFont("Courier", 15, QFont::Bold);
                success.setIcon(QMessageBox::Information);
                success.setFont(userFont);
                success.setText("Book was deleted!");
                success.setIcon(QMessageBox::Warning);
                success.setWindowTitle("Book Not Found");
                success.exec();
            }
        }
        else
        {
            QMessageBox success;
            QFont userFont("Courier", 15, QFont::Bold);
            success.setIcon(QMessageBox::Information);
            success.setFont(userFont);
            success.setText("Book was not found!");
            success.setIcon(QMessageBox::Warning);
            success.setWindowTitle("Book Not Found");
            success.exec();
        }
    }
}

