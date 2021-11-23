#include "librarianaccountpage.h"
#include "ui_librarianaccountpage.h"

librarianAccountPage::librarianAccountPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::librarianAccountPage)
{
    ui->setupUi(this);
    setStyleSheet("background-color: white");
    centerAndResize();
    createWelcomeLabel();
    createAddBookButton();
    createDeleteBookButton();
     createSearchByAuthorButton();
     createSearchByBookTitleButton();
     createDisplayBooksButton();
     createEditBookButton();
}

librarianAccountPage::~librarianAccountPage()
{
    delete ui;
}

void librarianAccountPage::centerAndResize()
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

void librarianAccountPage::createWelcomeLabel()
{
    QFont welcomeFont("Courier", 30, QFont::Bold);
    ui->label->setFont(welcomeFont);
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label->setStyleSheet("color: black");
    ui->label->setText("Welcome!");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->label->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->label->height ()) / 2;
    ui->label->setGeometry(x + 25, y - 300, 150, 50);
}

void librarianAccountPage::createAddBookButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->addBookButton->setFont(userFont);
    ui->addBookButton->setText("Add Book");
    ui->addBookButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->addBookButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->addBookButton->height ()) / 2;
    ui->addBookButton->setGeometry(x + 10, y - 50, 200, 25);
}

void librarianAccountPage::createEditBookButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->editBookButton->setFont(userFont);
    ui->editBookButton->setText("Edit Book");
    ui->editBookButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->editBookButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->editBookButton->height ()) / 2;
    ui->editBookButton->setGeometry(x + 10, y + 50, 200, 25);
}

void librarianAccountPage::createDeleteBookButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->deleteBookButton->setFont(userFont);
    ui->deleteBookButton->setText("Delete Book");
    ui->deleteBookButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->deleteBookButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->deleteBookButton->height ()) / 2;
    ui->deleteBookButton->setGeometry(x + 10, y, 200, 25);
}

void librarianAccountPage::createSearchByAuthorButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->searchByAuthorButton->setFont(userFont);
    ui->searchByAuthorButton->setText("Search By Author");
    ui->searchByAuthorButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->searchByAuthorButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->searchByAuthorButton->height ()) / 2;
    ui->searchByAuthorButton->setGeometry(x + 10, y + 100, 200, 25);
}

void librarianAccountPage::createSearchByBookTitleButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->searchByBookTitleButton->setFont(userFont);
    ui->searchByBookTitleButton->setText("Search By Title");
    ui->searchByBookTitleButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->searchByBookTitleButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->searchByBookTitleButton->height ()) / 2;
    ui->searchByBookTitleButton->setGeometry(x + 10, y + 150, 200, 25);
}

void librarianAccountPage::createDisplayBooksButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->displayBooksButton->setFont(userFont);
    ui->displayBooksButton->setText("Display Books");
    ui->displayBooksButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->displayBooksButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->displayBooksButton->height ()) / 2;
    ui->displayBooksButton->setGeometry(x + 10, y + 200, 200, 25);
}

void librarianAccountPage::on_deleteBookButton_clicked()
{
    deleteBookPage newPage;
    newPage.setModal(true);
    newPage.show();
    newPage.exec();
}


void librarianAccountPage::on_searchByAuthorButton_clicked()
{
    searchByAuthorPage newPage;
    newPage.setModal(true);
    newPage.show();
    newPage.exec();
}


void librarianAccountPage::on_searchByBookTitleButton_clicked()
{
    searchByTitlePage newPage;
    newPage.setModal(true);
    newPage.show();
    newPage.exec();
}

