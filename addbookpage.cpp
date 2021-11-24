#include "addbookpage.h"
#include "ui_addbookpage.h"

addBookPage::addBookPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addBookPage)
{
    ui->setupUi(this);
    centerAndResize();
    createLineEdit1();
    createButton();
}

addBookPage::~addBookPage()
{
    delete ui;
}

void addBookPage::centerAndResize()
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

void addBookPage::createLineEdit1()
{
    QFont lastNameFont("Courier", 25, QFont::Bold);
    ui->lineEdit->setFont(lastNameFont);
    ui->lineEdit->setStyleSheet("color: black");
    ui->lineEdit->setPlaceholderText("What is the type of book?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit->height ()) / 2;
    ui->lineEdit->setGeometry(x - 150, y, 500, 35);
}

void addBookPage::createButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->pushButton->setFont(userFont);
    ui->pushButton->setText("Search");
    ui->pushButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->pushButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->pushButton->height ()) / 2;
    ui->pushButton->setGeometry(x, y + 100, 200, 25);
}


void addBookPage::on_pushButton_clicked()
{
    if (ui->lineEdit->text() == "Textbook" || ui->lineEdit->text() == "textbook")
    {
        //create new book?
        addTextbook newPage;
        newPage.setModal(true);
        newPage.show();
        newPage.exec();
    }
}

