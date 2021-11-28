#include "searchbytitlepage.h"
#include "ui_searchbytitlepage.h"

searchByTitlePage::searchByTitlePage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::searchByTitlePage)
{
    ui->setupUi(this);
    ui->tableView->hide();
    centerAndResize();
    createButton();
    createEdit();
}

searchByTitlePage::~searchByTitlePage()
{
    delete ui;
}

void searchByTitlePage::centerAndResize()
{

   QSize rec = QApplication::primaryScreen()->size();
    int height = rec.height();
    int width = rec.width();
    this->setGeometry(0,0,width,height);


}

void searchByTitlePage::createButton()
{
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

void searchByTitlePage::createEdit()
{
    QFont lastNameFont("Courier", 25, QFont::Bold);
    ui->lineEdit->setFont(lastNameFont);
    ui->lineEdit->setStyleSheet("color: black");
    ui->lineEdit->setPlaceholderText("What is the name of the Book?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit->height ()) / 2;
    ui->lineEdit->setGeometry(x - 150, y, 500, 35);
}

void searchByTitlePage::on_pushButton_clicked()
{
    ui->tableView->show();
    ui->lineEdit->hide();
    ui->pushButton->hide();
    QSqlQuery query;
    QString title = ui->lineEdit->text();
    query.prepare("SELECT * FROM books WHERE title = ?  ");
    query.addBindValue(title);
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
        }
        QSqlQueryModel *search = new QSqlTableModel;
        search->setQuery(query);
        ui->tableView->setGeometry(0, 300, 1475, 100);
        ui->tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        ui->tableView->show();
        ui->tableView->setModel(search);
        ui->tableView->setColumnHidden(0, true);
        ui->tableView->setColumnHidden(1, true);
        ui->tableView->setColumnHidden(5, true);
        ui->tableView->setColumnHidden(6, true);
        ui->tableView->setColumnHidden(7, true);
        ui->tableView->setColumnHidden(8,  true);
        ui->tableView->setColumnHidden(9, true);
        ui->tableView->setColumnHidden(10, true);
        ui->tableView->setColumnHidden(11, true);
        ui->tableView->setColumnHidden(12, true);
        ui->tableView->setColumnHidden(13, true);
        ui->tableView->setColumnHidden(17, true);
        ui->tableView->setColumnHidden(18, true);
        ui->tableView->setColumnHidden(19, true);
        ui->tableView->setColumnHidden(20, true);
        ui->tableView->setColumnHidden(21, true);
        ui->tableView->setColumnHidden(22, true);
        ui->tableView->setColumnHidden(23, true);
        ui->tableView->setColumnHidden(24, true);
        ui->tableView->setColumnHidden(25, true);
        ui->tableView->setColumnHidden(26, true);
        for(int i = 0; i < 26; i++)
        {
            ui->tableView->setColumnWidth(i,250);
        }
        if (count < 1)
        {
            ui->tableView->hide();
            QMessageBox error;
            error.setText("Error! No author matches");
            error.setIcon(QMessageBox::Warning);
            error.setWindowTitle("Invalid author");
            error.exec();
            ui->lineEdit->show();
            ui->pushButton->show();
        }
    }
}

