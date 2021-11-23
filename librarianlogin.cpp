#include "librarianlogin.h"
#include "ui_librarianlogin.h"

librarianLogin::librarianLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::librarianLogin)
{
    ui->setupUi(this);
    //resize the page to line up everything
    centerAndResize();
    //change background color to white
    setStyleSheet("background-color: white");
    createLoginLabel();
    createpasswordEdit();
    createusernameEdit();
    createLoginButton();
}

librarianLogin::~librarianLogin()
{
    delete ui;
}


void librarianLogin::centerAndResize()
{
    // Grab screen size for this computer
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int height = screenGeometry.height() * 9;
    int width = screenGeometry.width() * 9;
    //Set Screensize
    QSize newSize(width, height);
    setGeometry(0, 0, height, width);
}

void librarianLogin::createLoginLabel()
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
        ui->loginLabel->setGeometry(x + 25, y - 100, 150, 50);
 }

void librarianLogin::createusernameEdit()
{
    //create font
    QFont lastNameFont("Courier", 25, QFont::Bold);
    ui->usernameEdit->setFont(lastNameFont);
    ui->usernameEdit->setStyleSheet("color: black");
    ui->usernameEdit->setPlaceholderText("What is your username?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->usernameEdit->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->usernameEdit->height ()) / 2;
    ui->usernameEdit->setGeometry(x - 65, y + 15, 375, 35);
}

void librarianLogin::createpasswordEdit()
{
    //create font
    QFont lastNameFont("Courier", 25, QFont::Bold);
    ui->passwordEdit->setFont(lastNameFont);
    ui->passwordEdit->setStyleSheet("color: black");
    ui->passwordEdit->setPlaceholderText("What is your password?");
    ui->passwordEdit->setEchoMode(QLineEdit::Password);
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->passwordEdit->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->passwordEdit->height ()) / 2;
    ui->passwordEdit->setGeometry(x - 65, y + 100, 375, 35);
}

void librarianLogin::createLoginButton()
{
    //create font
    QFont dynamicFont("Courier", 15, QFont::Bold);
    ui->loginButton->setFont(dynamicFont);
    ui->loginButton->setText("Login");
    ui->loginButton->setStyleSheet("background-color: black");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->loginButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->loginButton->height ()) / 2;
    ui->loginButton->setGeometry(x + 60, y + 180, 100, 25);
}

void librarianLogin::on_loginButton_clicked()
{
    Database *db = Database::getInstance();
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();
    db->librarianLogin(username, password);
}

