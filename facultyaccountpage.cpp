#include "facultyaccountpage.h"
#include "ui_facultyaccountpage.h"

facultyAccountPage::facultyAccountPage(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::facultyAccountPage)
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
    createSearchByISBNButton();
    createLogoutbtn();

    dailog = parent;
}

facultyAccountPage::~facultyAccountPage()
{
    delete ui;
}

void facultyAccountPage::centerAndResize()
{

    QSize rec = QApplication::primaryScreen()->size();
    int height = rec.height();
    int width = rec.width();
    this->setGeometry(0, 0, width, height);


}
void facultyAccountPage::createWelcomeLabel()
{
    QFont welcomeFont("Courier", 30, QFont::Bold);
    ui->label->setFont(welcomeFont);
    ui->label->setAlignment(Qt::AlignCenter);
    ui->label->setStyleSheet("color: black");
    ui->label->setText("Welcome, " + HighlanderBooks::user::firstName);
    ui->label->setAlignment(Qt::AlignmentFlag::AlignLeft);
    //get screen size
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->label->width()) / 2;
    int y = (.9 * screenGeometry.height() - ui->label->height()) / 2;
    ui->label->setGeometry(x + 10, y - 300, 300, 50);
}

void facultyAccountPage::createAddBookButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->addBookButton->setFont(userFont);
    ui->addBookButton->setText("Add Book");
    ui->addBookButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->addBookButton->width()) / 2;
    int y = (.9 * screenGeometry.height() - ui->addBookButton->height()) / 2;
    ui->addBookButton->setGeometry(x + 10, y - 50, 250, 25);
}

void facultyAccountPage::createEditBookButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->editBookButton->setFont(userFont);
    ui->editBookButton->setText("Edit Book");
    ui->editBookButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->editBookButton->width()) / 2;
    int y = (.9 * screenGeometry.height() - ui->editBookButton->height()) / 2;
    ui->editBookButton->setGeometry(x + 10, y + 50, 250, 25);
}

void facultyAccountPage::createDeleteBookButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->deleteBookButton->setFont(userFont);
    ui->deleteBookButton->setText("Delete Book");
    ui->deleteBookButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->deleteBookButton->width()) / 2;
    int y = (.9 * screenGeometry.height() - ui->deleteBookButton->height()) / 2;
    ui->deleteBookButton->setGeometry(x + 10, y, 250, 25);
}

void facultyAccountPage::createSearchByAuthorButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->searchByAuthorButton->setFont(userFont);
    ui->searchByAuthorButton->setText("Search By Author");
    ui->searchByAuthorButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->searchByAuthorButton->width()) / 2;
    int y = (.9 * screenGeometry.height() - ui->searchByAuthorButton->height()) / 2;
    ui->searchByAuthorButton->setGeometry(x + 10, y + 100, 250, 25);
}

void facultyAccountPage::createSearchByISBNButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->searchByISBNButton->setFont(userFont);
    ui->searchByISBNButton->setText("Search By ISBN");
    ui->searchByISBNButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->searchByISBNButton->width()) / 2;
    int y = (.9 * screenGeometry.height() - ui->searchByISBNButton->height()) / 2;
    ui->searchByISBNButton->setGeometry(x + 10, y + 100, 250, 25);
}

void facultyAccountPage::createSearchByBookTitleButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->searchByBookTitleButton->setFont(userFont);
    ui->searchByBookTitleButton->setText("Search By Title");
    ui->searchByBookTitleButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->searchByBookTitleButton->width()) / 2;
    int y = (.9 * screenGeometry.height() - ui->searchByBookTitleButton->height()) / 2;
    ui->searchByBookTitleButton->setGeometry(x + 10, y + 150, 250, 25);
}

void facultyAccountPage::createDisplayBooksButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->displayBooksButton->setFont(userFont);
    ui->displayBooksButton->setText("Books, Checkout and Fines");
    ui->displayBooksButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->displayBooksButton->width()) / 2;
    int y = (.9 * screenGeometry.height() - ui->displayBooksButton->height()) / 2;
    ui->displayBooksButton->setGeometry(x + 10, y + 200, 250, 25);
}

void facultyAccountPage::on_deleteBookButton_clicked()
{
    deleteBookPage newPage;
    newPage.setModal(true);
    newPage.show();
    newPage.exec();
}


void facultyAccountPage::on_searchByAuthorButton_clicked()
{
    searchByAuthorPage newPage;
    newPage.setModal(true);
    newPage.show();
    newPage.exec();
}

void facultyAccountPage::on_searchByISBNButton_clicked()
{
    searchByISBNPage newPage;
    newPage.setModal(true);
    newPage.show();
    newPage.exec();
}


void facultyAccountPage::on_searchByBookTitleButton_clicked()
{
    searchByTitlePage newPage;
    newPage.setModal(true);
    newPage.show();
    newPage.exec();
}


void facultyAccountPage::on_addBookButton_clicked()
{
    addBookPage newPage;
    newPage.setModal(true);
    newPage.show();
    newPage.exec();
}


void facultyAccountPage::on_editBookButton_clicked()
{
    editBookPage newPage;
    newPage.setModal(true);
    newPage.show();
    newPage.exec();
}



void facultyAccountPage::createLogoutbtn() {
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->logout->setFont(userFont);
    ui->logout->setText("Logout");
    ui->logout->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen* screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->logout->width()) / 2;
    int y = (.9 * screenGeometry.height() - ui->logout->height()) / 2;
    ui->logout->setGeometry(x + 10, y + 250, 250, 25);
}



void facultyAccountPage::on_logout_clicked()
{
    HighlanderBooks::user::userId = 0;
    HighlanderBooks::user::firstName = "";
    HighlanderBooks::user::userType = "";
    HighlanderBooks::user::isfaculty = 0;
    HighlanderBooks::user::studentID = "";
    this->close();
    dailog->close();
}



void facultyAccountPage::on_displayBooksButton_clicked()
{
    DisplayBooks newPage;
    newPage.setModal(true);
    newPage.show();
    newPage.exec();
}
