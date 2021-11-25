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

    BooksFactory b2(1);
    Book* bk2 = b2.getBooks();
    vector<Book*> tBooks2 = bk2->getBookObjects();

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
             x->setData(book_ptr->getBookType(), Qt::UserRole+2);
             x->setText(QString::fromStdString(book_ptr->getIsbn()));


model->setItem(row,col,x);

               model->setItem(row,col+1,  new QStandardItem(QString::fromStdString(book_ptr->getTitle())));
               model->setItem(row,col+2,new QStandardItem(QString::fromStdString(book_ptr->getAuthor())));
               model->setItem(row,col+3,new QStandardItem(QString::fromStdString(book_ptr->getPublisher())));
               row++;


   }

    for (auto& book_ptr2 : tBooks2)
    {
               int col=0;

             QStandardItem* x =  new QStandardItem();
             x->setData(book_ptr2->getID(), Qt::UserRole+1);
             x->setData(book_ptr2->getBookType(), Qt::UserRole+2);
             x->setText(QString::fromStdString(book_ptr2->getIsbn()));


             model->setItem(row,col,x);

               model->setItem(row,col+1,  new QStandardItem(QString::fromStdString(book_ptr2->getTitle())));
               model->setItem(row,col+2,new QStandardItem(QString::fromStdString(book_ptr2->getAuthor())));
               model->setItem(row,col+3,new QStandardItem(QString::fromStdString(book_ptr2->getPublisher())));
               row++;


   }

}

void DisplayBooks::onTableClicked(const QModelIndex &index)
{
    if (index.isValid()) {
            int bookID=index.data( Qt::UserRole+1).toInt();
            int bookType=index.data( Qt::UserRole+2).toInt();
            qDebug()<<bookID<<"-"<<bookType;

            QString str;
            QString ur;
            if(bookType==0)
            {
                BooksFactory b(0);
                Book* bk = b.getBooks()->getBookDetails(bookID);
                    str="<table  cellpadding=\"3\" border=\"0\" style=\"font-size:14px\"  ><tr><td width=\"250\" ><b> Title: </b> "+QString::fromStdString(bk->getTitle())+"</td><td width=\"250\" ><b> Author: </b>"+QString::fromStdString(bk->getAuthor())+"</td></tr><tr><td ><b> Publisher: </b>"+QString::fromStdString(bk->getPublisher())+"</td><td ><b> ISBN: </b>"+QString::fromStdString(bk->getIsbn())+"</td></tr><tr><td ><b> Rating: </b>"+QString::fromStdString(bk->getRating())+"</td><td ><b> Book Format: </b>"+QString::fromStdString(bk->getBookFormat())+"</td></tr><tr><td ><b> Number od Pages: </b>"+QString::number(bk->getePages())+"</td><td ><b> publish Date: </b>"+QString::fromStdString(bk->getPublishDate())+"</td></tr><tr><td ><b> Language: </b>"+QString::fromStdString(bk->getLanguage())+"</td><td ><b> Price: </b>$"+QString::number(bk->getPrice())+"</td></tr></table>";
                    ur = QString::fromStdString(bk->getCoverImg());

                    ui->genre->setText("<b>Genre: </b>"+QString::fromStdString(bk->getGenres()));
                    ui->genre->setWordWrap(true);

                    ui->desc->setText(QString::fromStdString(bk->getDescription()));
                    ui->desc->setWordWrap(true);
                     ui->scrollArea->resize(851,161);
            }
            else if(bookType==1)
            {
                BooksFactory b2(1);
                Book* bk2 = b2.getBooks()->getBookDetails(bookID);
                    str="<table  cellpadding=\"3\" border=\"0\" style=\"font-size:14px\"  ><tr><td  ><b> Title: </b> "+QString::fromStdString(bk2->getTitle())+"</td></tr><tr><td ><b> Publisher: </b>"+QString::fromStdString(bk2->getPublisher())+"</td></tr><tr><td ><b> ISBN: </b>"+QString::fromStdString(bk2->getIsbn())+"</td></tr><tr><td ><b> Rating: </b>"+QString::fromStdString(bk2->getRating())+"</td></tr><tr><td ><b> Book Format: </b>"+QString::fromStdString(bk2->getBookFormat())+"</td></tr><tr><td ><b> Number od Pages: </b>"+QString::number(bk2->getePages())+"</td></tr><tr><td ><b> Language: </b>"+QString::fromStdString(bk2->getLanguage())+"</td></tr><tr><td ><b> Price: </b>$"+QString::number(bk2->getPrice())+"</td></tr></table>";

                    ur = QString::fromStdString(bk2->getCoverImg());
                    ui->genre->setText("");
                    ui->genre->setWordWrap(true);

                     ui->desc->setText("");
                    ui->desc->setWordWrap(true);
                    ui->scrollArea->resize(851,250);
            }

            QNetworkAccessManager *nam = new QNetworkAccessManager(this);
            connect(nam, &QNetworkAccessManager::finished, this, &DisplayBooks::downloadFinished);
            const QUrl url = QUrl(ur);
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



