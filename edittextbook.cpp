#include "edittextbook.h"
#include "ui_edittextbook.h"

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
    QScreen *screen = QGuiApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int height = screenGeometry.height() * 9;
    int width = screenGeometry.width() * 9;
    //    //Grab screen size for this computer
    QSize newSize(width, height);
    setGeometry(0, 0, height, width);
    //    //Set Screensize
}

void editTextbook::createLineEdit1()
{
    QFont lastNameFont("Courier", 10, QFont::Bold);
    ui->lineEdit->setFont(lastNameFont);
    ui->lineEdit->setStyleSheet("color: black");
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
    ui->lineEdit_2->setStyleSheet("color: black");
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
    ui->lineEdit_3->setStyleSheet("color: black");
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
    ui->lineEdit_4->setStyleSheet("color: black");
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
    ui->lineEdit_5->setStyleSheet("color: black");
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
    ui->lineEdit_6->setStyleSheet("color: black");
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
    ui->lineEdit_7->setStyleSheet("color: black");
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
    ui->lineEdit_8->setStyleSheet("color: black");
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
    ui->lineEdit_9->setStyleSheet("color: black");
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
    ui->lineEdit_10->setStyleSheet("color: black");
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
    ui->lineEdit_11->setStyleSheet("color: black");
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
    ui->lineEdit_12->setStyleSheet("color: black");
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
    ui->lineEdit_13->setStyleSheet("color: black");
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
    ui->lineEdit_14->setStyleSheet("color: black");
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
    ui->lineEdit_15->setStyleSheet("color: black");
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
    ui->lineEdit_16->setStyleSheet("color: black");
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
    ui->lineEdit_17->setStyleSheet("color: black");
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
    ui->lineEdit_18->setStyleSheet("color: black");
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
    ui->lineEdit_19->setStyleSheet("color: black");
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
    ui->lineEdit_20->setStyleSheet("color: black");
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
    ui->lineEdit_21->setStyleSheet("color: black");
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
    ui->lineEdit_22->setStyleSheet("color: black");
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
    ui->lineEdit_23->setStyleSheet("color: black");
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
    ui->lineEdit_24->setStyleSheet("color: black");
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
    ui->lineEdit_25->setStyleSheet("color: black");
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
    ui->lineEdit_26->setStyleSheet("color: black");
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
    //int id = ui->lineEdit->text().toInt();
    int bookType = ui->lineEdit->text().toInt();
    QString series = ui->lineEdit_2->text();
    QString title = ui->lineEdit_3->text();
    QString author = ui->lineEdit_4->text();
    QString rating = ui->lineEdit_5->text();
    QString description = ui->lineEdit_6->text();
    QString  language = ui->lineEdit_7->text();
    QString isbn = ui->lineEdit_8->text();
    QString genres = ui->lineEdit_9->text();
    int numRatings = ui->lineEdit_10->text().toInt();
    QString characters = ui->lineEdit_11->text();
    QString bookFormat = ui->lineEdit_12->text();
    QString edition = ui->lineEdit_13->text();
    int pages = ui->lineEdit_14->text().toInt();
    QString publisher = ui->lineEdit_15->text();
    QString publishDate = ui->lineEdit_16->text();
    QString firstPublishDate = ui->lineEdit_17->text();
    QString awards = ui->lineEdit_18->text();
    QString ratingByStars = ui->lineEdit_19->text();
    int likedPercent = ui->lineEdit_20->text().toInt();
    QString setting = ui->lineEdit_21->text();
    QString cvrImg = ui->lineEdit_22->text();
    int bbeScores = ui->lineEdit_23->text().toInt();
    int bbeVotes = ui->lineEdit_24->text().toInt();
    QString price = ui->lineEdit_25->text();
    int id = ui->lineEdit_26->text().toInt();
    QSqlQuery query;
    query.prepare("UPDATE books SET book_type = ?, series = ?, title = ?, author = ?, rating = ?, description = ?, language = ?, "
                  "isbn = ?, genres = ?, numRatings = ?, characters = ?, bookFormat = ?, edition = ?, pages = ?, publisher = ?, "
                  "publishDate = ?, firstPublishDate = ?, awards = ?, ratingsByStars = ?, likedPercent = ?, setting = ?, coverImg = ?, "
                  "bbeScore = ?, bbeVotes = ?, price = ? WHERE id  = ? ");
    query.addBindValue(bookType);
    query.addBindValue(series);
    query.addBindValue(title);
    query.addBindValue(author);
    query.addBindValue(rating);
    query.addBindValue(description);
    query.addBindValue(language);
    query.addBindValue(isbn);
    query.addBindValue(genres);
    query.addBindValue(numRatings);
    query.addBindValue(characters);
    query.addBindValue(bookFormat);
    query.addBindValue(edition);
    query.addBindValue(pages);
    query.addBindValue(publisher);
    query.addBindValue(publishDate);
    query.addBindValue(firstPublishDate);
    query.addBindValue(awards);
    query.addBindValue(ratingByStars);
    query.addBindValue(likedPercent);
    query.addBindValue(setting);
    query.addBindValue(cvrImg);
    query.addBindValue(bbeScores);
    query.addBindValue(bbeVotes);
    query.addBindValue(price);
    query.addBindValue(id);
    if (!query.exec())
    {
        qDebug() << "book not in db\n";
        qDebug() << query.lastError();
    }
    else
    {
        int count = 0;
        while (query.next())
        {
            count++;
        }
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
}

