#include "displaybooks.h"
#include "ui_displaybooks.h"


DisplayBooks::DisplayBooks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisplayBooks)
{

    ui->setupUi(this);
    centerAndResize();
    model = new QStandardItemModel();

    int s = QApplication::primaryScreen()->size().width();
    int h = QApplication::primaryScreen()->size().height();
    connect( ui->booksDataSet, SIGNAL(clicked(QModelIndex)), this, SLOT(onTableClicked(QModelIndex)));
    int threeFourth = s-((s/4)-40);
    ui->rSide1->setGeometry(5+((s/4)-60),0,threeFourth,h);
    ui->rSide1->setFrameShape(QFrame::NoFrame);
    ui->buttons_container->setFrameShape(QFrame::NoFrame);
    ui->groupBox->setFlat(true);
    ui->groupBox->setStyleSheet("border:0;");
    ui->booksDataSet->setGeometry(0,40,threeFourth,290);
    ui->booksDataSet->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->checkout->setGeometry(0,335,280,40);
    ui->imgLbl->setGeometry((threeFourth-400-20), 380, 400, 401 );
    ui->titleLbl->setStyleSheet("QLabel { color : white; font-size:18px; }");
    ui->titleLbl->setText("Books List ( Click the ISBN to see details ) ");
    ui->titleLbl->setGeometry(0, 10, 400, 30);
    ui->booksDataSet->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->scrollArea->setGeometry(0,380,(s-(s/4)-20-400),161);
    ui->genre->setGeometry(0,550,(s-(s/4)-20-400),31);
    ui->desc->setGeometry(0,590,(s-(s/4)-20-400),191);
    ui->desc->setAlignment(Qt::AlignTop);
    ui->radio_all->setChecked(true);
    ui->booksDataSet->setModel(model);
    populateDataSet();

    connect(ui->radio_all,SIGNAL(clicked()),this,SLOT(showAll()));
    connect(ui->radio_text,SIGNAL(clicked()),this,SLOT(showText()));
    connect(ui->radio_ref,SIGNAL(clicked()),this,SLOT(showRef()));
    connect(ui->radio_journal,SIGNAL(clicked()),this,SLOT(showJournals()));

    ui->booksDataSet->setStyleSheet(" QTableView::item { border-left: 1px solid #fff; border-bottom: 1px solid #fff;}");

}

void DisplayBooks::showAll(){model->removeRows( 0, model->rowCount() );populateDataSet();}
void DisplayBooks::showText(){model->removeRows( 0, model->rowCount() );getTextbooks();}
void DisplayBooks::showRef(){model->removeRows( 0, model->rowCount() );getRefbooks();}
void DisplayBooks::showJournals(){model->removeRows( 0, model->rowCount() );getJournalbooks();}

DisplayBooks::~DisplayBooks()
{
    delete model;
    delete ui;

}

void DisplayBooks::centerAndResize()
{

   QSize rec = QApplication::primaryScreen()->size();
    int height = rec.height();
    int width = rec.width();
    this->setGeometry(0,0,width,height);


}

void DisplayBooks::getTextbooks()
{

    clearBookDetails();
    BooksFactory b(0);
    Book* bk = b.getBooks();
    vector<Book*> tBooks = bk->getBookObjects();

    int row=ui->booksDataSet->model()->rowCount();

    for(int i = 0; i < 5; i++)
    {
        ui->booksDataSet->setColumnWidth(i, ((this->width()-100)/4)-5);
    }


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
}

