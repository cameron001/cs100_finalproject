#include "existinguserloginpage.h"
#include "ui_existinguserloginpage.h"

existingUserLoginPage::existingUserLoginPage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::existingUserLoginPage)
{
    ui->setupUi(this);
    centerAndResize();
    //change background color to white
    setStyleSheet("background-color: white");
}

existingUserLoginPage::~existingUserLoginPage()
{
    delete ui;
}

void existingUserLoginPage::centerAndResize()
{
    //Grab screen size for this computer
    QSize availableSize = qApp->desktop()->availableGeometry().size();
    int width = availableSize.width();
    int height = availableSize.height();
    //Set to 90% of scren size
    width *= .9;
    height *= .9;
    QSize newSize(width, height);
    //Set Screensize
    setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,newSize,qApp->desktop()->availableGeometry()));
}
