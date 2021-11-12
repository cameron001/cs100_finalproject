#include "homescreen.h"
#include "ui_homescreen.h"

homeScreen::homeScreen(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::homeScreen)
{
    //create mainwindow
    ui->setupUi(this);
    //resize the page to line up everything
    centerAndResize();
    //change background color to white
    setStyleSheet("background-color: white");
    //call our functions to setup the page
    createWelcomeLabel();
    createExistingUserLoginButton();
    createFirstNameEdit();
    createLastNameEdit();
    createusernameEdit();
    createpasswordEdit();
    createHeadingLabel();
    createDynamicButton();

    QSqlQuery query;


       query.exec("SELECT * FROM books");
       while(query.next())
       {
           std::cout<< query.value("title").toString().toStdString()<<std::endl;
       }
}

homeScreen::~homeScreen()
{
    delete ui;
}

void homeScreen::centerAndResize()
{
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int height = screenGeometry.height() * 9;
    int width = screenGeometry.width() * 9;
//    //Grab screen size for this computer
    QSize newSize(width, height);
    setGeometry(height, width, height, width);
//    //Set Screensize
}

void homeScreen::createWelcomeLabel()
{
    //Create a font to use
    QFont welcomeFont("Courier", 30, QFont::Bold);
    ui->welcomeLabel->setFont(welcomeFont);
    ui->welcomeLabel->setAlignment(Qt::AlignCenter);
    ui->welcomeLabel->setStyleSheet("color: black");
    ui->welcomeLabel->setText("Welcome!");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->welcomeLabel->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->welcomeLabel->height ()) / 2;
    ui->welcomeLabel->setGeometry(x + 25, y + 66, 150, 50);
}

void homeScreen::createExistingUserLoginButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->existingUserLoginButton->setFont(userFont);
    ui->existingUserLoginButton->setText("If you are an existing user login here");
    ui->existingUserLoginButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->existingUserLoginButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->existingUserLoginButton->height ()) / 2;
    ui->existingUserLoginButton->setGeometry(x - 100, y + 300, 400, 25);
}

void homeScreen::createFirstNameEdit()
{
    //create font
    QFont firstNameFont("Courier", 25, QFont::Bold);
    ui->firstNameLineEdit->setFont(firstNameFont);
    ui->firstNameLineEdit->setStyleSheet("color: black");
    ui->firstNameLineEdit->setPlaceholderText("What is your first name?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->firstNameLineEdit->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->firstNameLineEdit->height ()) / 2;
    ui->firstNameLineEdit->setGeometry(x - 575, y + 150, 375, 35);
    //If user starts to enter input start instantiation of dynamic button
    connect(ui->firstNameLineEdit, SIGNAL(textEdited(QString)), this, SLOT(onTextEdited()));
}

void homeScreen::createLastNameEdit()
{
    //create font
    QFont lastNameFont("Courier", 25, QFont::Bold);
    ui->lastNameLineEdit->setFont(lastNameFont);
    ui->lastNameLineEdit->setStyleSheet("color: black");
    ui->lastNameLineEdit->setPlaceholderText("What is your last name?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lastNameLineEdit->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lastNameLineEdit->height ()) / 2;
    ui->lastNameLineEdit->setGeometry(x + 450, y + 150, 375, 35);
    //start instantiation of dynamic button
    connect(ui->lastNameLineEdit, SIGNAL(textEdited(QString)), this, SLOT(onTextEdited()));
}

void homeScreen::createusernameEdit()
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
    ui->usernameEdit->setGeometry(x - 575, y + 250, 375, 35);
    //start instantiation of dynamic button
    connect(ui->usernameEdit, SIGNAL(textEdited(QString)), this, SLOT(onTextEdited()));
}

void homeScreen::createpasswordEdit()
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
    ui->passwordEdit->setGeometry(x + 450, y + 250, 375, 35);
    //start instantiation of dynamic button
    connect(ui->passwordEdit, SIGNAL(textEdited(QString)), this, SLOT(onTextEdited()));
}

void homeScreen::createHeadingLabel()
{
    //create font
    QFont headingFont("Courier", 50, QFont::Bold, QFont::Cursive);
    ui->headingLabel->setFont(headingFont);
    ui->headingLabel->setStyleSheet("color: black");
    ui->headingLabel->setAlignment(Qt::AlignCenter);
    ui->headingLabel->setText("Highlander Book System");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->headingLabel->width () / 2);
    int y = (.9 * screenGeometry.height() - ui->headingLabel->height () / 2);
    //start instantiation of dynamic button
    ui->headingLabel->setGeometry(x - 1000, 100, 850, 75);
}

void homeScreen::createDynamicButton()
{
    //create font
    ui->dynamicButton->hide();
    QFont dynamicFont("Courier", 15, QFont::Bold);
    ui->dynamicButton->setFont(dynamicFont);
    ui->dynamicButton->setText("Continue");
    ui->dynamicButton->setStyleSheet("background-color: black");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->dynamicButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->dynamicButton->height ()) / 2;
    ui->dynamicButton->setGeometry(x + 60, y + 180, 100, 25);
}


void homeScreen::onTextEdited()
{
    //if user starts typing all necessary criteria->allow the button to show on the screen
    if (!ui->firstNameLineEdit->text().isEmpty() && !ui->lastNameLineEdit->text().isEmpty()
            && !ui->usernameEdit->text().isEmpty() && !ui->passwordEdit->text().isEmpty())
    {
        ui->dynamicButton->show();
    }
    //else keep the button hidden
    else
    {
        ui->dynamicButton->hide();
    }
}


void homeScreen::on_existingUserLoginButton_clicked()
{
        existingUserLoginPage newLogin;
        newLogin.setModal(true);
        newLogin.show();
        newLogin.exec();
}


void homeScreen::on_dynamicButton_clicked()
{
    //run query to add user name to database
    //    data.close();
    //    data.removeDatabase("first");

    //    data = QSqlDatabase::addDatabase("QSQLITE", "first");
    //    data.setDatabaseName("/Users/blakedickerson/Documents/SQLite/Food_Log.db");

    //    firstName = ui->firstNameLineEdit->text();
    //    lastName = ui->lastNameLineEdit->text();

    //    if (data.open())
    //    {
    //        QSqlQuery query(data);
    //        query.prepare(QString("INSERT INTO Users (firstName, lastName) VALUES (:firstName, :lastName)"));
    //        query.bindValue(0, firstName);
    //        query.bindValue(1, lastName);
    //        if (!query.exec())
    //        {
    //            QMessageBox::warning(this, "Fail", "Query did not execute");
    //        }
    //        else
    //        {
    //            //if we good, then we open new page
    //            newUserSignUp newUser;
    //            newUser.setModal(true);
    //            newUser.exec();
    //  }
    //}
}


