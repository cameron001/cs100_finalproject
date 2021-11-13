#include "studentaccountpage.h"
#include "ui_studentaccountpage.h"

studentAccountPage::studentAccountPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::studentAccountPage)
{
    ui->setupUi(this);
    createWelcomeLabel();
}

studentAccountPage::~studentAccountPage()
{
    delete ui;
}

void studentAccountPage::centerAndResize()
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

void studentAccountPage::createWelcomeLabel()
{
//    user newUser;
//    int id = newUser.getUserId();
//    QSqlQuery query;
//    query.prepare("SELECT * FROM users");
//    //query.prepare("SELECT firstname FROM users WHERE id = ?");
//    query.addBindValue(id);
//    if(!query.exec())
//    {
//        qDebug() << "query not ran";
//    }
//    else
//    {
//        qDebug() << id;
//    }

//        //Create a font to use
//            QFont welcomeFont("Courier", 30, QFont::Bold);
//            ui->loginLabel->setFont(welcomeFont);
//            ui->loginLabel->setAlignment(Qt::AlignCenter);
//            ui->loginLabel->setStyleSheet("color: black");
//            ui->loginLabel->setText("Welcome!");
//            //Get screen size to center label
//            QScreen *screen = QGuiApplication::primaryScreen();
//            QRect screenGeometry = screen->geometry();
//            int x = (.9 * screenGeometry.width() - ui->loginLabel->width ()) / 2;
//            int y = (.9 * screenGeometry.height() - ui->loginLabel->height ()) / 2;
//            ui->loginLabel->setGeometry(x + 25, y - 100, 150, 50);
}
