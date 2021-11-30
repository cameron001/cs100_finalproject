#include "studentaccountpage.h"
#include "ui_studentaccountpage.h"
#include "studentaccountinfopage.h"

studentAccountPage::studentAccountPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentAccountPage)
    //ui(new Ui::studentAccountPage)
{
    dailog = parent;
    ui->setupUi(this);
    centerAndResize();
    setStyleSheet("background-color: white");
    createWelcomeLabel();
    createAccountInfoButton();
    createLibraryBooksButton();
    createLogoutButton();

    //createAccountInfoToolButton();
}

studentAccountPage::~studentAccountPage()
{
    delete ui;
}

void studentAccountPage::centerAndResize()
{

   QSize rec = QApplication::primaryScreen()->size();
    int height = rec.height();
    int width = rec.width();
    this->setGeometry(0,0,width,height);


}

void studentAccountPage::createWelcomeLabel()
{
    //Create a font to use
    QFont welcomeFont("Courier", 30, QFont::Bold);
    ui->loginLabel->setFont(welcomeFont);
    ui->loginLabel->setAlignment(Qt::AlignCenter);
    ui->loginLabel->setStyleSheet("color: black");
    ui->loginLabel->setText("Welcome!");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->loginLabel->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->loginLabel->height ()) / 2;
    ui->loginLabel->setGeometry(x + 25, y - 300, 250, 50);
}

void studentAccountPage::createAccountInfoButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->accountInfoButton->setFont(userFont);
    ui->accountInfoButton->setText("Account Info");
    ui->accountInfoButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->accountInfoButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->accountInfoButton->height ()) / 2;
    ui->accountInfoButton->setGeometry(x + 10, y - 50, 250, 25);
}

void studentAccountPage::createLibraryBooksButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->libraryBooksButton->setFont(userFont);
    ui->libraryBooksButton->setText("Library Books and Checkout");
    ui->libraryBooksButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->libraryBooksButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->libraryBooksButton->height ()) / 2;
    ui->libraryBooksButton->setGeometry(x + 10, y, 250, 25);
}



void studentAccountPage::createLogoutButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->logout->setFont(userFont);
    ui->logout->setText("Logout");
    ui->logout->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->logout->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->logout->height ()) / 2;
    ui->logout->setGeometry(x+ 10, y + 50, 250, 25);
}



void studentAccountPage::on_accountInfoButton_clicked()
{
    //open new page
    studentAccountInfoPage page;
    page.setModal(true);
    page.show();
    page.exec();

}


void studentAccountPage::on_libraryBooksButton_clicked()
{
    DisplayBooks newDisplayBook;
    newDisplayBook.setModal(true);
    newDisplayBook.show();
    newDisplayBook.exec();
}


void studentAccountPage::on_logout_clicked()
{
    HighlanderBooks::user::userId=0;
    HighlanderBooks::user::firstName="";
    HighlanderBooks::user::userType="";
    HighlanderBooks::user::isLibrarian=0;
    HighlanderBooks::user::studentID="";
    this->close();
    dailog->close();

}

