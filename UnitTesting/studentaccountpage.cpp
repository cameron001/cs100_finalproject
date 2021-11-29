#include "studentaccountpage.h"
#include "ui_studentaccountpage.h"
#include "studentaccountinfopage.h"

studentAccountPage::studentAccountPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentAccountPage)
    //ui(new Ui::studentAccountPage)
{
    ui->setupUi(this);
    centerAndResize();
    setStyleSheet("background-color: white");
    createWelcomeLabel();
    createAccountDebtButton();
    createAccountInfoButton();
    createLibraryBooksButton();
    createTransactionButton();
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
    ui->loginLabel->setGeometry(x + 25, y - 300, 150, 50);
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
    ui->accountInfoButton->setGeometry(x + 10, y - 50, 200, 25);
}

void studentAccountPage::createLibraryBooksButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->libraryBooksButton->setFont(userFont);
    ui->libraryBooksButton->setText("Library Books");
    ui->libraryBooksButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->libraryBooksButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->libraryBooksButton->height ()) / 2;
    ui->libraryBooksButton->setGeometry(x + 10, y, 200, 25);
}

void studentAccountPage::createTransactionButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->transactionButton->setFont(userFont);
    ui->transactionButton->setText("Create Transaction");
    ui->transactionButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->transactionButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->transactionButton->height ()) / 2;
    ui->transactionButton->setGeometry(x+ 10, y + 50, 200, 25);
}

void studentAccountPage::createAccountDebtButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->accountDebtButton->setFont(userFont);
    ui->accountDebtButton->setText("Account Debt");
    ui->accountDebtButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->accountDebtButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->accountDebtButton->height ()) / 2;
    ui->accountDebtButton->setGeometry(x+ 10, y + 100, 200, 25);
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

