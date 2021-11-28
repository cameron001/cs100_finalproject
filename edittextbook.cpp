#include "edittextbook.h"
#include "ui_edittextbook.h"
#include "booksfactory.h"
using namespace HighlanderBooks;

editTextbook::editTextbook(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editTextbook)
{
    ui->setupUi(this);
    centerAndResize();
    createLineEdit1();
    createLineEdit2();
    createLineEdit3();
    createLineEdit4();
    createLineEdit5();
    createLineEdit6();
    createLineEdit7();
    createLineEdit8();
    createLineEdit9();
    createLineEdit10();
    createLineEdit11();
    createLineEdit12();
    createLineEdit13();
    createLineEdit14();
    createLineEdit15();
    createLineEdit16();
    createLineEdit17();
    createLineEdit18();
    createLineEdit19();
    createLineEdit20();
    createLineEdit21();
    createLineEdit22();
    createLineEdit23();
    createLineEdit24();
    createLineEdit25();
    createButton();
    createLineEdit26();
}

editTextbook::~editTextbook()
{
    delete ui;
}

void editTextbook::centerAndResize()
{

   QSize rec = QApplication::primaryScreen()->size();
    int height = rec.height();
    int width = rec.width();
    this->setGeometry(0,0,width,height);


}
void editTextbook::createLineEdit1()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit->setFont(lastNameFont);
    ui->lineEdit->setStyleSheet("color:#fff;");
    ui->lineEdit->setPlaceholderText("What is the book type?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit->height ()) / 2;
    ui->lineEdit->setGeometry(x - 500, y - 300, 200, 35);
}

