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
    //ui->admin_panel->setFrameShape(QFrame::NoFrame);
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
    ui->search_result_lbl->setStyleSheet("color:#e63946");
    ui->booksDataSet->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->scrollArea->setGeometry(0,380,(s-(s/4)-20-400),161);
    ui->genre->setGeometry(0,550,(s-(s/4)-20-400),31);
    ui->desc->setGeometry(0,590,(s-(s/4)-20-400),191);
    ui->desc->setAlignment(Qt::AlignTop);
    ui->radio_all->setChecked(true);
    ui->booksDataSet->setModel(model);
    ui->welcome_lbl->setText("Welcome, "+HighlanderBooks::user::firstName);
    populateDataSet();
    populateCheckoutList();
    populateReturnsList();
    ui->student_panel->setGeometry(10,410,271,131);
    connect(ui->radio_all,SIGNAL(clicked()),this,SLOT(showAll()));
    connect(ui->radio_text,SIGNAL(clicked()),this,SLOT(showText()));
    connect(ui->radio_ref,SIGNAL(clicked()),this,SLOT(showRef()));
    connect(ui->radio_journal,SIGNAL(clicked()),this,SLOT(showJournals()));
    ui->booksDataSet->setStyleSheet(" QTableView::item { border-left: 1px solid #fff; border-bottom: 1px solid #fff;}");

    if(HighlanderBooks::user::isLibrarian!=1)
    {
        ui->student_panel->setGeometry(10,370,271,131);
        ui->student_overdue->setGeometry(10,510,271,131);
        ui->admin_panel->setVisible(false);
        ui->student_panel->setVisible(true);
        showDueDates();
        ui->student_overdue->setVisible(true);

        ui->admin_fines->setVisible(false);
         ui->admin_book_returns->setVisible(false);
        showUserFines();
    }
    else
    {
        ui->admin_panel->setVisible(true);
        ui->student_panel->setVisible(false);
        ui->student_overdue->setVisible(false);
        ui->admin_fines->setGeometry(10,510,271,131);
        ui->admin_book_returns->setGeometry(10,650,271,131);
        showOverDuebooks();

     }


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
            if(checkUserTrans(QString::number(bookID)))
            {
                 ui->checkout->setText( "Book is waiting for Librarian approval");
                 ui->checkout->setDisabled(true);

            }
            else if(HighlanderBooks::user::isLibrarian==0)
            {
                ui->checkout->setDisabled(false);
                ui->checkout->setText( "Checkout book with ISBN "+index.data().toString());
            }
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

            if(HighlanderBooks::user::isLibrarian==0)
            {
                ui->checkout->setVisible(true);
            }
            else
            {
                  ui->checkout->setVisible(false);
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

void DisplayBooks::clearBookDetails()
{
    ui->search_result_lbl->setText("");
    ui->desc->setText("");
    ui->genre->setText("");

    QWidget *w = ui->scrollArea->takeWidget();
    delete w;

 ui->scrollArea->ensureVisible(0, 0, 0, 0);

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
    else if(ui->radio_title->isChecked()){column = "title";}
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
    if(!checkUserTrans(current.toString()))
    {
       QSqlQuery query;
       query.exec("insert into transactions(bookID,userID) values ("+current.toString()+" , "+QString::number( HighlanderBooks::user::userId)+" )");


       ui->checkout->setText( "Book is waiting for Librarian approval");
       ui->checkout->setDisabled(true);
    }


}

bool DisplayBooks::checkUserTrans(QString bookID)
{
    QSqlQuery query;
    query.exec("select * from transactions where bookID="+bookID+" and userID="+QString::number( HighlanderBooks::user::userId)+" and librarianID is null");
    int notExist=0;
    while(query.next())
    {
        notExist=1;
    }
    return notExist;
}

void DisplayBooks::populateCheckoutList()
{
    QSqlQuery query;
    query.exec("select * from transactions  join books on transactions.id = books.id where librarianID is null order by title ");
    ui->checkout_combox->addItem("Select book to checkout" ,0);
    while(query.next())
    {
        ui->checkout_combox->addItem(query.value("title").toString() ,query.value("id").toInt());
    }
}


void DisplayBooks::showDueDates()
{
    QSqlQuery query;
    query.exec("select fines.id, books.* ,strftime('%m/%d/%Y', dueDate)  as duedate from transactions join books on books.id = transactions.bookID left outer join fines on fines.transID = transactions.id where transactions.userID ="+QString::number(HighlanderBooks::user::userId)+" and bookReturned=0 and transactions.librarianID is not null and (fines.id is null or (fines.id is not null and finePaid=0)) ");


    QString tbl= "<table width=\"250\" border=\"0\"><tr><th width=\"250\" align=\"left\" style=\"color:#a8dadc\" >Your Books due dates</th></tr>";
    int i=0;
    while(query.next())
    {
        tbl+="<tr><td width=\"250\" style=\"color:#90e0ef\">"+query.value("title").toString()+"<span style=\"color:#caf0f8\"><i> ("+query.value("duedate").toString()+")</i></span></td></tr>";
        i++;
    }
    if(i==0)
    {
      tbl+="<tr><td width=\"250\" style=\"color:#90e0ef\">You don't have books</td</tr>";
    }
    tbl+="</table>";
    QWidget * container1 = new QWidget;
    QFormLayout *formLayout1 = new QFormLayout();

    QHBoxLayout * hBoxLayout1= new QHBoxLayout;
    QLabel *txtLabel = new QLabel;
    txtLabel->setText(tbl);
    hBoxLayout1->addWidget(txtLabel);
    formLayout1->addRow(hBoxLayout1);
    ui->student_panel->setWidget(container1);

    container1->setLayout(formLayout1);

}

void DisplayBooks::on_checkout_btn_clicked()
{

    QDateTime today = QDateTime::currentDateTime();
    QString formattedDate = today.toString("yyyy-MM-dd");

    QDateTime nextWeek = QDateTime::currentDateTime().addDays(7);
    QString nextweekFormatted = nextWeek.toString("yyyy-MM-dd");
 QString transId= ui->checkout_combox->itemData(ui->checkout_combox->currentIndex()).toString();
    if(transId !="0")
    {
        QSqlQuery query;
        query.exec("update transactions set librarianID= "+QString::number(HighlanderBooks::user::userId)+", issueDate= '"+formattedDate+"' , dueDate = '"+nextweekFormatted+"' where id= "+transId);
         ui->checkout_combox->clear();
         populateCheckoutList();
    }
}

void DisplayBooks::showOverDuebooks()
{
    QDateTime today = QDateTime::currentDateTime();
    QString formattedDate = today.toString("yyyy-MM-dd");

    QSqlQuery query;
    query.exec("select books.title, transactions.id, books.price from books join  transactions on transactions.bookID = books.id left join fines on transactions.id = fines.transID where dueDate< '"+formattedDate+"' and bookReturned=0  and fines.id is null order by title ");
    ui->fines_admin_comboBox->addItem("Select Fine" ,0);
    while(query.next())
    {
        ui->fines_admin_comboBox->addItem(query.value("title").toString()+" ( $ "+query.value("price").toString()+" )" ,query.value("id").toInt());

    }
}

void DisplayBooks::showUserFines()
{

    QSqlQuery query;
    query.exec("select books.title, fines.AmountDue , fines.id from fines inner join transactions on transactions.id = fines.transID  inner join books on  books.id= transactions.bookID where finePaid=0 and  fines.userID="+QString::number(HighlanderBooks::user::userId)+" order by title ");
    ui->overdue_comboBox->addItem("Select Fine" ,0);
    while(query.next())
    {
        ui->overdue_comboBox->addItem(query.value("title").toString()+" ( $ "+query.value("AmountDue").toString()+" )" ,query.value("id").toInt());
    }
}


void DisplayBooks::on_pay_btn_2_clicked()
{
    QString transId= ui->fines_admin_comboBox->itemData(ui->fines_admin_comboBox->currentIndex()).toString();
       if(transId !="0")
       {
           QSqlQuery query,query2;
           query.exec("select books.price, transactions.userID from transactions join books on books.id = transactions.bookID where transactions.id="+transId);
           while(query.next())
           {
               query2.exec("insert into fines (transID, AmountDue, userID, librarianID) values( "+transId+", "+query.value("price").toString()+", "+query.value("userID").toString()+", "+QString::number(HighlanderBooks::user::userId)+" )");

           }
       }
       ui->fines_admin_comboBox->clear();
       showOverDuebooks();
}


void DisplayBooks::on_createfine_btn_clicked()
{
    QString fineId= ui->overdue_comboBox->itemData(ui->overdue_comboBox->currentIndex()).toString();
       if(fineId !="0")
       {
           QSqlQuery query,query2;
           query.exec("update fines set finePaid=1 where id="+fineId);
       }
       ui->overdue_comboBox->clear();
       showUserFines();
       showDueDates();

}


void DisplayBooks::on_return_btn_3_clicked()
{
    QString transId= ui->return_admin_comboBox->itemData(ui->return_admin_comboBox->currentIndex()).toString();
       if(transId !="0")
       {
           QSqlQuery query,query2;
               query.exec("update transactions set bookReturned=1 where id="+transId);
       }
       ui->return_admin_comboBox->clear();
       populateReturnsList();
}

void DisplayBooks::populateReturnsList()
{
    QSqlQuery query;
    QDateTime today = QDateTime::currentDateTime();
    QString formattedDate = today.toString("yyyy-MM-dd");
    query.exec("select transactions.id, books.title  from transactions join books on books.id = transactions.bookID left outer join fines on fines.transID = transactions.id where  bookReturned=0 and transactions.librarianID is not null and (fines.id is null or (fines.id is not null and finePaid=0)) and dueDate>='"+formattedDate+"'");
    ui->return_admin_comboBox->addItem("Select book" ,0);
    while(query.next())
    {
        ui->return_admin_comboBox->addItem(query.value("title").toString() ,query.value("id").toInt());
    }
}