void DisplayBooks::getRefbooks()
{
    clearBookDetails();
    BooksFactory b2(1);
    Book* bk2 = b2.getBooks();
    vector<Book*> tBooks2 = bk2->getBookObjects();
    int row = ui->booksDataSet->model()->rowCount();
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

void DisplayBooks::getJournalbooks()
{
    clearBookDetails();
    BooksFactory b3(2);
    Book* bk3 = b3.getBooks();
    vector<Book*> tBooks3 = bk3->getBookObjects();
    int row = ui->booksDataSet->model()->rowCount();

    for (auto& book_ptr3 : tBooks3)
    {
             int col=0;
             QStandardItem* x =  new QStandardItem();
             x->setData(book_ptr3->getID(), Qt::UserRole+1);
             x->setData(book_ptr3->getBookType(), Qt::UserRole+2);
             x->setText(QString::fromStdString(book_ptr3->getIsbn()));
             model->setItem(row,col,x);
             model->setItem(row,col+1,  new QStandardItem(QString::fromStdString("Journal")));
             model->setItem(row,col+2,new QStandardItem(QString::fromStdString("Multiple")));
             model->setItem(row,col+3,new QStandardItem(QString::fromStdString(book_ptr3->getPublisher())));
               row++;
   }
}

void  DisplayBooks::tblViewHeader()
{

    model->setHorizontalHeaderItem( 0,new QStandardItem("ISBN"));
    model->setHorizontalHeaderItem( 1,new QStandardItem("Book Title"));
    model->setHorizontalHeaderItem( 2,new QStandardItem("Author"));
    model->setHorizontalHeaderItem( 3,new QStandardItem("Publisher"));
}

void DisplayBooks::populateDataSet()
{

    tblViewHeader();
    getTextbooks();
    getRefbooks();
    getJournalbooks();

}

void DisplayBooks::onTableClicked(const QModelIndex &index)
{
    if (index.isValid()) {

            int bookID=index.data( Qt::UserRole+1).toInt();
            int bookType=index.data( Qt::UserRole+2).toInt();
            current = bookID;
            ui->checkout->setText( "Checkout book with ISBN "+index.data().toString());
            int wid = QApplication::primaryScreen()->size().width();
            int nw= (wid-((wid/4)+20+400));

            QString str;
            QString ur;
            if(bookType==0)
            {
                BooksFactory b(0);
                Book* bk = b.getBooks()->getBookDetails(bookID);

                    str="<table  cellpadding=\"3\" border=\"0\" width=\""+QString::number(nw-20)+"\" style=\"font-size:14px\"  ><tr><td width=\"250\" ><b> Title: </b> "+QString::fromStdString(bk->getTitle())+"</td><td width=\"250\" ><b> Author: </b>"+QString::fromStdString(bk->getAuthor())+"</td></tr><tr><td ><b> Publisher: </b>"+QString::fromStdString(bk->getPublisher())+"</td><td ><b> ISBN: </b>"+QString::fromStdString(bk->getIsbn())+"</td></tr><tr><td ><b> Rating: </b>"+QString::fromStdString(bk->getRating())+"</td><td ><b> Book Format: </b>"+QString::fromStdString(bk->getBookFormat())+"</td></tr><tr><td ><b> Number od Pages: </b>"+QString::number(bk->getePages())+"</td><td ><b> Publish Date: </b>"+QString::fromStdString(bk->getPublishDate())+"</td></tr><tr><td ><b> Language: </b>"+QString::fromStdString(bk->getLanguage())+"</td><td ><b> Price: </b>$"+QString::number(bk->getPrice())+"</td></tr></table>";
                    ur = QString::fromStdString(bk->getCoverImg());

                    ui->genre->setText("<b>Genre: </b>"+QString::fromStdString(bk->getGenres()));
                    ui->genre->setWordWrap(true);

                    ui->desc->setText(QString::fromStdString(bk->getDescription()));
                    ui->desc->setWordWrap(true);
                     ui->scrollArea->resize(nw-10,161);

            }
            else if(bookType==1)
            {
                BooksFactory b2(1);
                Book* bk2 = b2.getBooks()->getBookDetails(bookID);
                    str="<table  cellpadding=\"3\" border=\"0\"  width=\""+QString::number(nw-30)+"\" style=\"font-size:14px\"  ><tr><td  ><b> Title: </b> "+QString::fromStdString(bk2->getTitle())+"</td></tr><tr><td ><b> Publisher: </b>"+QString::fromStdString(bk2->getPublisher())+"</td></tr><tr><td ><b> ISBN: </b>"+QString::fromStdString(bk2->getIsbn())+"</td></tr><tr><td ><b> Rating: </b>"+QString::fromStdString(bk2->getRating())+"</td></tr><tr><td ><b> Book Format: </b>"+QString::fromStdString(bk2->getBookFormat())+"</td></tr><tr><td ><b> Number od Pages: </b>"+QString::number(bk2->getePages())+"</td></tr><tr><td ><b> Language: </b>"+QString::fromStdString(bk2->getLanguage())+"</td></tr><tr><td ><b> Price: </b>$"+QString::number(bk2->getPrice())+"</td></tr></table>";

                    ur = QString::fromStdString(bk2->getCoverImg());
                    ui->genre->setText("");
                    ui->genre->setWordWrap(true);

                     ui->desc->setText("");
                    ui->desc->setWordWrap(true);
                    ui->scrollArea->resize(nw-10,250);
            }


            else if(bookType==2)
            {
                BooksFactory b3(2);
                Book* bk3 = b3.getBooks()->getBookDetails(bookID);
                    str="<table  cellpadding=\"3\" border=\"0\" width=\""+QString::number(nw-30)+"\" style=\"font-size:14px\"  ><tr><td ><b> Publisher: </b>"+QString::fromStdString(bk3->getPublisher())+"</td></tr><tr><td ><b> ISBN: </b>"+QString::fromStdString(bk3->getIsbn())+"</td></tr><tr><td ><b> Number od Pages: </b>"+QString::number(bk3->getePages())+"</td></tr><tr><td ><b> publish Date: </b>"+QString::fromStdString(bk3->getPublishDate())+"</td></tr><tr><td ><b> Price: </b>$"+QString::number(bk3->getPrice())+"</td></tr></table>";

                    ur = QString::fromStdString(bk3->getCoverImg());
                    ui->genre->setText("");
                    ui->genre->setWordWrap(true);

                     ui->desc->setText("");
                    ui->desc->setWordWrap(true);
                   ui->scrollArea->resize(nw-10,250);;
            }
            ui->checkout->setVisible(true);

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

void DisplayBooks::clearBookDetails()
{
    ui->search_result_lbl->setText("");
    ui->desc->setText("");
    ui->genre->setText("");
    QWidget *wid = ui->scrollArea->widget();
    if(wid)
        wid->deleteLater();
//    QPixmap pm = ui->imgLbl->pixmap();
    QPixmap nPm;
    ui->imgLbl->setPixmap(nPm);
    ui->checkout->setVisible(false);

}

void DisplayBooks::on_search_btn_clicked()
{
    clearBookDetails();
    model->removeRows( 0, model->rowCount() );
    string column="";
    if(ui->radio_ISBN->isChecked()){column = "isbn";}
    else if(ui->radio_author->isChecked()){column = "author";}
    else if(ui->radio_genre->isChecked()){column = "genres";}
    if(!(column.empty() && ui->search_text->text().toStdString().empty()))
    {
       BooksFactory bf;
       vector<vector<Book*>> res= bf.lookupBooks(column,ui->search_text->text().toStdString() );



       int row=ui->booksDataSet->model()->rowCount();

       for(int i = 0; i < 5; i++)
       {
           ui->booksDataSet->setColumnWidth(i, ((this->width()-100)/4)-5);
       }

       if(res.size()>0)
       {

           for (auto&& book_ptr : res)
           {
               for (auto& inner : book_ptr)
               {
                    int col=0;

                    QStandardItem* x =  new QStandardItem();
                    x->setData(inner->getID(), Qt::UserRole+1);
                    x->setData(inner->getBookType(), Qt::UserRole+2);
                    x->setText(QString::fromStdString(inner->getIsbn()));
                    model->setItem(row,col,x);
                    model->setItem(row,col+1,  new QStandardItem(QString::fromStdString(inner->getTitle())));
                    model->setItem(row,col+2,new QStandardItem(QString::fromStdString(inner->getAuthor())));
                    model->setItem(row,col+3,new QStandardItem(QString::fromStdString(inner->getPublisher())));
                    row++;

                }
           }
        }
       else
       {
           ui->search_result_lbl->setText("No records were found!");
       }
    }

}


void DisplayBooks::on_checkout_clicked()
{
    qDebug()<<current;
}