void editTextbook::createButton()
{
    //create font
    QFont userFont("Courier", 15, QFont::Bold);
    ui->pushButton->setFont(userFont);
    ui->pushButton->setText("Add");
    ui->pushButton->setStyleSheet("background-color: black");
    //Get screen size to center label
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->pushButton->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->pushButton->height ()) / 2;
    ui->pushButton->setGeometry(x, y + 300, 200, 25);
}
void editTextbook::createLineEdit2()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_2->setFont(lastNameFont);
    ui->lineEdit_2->setStyleSheet("color:#fff;");
    ui->lineEdit_2->setPlaceholderText("What is the book series?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_2->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_2->height ()) / 2;
    ui->lineEdit_2->setGeometry(x - 250, y - 300, 200, 35);
}
void editTextbook::createLineEdit3()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_3->setFont(lastNameFont);
    ui->lineEdit_3->setStyleSheet("color:#fff;");
    ui->lineEdit_3->setPlaceholderText("What is the book title?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_3->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_3->height ()) / 2;
    ui->lineEdit_3->setGeometry(x, y - 300, 200, 35);
}
void editTextbook::createLineEdit4()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_4->setFont(lastNameFont);
    ui->lineEdit_4->setStyleSheet("color:#fff;");
    ui->lineEdit_4->setPlaceholderText("What is the book author?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_4->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_4->height ()) / 2;
    ui->lineEdit_4->setGeometry(x + 250, y - 300, 200, 35);
}
void editTextbook::createLineEdit5()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_5->setFont(lastNameFont);
    ui->lineEdit_5->setStyleSheet("color:#fff;");
    ui->lineEdit_5->setPlaceholderText("What is the book rating?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_5->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_5->height ()) / 2;
    ui->lineEdit_5->setGeometry(x + 500, y - 300, 200, 35);
}
void editTextbook::createLineEdit6()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_6->setFont(lastNameFont);
    ui->lineEdit_6->setStyleSheet("color:#fff;");
    ui->lineEdit_6->setPlaceholderText("What is the book description?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_6->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_6->height ()) / 2;
    ui->lineEdit_6->setGeometry(x - 500, y - 200, 200, 35);
}
void editTextbook::createLineEdit7()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_7->setFont(lastNameFont);
    ui->lineEdit_7->setStyleSheet("color:#fff;");
    ui->lineEdit_7->setPlaceholderText("What is the book language?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_7->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_7->height ()) / 2;
    ui->lineEdit_7->setGeometry(x - 250, y - 200, 200, 35);
}
void editTextbook::createLineEdit8()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_8->setFont(lastNameFont);
    ui->lineEdit_8->setStyleSheet("color:#fff;");
    ui->lineEdit_8->setPlaceholderText("What is the book isbn?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_8->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_8->height ()) / 2;
    ui->lineEdit_8->setGeometry(x, y - 200, 200, 35);
}
void editTextbook::createLineEdit9()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_9->setFont(lastNameFont);
    ui->lineEdit_9->setStyleSheet("color:#fff;");
    ui->lineEdit_9->setPlaceholderText("What is the book genre?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_9->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_9->height ()) / 2;
    ui->lineEdit_9->setGeometry(x + 250, y - 200, 200, 35);
}
void editTextbook::createLineEdit10()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_10->setFont(lastNameFont);
    ui->lineEdit_10->setStyleSheet("color:#fff;");
    ui->lineEdit_10->setPlaceholderText("What is the books number of ratings?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_10->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_10->height ()) / 2;
    ui->lineEdit_10->setGeometry(x + 500, y - 200, 200, 35);
}
void editTextbook::createLineEdit11()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_11->setFont(lastNameFont);
    ui->lineEdit_11->setStyleSheet("color:#fff;");
    ui->lineEdit_11->setPlaceholderText("Who are the book's characters?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_11->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_11->height ()) / 2;
    ui->lineEdit_11->setGeometry(x - 500, y - 100, 200, 35);
}
void editTextbook::createLineEdit12()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_12->setFont(lastNameFont);
    ui->lineEdit_12->setStyleSheet("color:#fff;");
    ui->lineEdit_12->setPlaceholderText("What is the book's format?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_12->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_12->height ()) / 2;
    ui->lineEdit_12->setGeometry(x - 250, y - 100, 200, 35);
}
void editTextbook::createLineEdit13()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_13->setFont(lastNameFont);
    ui->lineEdit_13->setStyleSheet("color:#fff;");
    ui->lineEdit_13->setPlaceholderText("What is the book's edition?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_13->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_13->height ()) / 2;
    ui->lineEdit_13->setGeometry(x, y - 100, 200, 35);
}
void editTextbook::createLineEdit14()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_14->setFont(lastNameFont);
    ui->lineEdit_14->setStyleSheet("color:#fff;");
    ui->lineEdit_14->setPlaceholderText("What are the number of pages?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_14->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_14->height ()) / 2;
    ui->lineEdit_14->setGeometry(x + 250, y - 100, 200, 35);
}
void editTextbook::createLineEdit15()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_15->setFont(lastNameFont);
    ui->lineEdit_15->setStyleSheet("color:#fff;");
    ui->lineEdit_15->setPlaceholderText("Who is the book's publisher?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_15->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_15->height ()) / 2;
    ui->lineEdit_15->setGeometry(x + 500, y - 100, 200, 35);
}
void editTextbook::createLineEdit16()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_16->setFont(lastNameFont);
    ui->lineEdit_16->setStyleSheet("color:#fff;");
    ui->lineEdit_16->setPlaceholderText("What is the book's publish date?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_16->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_16->height ()) / 2;
    ui->lineEdit_16->setGeometry(x - 500, y, 200, 35);
}
void editTextbook::createLineEdit17()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_17->setFont(lastNameFont);
    ui->lineEdit_17->setStyleSheet("color:#fff;");
    ui->lineEdit_17->setPlaceholderText("What is the book's first publish date?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_17->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_17->height ()) / 2;
    ui->lineEdit_17->setGeometry(x - 250, y, 200, 35);
}
void editTextbook::createLineEdit18()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_18->setFont(lastNameFont);
    ui->lineEdit_18->setStyleSheet("color:#fff;");
    ui->lineEdit_18->setPlaceholderText("What are the book's awards?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_18->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_18->height ()) / 2;
    ui->lineEdit_18->setGeometry(x, y, 200, 35);
}
void editTextbook::createLineEdit19()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_19->setFont(lastNameFont);
    ui->lineEdit_19->setStyleSheet("color:#fff;");
    ui->lineEdit_19->setPlaceholderText("What is the book's rating by stars?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_19->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_19->height ()) / 2;
    ui->lineEdit_19->setGeometry(x + 250, y, 200, 35);
}
void editTextbook::createLineEdit20()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_20->setFont(lastNameFont);
    ui->lineEdit_20->setStyleSheet("color:#fff;");
    ui->lineEdit_20->setPlaceholderText("What is the book's liked percent?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_20->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_20->height ()) / 2;
    ui->lineEdit_20->setGeometry(x + 500, y, 200, 35);
}
void editTextbook::createLineEdit21()
{  QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_21->setFont(lastNameFont);
    ui->lineEdit_21->setStyleSheet("color:#fff;");
    ui->lineEdit_21->setPlaceholderText("What is the book's setting?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_21->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_21->height ()) / 2;
    ui->lineEdit_21->setGeometry(x - 500, y + 100, 200, 35);

}
void editTextbook::createLineEdit22()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_22->setFont(lastNameFont);
    ui->lineEdit_22->setStyleSheet("color:#fff;");
    ui->lineEdit_22->setPlaceholderText("What is the book's cover image?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_22->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_22->height ()) / 2;
    ui->lineEdit_22->setGeometry(x - 250, y + 100, 200, 35);
}
void editTextbook::createLineEdit23()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_23->setFont(lastNameFont);
    ui->lineEdit_23->setStyleSheet("color:#fff;");
    ui->lineEdit_23->setPlaceholderText("What is the bbe score?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_23->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_23->height ()) / 2;
    ui->lineEdit_23->setGeometry(x, y + 100, 200, 35);
}
void editTextbook::createLineEdit24()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_24->setFont(lastNameFont);
    ui->lineEdit_24->setStyleSheet("color:#fff;");
    ui->lineEdit_24->setPlaceholderText("What is the bbe vote?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_24->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_24->height ()) / 2;
    ui->lineEdit_24->setGeometry(x+ 250, y + 100, 200, 35);
}
void editTextbook::createLineEdit25()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit_25->setFont(lastNameFont);
    ui->lineEdit_25->setStyleSheet("color:#fff;");
    ui->lineEdit_25->setPlaceholderText("What is the price?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_25->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_25->height ()) / 2;
    ui->lineEdit_25->setGeometry(x + 500, y + 100, 200, 35);
}

void editTextbook::createLineEdit26()
{
    QFont lastNameFont("Courier", 25, QFont::Bold);
    ui->lineEdit_26->setFont(lastNameFont);
    ui->lineEdit_26->setStyleSheet("color:#fff;");
    ui->lineEdit_26->setPlaceholderText("What is the Id?");
    //get screen size
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int x = (.9 * screenGeometry.width() - ui->lineEdit_26->width ()) / 2;
    int y = (.9 * screenGeometry.height() - ui->lineEdit_26->height ()) / 2;
    ui->lineEdit_26->setGeometry(x, y + 200, 200, 35);
}
void editTextbook::on_pushButton_clicked()
{

    string id = ui->lineEdit_26->text().toStdString();
    string series = ui->lineEdit_2->text().toStdString();
    string title = ui->lineEdit_3->text().toStdString();
    string author = ui->lineEdit_4->text().toStdString();
    string rating = ui->lineEdit_5->text().toStdString();
    string description = ui->lineEdit_6->text().toStdString();
    string  language = ui->lineEdit_7->text().toStdString();
    string isbn = ui->lineEdit_8->text().toStdString();
    string genres = ui->lineEdit_9->text().toStdString();
    string numRatings = ui->lineEdit_10->text().toStdString();
    string characters = ui->lineEdit_11->text().toStdString();
    string bookFormat = ui->lineEdit_12->text().toStdString();
    string edition = ui->lineEdit_13->text().toStdString();
    string pages = ui->lineEdit_14->text().toStdString();
    string publisher = ui->lineEdit_15->text().toStdString();
    string publishDate = ui->lineEdit_16->text().toStdString();
    string firstPublishDate = ui->lineEdit_17->text().toStdString();
    string awards = ui->lineEdit_18->text().toStdString();
    string ratingByStars = ui->lineEdit_19->text().toStdString();
    string likedPercent = ui->lineEdit_20->text().toStdString();
    string setting = ui->lineEdit_21->text().toStdString();
    string cvrImg = ui->lineEdit_22->text().toStdString();
    string bbeScores = ui->lineEdit_23->text().toStdString();
    string bbeVotes = ui->lineEdit_24->text().toStdString();
    string price = ui->lineEdit_25->text().toStdString();

    map<string, string> bookQuery;
    bookQuery.insert(pair<string, string>("book_type","0" ));
    bookQuery.insert(pair<string, string>("id", id));
    bookQuery.insert(pair<string, string>("series", series));
    bookQuery.insert(pair<string, string>("title", title));
    bookQuery.insert(pair<string, string>("author", author));
    bookQuery.insert(pair<string, string>("rating", rating));
    bookQuery.insert(pair<string, string>("description", description));
    bookQuery.insert(pair<string, string>("language",language ));
    bookQuery.insert(pair<string, string>("isbn", isbn));
    bookQuery.insert(pair<string, string>("genres", genres));
    bookQuery.insert(pair<string, string>("numRatings", numRatings));
    bookQuery.insert(pair<string, string>("characters", characters));
    bookQuery.insert(pair<string, string>("bookFormat", bookFormat));
    bookQuery.insert(pair<string, string>("edition",edition ));
    bookQuery.insert(pair<string, string>("pages", pages));
    bookQuery.insert(pair<string, string>("publisher", publisher));
    bookQuery.insert(pair<string, string>("publishDate", publishDate));
    bookQuery.insert(pair<string, string>("firstPublishDate", firstPublishDate));
    bookQuery.insert(pair<string, string>("awards", awards));
    bookQuery.insert(pair<string, string>("ratingsByStars",ratingByStars ));
    bookQuery.insert(pair<string, string>("likedPercent",likedPercent ));
    bookQuery.insert(pair<string, string>("setting",setting ));
    bookQuery.insert(pair<string, string>("coverImg",cvrImg ));
    bookQuery.insert(pair<string, string>("bbeScore", bbeScores));
    bookQuery.insert(pair<string, string>("bbeVotes", bbeVotes));
    bookQuery.insert(pair<string, string>("price",price ));
    BooksFactory b;
    int count = b.UpdateBook(bookQuery);
        if (count == 1)
        {
            QMessageBox success;
            QFont userFont("Courier", 15, QFont::Bold);
            success.setIcon(QMessageBox::Information);
            success.setFont(userFont);
            success.setText("Book has been edited!");
            success.setIcon(QMessageBox::Warning);
            success.setWindowTitle("Book Found");
            success.exec();
        }
        else
        {
            QMessageBox success;
            QFont userFont("Courier", 15, QFont::Bold);
            success.setIcon(QMessageBox::Information);
            success.setFont(userFont);
            success.setText("Book was not edited!");
            success.setIcon(QMessageBox::Warning);
            success.setWindowTitle("Book Not Found");
            success.exec();
        }

}

