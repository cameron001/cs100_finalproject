#include "studentaccountinfopage.h"
#include "ui_studentaccountinfopage.h"

studentAccountInfoPage::studentAccountInfoPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentAccountInfoPage)
{
    ui->setupUi(this);
   // setStyleSheet("background-color: white");
    centerAndResize();
    createLoginButton();
    createPasswordEdit();
    createUsernameEdit();
    createLabel();
    ui->tableView->hide();
}

studentAccountInfoPage::~studentAccountInfoPage()
{
    delete ui;
}

void studentAccountInfoPage::centerAndResize()
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

void studentAccountInfoPage::createLoginButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->loginButton->setFont(userFont);
    ui->loginButton->setText("Login");
    ui->loginButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->loginButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->loginButton->height ()) / 2;
    ui->loginButton->setGeometry(x + 65, y + 75, 100, 25);
}

void studentAccountInfoPage::createPasswordEdit()
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
    ui->passwordEdit->setGeometry(x + 200, y, 375, 35);
}

void studentAccountInfoPage::createUsernameEdit()
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
    ui->usernameEdit->setGeometry(x - 300, y, 375, 35);
}

void studentAccountInfoPage::createLabel()
{
    ui->label->hide();
    QFont lastNameFont("Courier", 50, QFont::Bold);
    ui->label->setFont(lastNameFont);
    ui->label->setStyleSheet("color: black");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->label->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->label->height ()) / 2;
    ui->label->setGeometry(x - 350, y - 400, 1000, 300);
}

void studentAccountInfoPage::on_loginButton_clicked()
{
    ui->label->show();
    ui->tableView->show();
    ui->usernameEdit->hide();
    ui->passwordEdit->hide();
    ui->loginButton->hide();
    QSqlQuery query;
    QString username = ui->usernameEdit->text();
    QString password = ui->passwordEdit->text();
    query.prepare("SELECT * FROM users WHERE username = ? AND password = ? ");
    query.addBindValue(username);
    query.addBindValue(password);
    if (!query.exec())
    {
        qDebug() << query.lastError();
    }
    else
    {
        int count = 0;
        while(query.next())
        {
            count++;
            QString fname = query.value(1).toString();
            QString lname = query.value(2).toString();
            ui->label->setText("Account Information For " + fname + " " + lname);
        }
        QSqlQueryModel *search = new QSqlTableModel;
        search->setQuery(query);
        ui->tableView->setGeometry(0, 300, 1475, 100);
        ui->tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        ui->tableView->show();
        ui->tableView->setModel(search);
        ui->tableView->setColumnHidden(0, true);
        ui->tableView->setColumnHidden(7, true);
        ui->tableView->setColumnHidden(8, true);
        ui->tableView->setColumnHidden(9, true);
        for(int i = 0; i < 7; i++)
        {
            ui->tableView->setColumnWidth(i,250);
        }
        if (count < 1)
        {
            ui->label->hide();
            ui->tableView->hide();
            QMessageBox error;
            error.setText("Error! Username or password is incorrect");
            error.setIcon(QMessageBox::Warning);
            error.setWindowTitle("Invalid user");
            error.exec();
            ui->usernameEdit->show();
            ui->passwordEdit->show();
            ui->loginButton->show();
        }
    }

}

