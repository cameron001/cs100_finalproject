#include "displaybooks.h"
#include "ui_displaybooks.h"
#include <QStandardItemModel>
#include <QMainWindow>

DisplayBooks::DisplayBooks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisplayBooks)
{

    ui->setupUi(this);

    connect( ui->booksDataSet, SIGNAL(clicked(const QModelIndex &)), this, SLOT(onTableClicked(const QModelIndex &)));
    ui->booksDataSet->horizontalHeader()->setStretchLastSection(true);
    ui->titleLbl->setStyleSheet("QLabel { color : white; font-size:18px; }");
    ui->titleLbl->setText("Books List ( Click the ISBN to see details ) ");
    ui->titleLbl->setGeometry(10, 10, 400, 30);
     ui->booksDataSet->setEditTriggers(QAbstractItemView::NoEditTriggers);
    populateDataSet();

}

DisplayBooks::~DisplayBooks()
{
    delete ui;
}



void DisplayBooks::populateDataSet()
{
    auto model = new QStandardItemModel();
    ui->booksDataSet->setModel(model);
    BooksFactory b(0);
    Book* bk = b.getBooks();
     vector<Book*> tBooks = bk->getBookObjects();
     std::cout<<"size"<<tBooks.size()<<std::endl;
    int row=0;
    int col=0;
    model->setHorizontalHeaderItem( 0,new QStandardItem("ISBN"));
    model->setHorizontalHeaderItem( 1,new QStandardItem("Book Title"));
    model->setHorizontalHeaderItem( 2,new QStandardItem("Author"));
    model->setHorizontalHeaderItem( 3,new QStandardItem("Publisher"));
    ui->booksDataSet->setColumnWidth(0, this->width()/4);
    ui->booksDataSet->setColumnWidth(1, this->width()/4);
    ui->booksDataSet->setColumnWidth(2, this->width()/4);
    ui->booksDataSet->setColumnWidth(3, this->width()/4);


    for (auto& book_ptr : tBooks)
    {
               int col=0;

             QStandardItem* x =  new QStandardItem();
             x->setData(book_ptr->getID(), Qt::UserRole+1);
             x->setText(QString::fromStdString(book_ptr->getIsbn()));

                model->setItem(row,col,x);

               model->setItem(row,col+1,  new QStandardItem(QString::fromStdString(book_ptr->getTitle())));
               model->setItem(row,col+2,new QStandardItem(QString::fromStdString(book_ptr->getAuthor())));
               model->setItem(row,col+3,new QStandardItem(QString::fromStdString(book_ptr->getPublisher())));
               row++;


   }

}

void DisplayBooks::onTableClicked(const QModelIndex &index)
{
    if (index.isValid()) {
           // QString cellText = index.data().toString();
            int bookID=index.data( Qt::UserRole+1).toInt();
            std::cout<<"cccccc"<<bookID;
            BooksFactory b(0);
            Book* bk = b.getBooks()->getBookDetails(bookID);
            QString str="<table  cellpadding=\"3\" border=\"0\" style=\"font-size:14px\"  ><tr><td  ><b> Title: </b> "+QString::fromStdString(bk->getTitle())+"</td><td ><b> Author: </b>"+QString::fromStdString(bk->getAuthor())+"</td></tr><tr><td ><b> Publisher: </b>"+QString::fromStdString(bk->getPublisher())+"</td><td ><b> ISBN: </b>"+QString::fromStdString(bk->getIsbn())+"</td></tr><tr><td ><b> Rating: </b>"+QString::fromStdString(bk->getRating())+"</td><td ><b> Book Format: </b>"+QString::fromStdString(bk->getBookFormat())+"</td></tr><tr><td ><b> Number od Pages: </b>"+QString::number(bk->getePages())+"</td><td ><b> publish Date: </b>"+QString::fromStdString(bk->getPublishDate())+"</td></tr></table>";

            QNetworkAccessManager *nam = new QNetworkAccessManager(this);
            connect(nam, &QNetworkAccessManager::finished, this, &DisplayBooks::downloadFinished);
            const QUrl url = QUrl(QString::fromStdString(bk->getCoverImg()));
            QNetworkRequest request(url);
            nam->get(request);


            QWidget * container1 = new QWidget;
            QFormLayout *formLayout1 = new QFormLayout();

            QHBoxLayout * hBoxLayout1= new QHBoxLayout;
            QLabel *txtLabel = new QLabel;
            txtLabel->setText(str);
            hBoxLayout1->addWidget(txtLabel);
            formLayout1->addRow(hBoxLayout1);
            ui->scrollArea->setWidget(container1);

            container1->setLayout(formLayout1);

            ui->genre->setText("<b>Genre: </b>"+QString::fromStdString(bk->getGenres()));
            ui->genre->setWordWrap(true);

            ui->desc->setText(QString::fromStdString(bk->getDescription()));
            ui->desc->setWordWrap(true);


        }
}

void DisplayBooks::downloadFinished(QNetworkReply *reply)
{
    QPixmap pm;
    pm.loadFromData(reply->readAll());
    pm.scaledToWidth(360, Qt::SmoothTransformation);
    ui->imgLbl->setPixmap(pm);
    ui->imgLbl->setAlignment(Qt::AlignRight);
}



