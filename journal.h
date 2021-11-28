#ifndef journal_H
#define journal_H
#include"book.h"


namespace HighlanderBooks  {

class journal:public Book{
public:

    journal(){
        int id=0;
        int bookType=2;
        string title="";
        string isbn="";
        int pages=0;
        string publisher="";
        string coverImg="";
        double price=0;
        string PublishDate="";

    }
    virtual Book* getBookDetails(int id)
    {
        QSqlQuery query;
        query.exec("SELECT * from books where book_type=2 and id="+ QString::number(id));
        Book * books= new journal();
        while(query.next())
        {
            books->setID(query.value("id").toInt());
            books->setTitle(query.value("title").toString().toStdString());
            books->setAuthor(query.value("author").toString().toStdString());
            books->setIsbn(query.value("isbn").toString().toStdString());
            books->setePages(query.value("pages").toInt());
            books->setPublisher(query.value("publisher").toString().toStdString());
            books->setPublishDate(query.value("publishDate").toString().toStdString());
            books->setCoverImg(query.value("coverImg").toString().toStdString());
            books->setPrice(query.value("price").toDouble());
        }
        return books;
    }
    virtual vector<Book*> getBookObjects()
    {

        QSqlQuery query;
        query.exec("SELECT * from books where book_type=2 ");
        while(query.next())
        {
            Book * books= new journal();
            books->setID(query.value("id").toInt());
            books->setTitle(query.value("title").toString().toStdString());
            books->setAuthor(query.value("author").toString().toStdString());
            books->setIsbn(query.value("isbn").toString().toStdString());
            books->setePages(query.value("pages").toInt());
            books->setPublisher(query.value("publisher").toString().toStdString());
            books->setPublishDate(query.value("publishDate").toString().toStdString());
            books->setCoverImg(query.value("coverImg").toString().toStdString());
            books->setPrice(query.value("price").toDouble());

            allBooks.push_back(books);

        }

        return allBooks;


    }
      /*getters*/
    int getID(){return id;}
    int getBookType(){return 2;}
    string getSeries(){return "";}
    string getTitle(){return title;}
    string getAuthor(){return "";}
    string getRating(){return "";}
    string getDescription(){return "";}
    string getLanguage(){return "";}
    string getIsbn(){return isbn;}
    string getGenres(){return "";}
    int getNumRatings(){return 0;}
    string getCharacters(){return "";}
    string getBookFormat(){return "";}
    string getEdition(){return "";}
    int getePages(){return pages;}
    string getPublisher(){return publisher;}
    string getPublishDate(){return PublishDate;}
    string getFirstPublishDate(){return "";}
    string getAwards(){return "";}
    string getRatingsByStars(){return "";}
    int getLikedPercent(){return 0;}
    string getSetting(){return "";}
    int getBbeScore(){return 0;}
    int getBbeVotes(){return 0;}
    string getCoverImg(){return coverImg;}
    double getPrice(){return price;}

    /*setters*/
    void setID(int id_){id= id_;}
    void setSeries(string ser){}
    void setTitle(string tit){ title= tit;}
    void setAuthor(string  auth){ }
    void setRating(string rate){}
    void setDescription(string des){}
    void setLanguage(string lang){}
    void setIsbn(string isbn_){isbn = isbn_;}
    void setGenres(string gen){}
    void setNumRatings(int numR){}
    void setCharacters(string ch){}
    void setBookFormat(string formate){}
    void setEdition(string ed){}
    void setePages(int pa){pages = pa;}
    void setPublisher(string pub){publisher = pub;}
    void setPublishDate(string pubD){PublishDate=pubD;}
    void setFirstPublishDate(string fPubD){}
    void setAwards(string awd){}
    void setRatingsByStars(string stars){}
    void setLikedPercent(int prec){}
    void setSetting(string st){ }
    void setBbeScore(int bscore){}
    void setBbeVotes(int bvotes){}
    void setCoverImg(string cover){ coverImg=cover;}
    void setPrice(double pr){ price=pr;}


    virtual int executeBookQuery(string sql)
     {
        QSqlQuery query;
        return query.exec(QString::fromStdString(sql));

     }

    virtual vector<Book*> lookupBooks(string sql){
        QSqlQuery query;
        query.exec(QString::fromStdString(sql));
        while(query.next())
        {
            Book * books= new journal();
            books->setID(query.value("id").toInt());
            books->setTitle(query.value("title").toString().toStdString());
            books->setAuthor(query.value("author").toString().toStdString());
            books->setIsbn(query.value("isbn").toString().toStdString());
            books->setePages(query.value("pages").toInt());
            books->setPublisher(query.value("publisher").toString().toStdString());
            books->setPublishDate(query.value("publishDate").toString().toStdString());
            books->setCoverImg(query.value("coverImg").toString().toStdString());
            books->setPrice(query.value("price").toDouble());

            allBooks.push_back(books);

        }

        return allBooks;

    }

     ~journal(){
         for (int i = 0; i < allBooks.size(); ++i) {
             delete  allBooks[i];
         }
         allBooks.clear();
     }

private:
    int id;
    vector<Book*> allBooks;
    string title;
    string isbn;
    string PublishDate;
    int pages;
    string publisher;
    string coverImg;
    double price;
    int bookType;

};

}
#endif // journal_H

