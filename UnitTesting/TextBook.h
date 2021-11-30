#ifndef TEXTBOOK_H
#define TEXTBOOK_H
#include "book.h"

 // TEXTBOOK_H
namespace HighlanderBooks  {

class TextBook : public Book{
public:

    TextBook(){
        int id=0;
        int bookType=0;
        string series="";
        string title="";
        string author="";
        string rating="";
        string description="";
        string language="";
        string isbn="";
        string genres="";
        int numRatings=0 ;
        string characters="";
        string bookFormat="";
        string edition="";
        int pages=0;
        string publisher="";
        string publishDate="";
        string firstPublishDate="";
        string awards="";
        string ratingsByStars="";
        int likedPercent=0;
        string setting="";
        string coverImg="";
        int bbeScore=0;
        int bbeVotes=0;
        double price=0;

    }
    virtual Book* getBookDetails(int id)
    {
        QSqlQuery query;
        query.exec("SELECT * from books where book_type=0 and id="+ QString::number(id));
        Book * books= new TextBook();
        while(query.next())
        {

            books->setID(query.value("id").toInt());
            books->setSeries(query.value("series").toString().toStdString());
            books->setTitle(query.value("title").toString().toStdString());
            books->setAuthor(query.value("author").toString().toStdString());
            books->setRating(query.value("rating").toString().toStdString());
            books->setDescription(query.value("description").toString().toStdString());
            books->setLanguage(query.value("language").toString().toStdString());
            books->setIsbn(query.value("isbn").toString().toStdString());
            books->setGenres(query.value("genres").toString().toStdString());
            books->setNumRatings(query.value("numRatings").toInt());
            books->setCharacters(query.value("characters").toString().toStdString());
            books->setBookFormat(query.value("bookFormat").toString().toStdString());
            books->setEdition(query.value("edition").toString().toStdString());
            books->setePages(query.value("pages").toInt());
            books->setPublisher(query.value("publisher").toString().toStdString());
            books->setPublishDate(query.value("publishDate").toString().toStdString());
            books->setFirstPublishDate(query.value("firstPublishDate").toString().toStdString());
            books->setAwards(query.value("awards").toString().toStdString());
            books->setRatingsByStars(query.value("ratingsByStars").toString().toStdString());
            books->setLikedPercent(query.value("likedPercent").toInt());
            books->setSetting(query.value("setting").toString().toStdString());
            books->setCoverImg(query.value("coverImg").toString().toStdString());
            books->setBbeScore(query.value("bbeScore").toInt());
            books->setBbeVotes(query.value("bbeVotes").toInt());
            books->setPrice(query.value("price").toDouble());
        }
        return books;
    }
    virtual vector<Book*> getBookObjects()
    {

        QSqlQuery query;
        query.exec("SELECT * from books where book_type=0 ");
        while(query.next())
        {
            Book * books= new TextBook();
            books->setID(query.value("id").toInt());
            books->setSeries(query.value("series").toString().toStdString());
            books->setTitle(query.value("title").toString().toStdString());
            books->setAuthor(query.value("author").toString().toStdString());
            books->setRating(query.value("rating").toString().toStdString());
            books->setDescription(query.value("description").toString().toStdString());
            books->setLanguage(query.value("language").toString().toStdString());
            books->setIsbn(query.value("isbn").toString().toStdString());
            books->setGenres(query.value("genres").toString().toStdString());
            books->setNumRatings(query.value("numRatings").toInt());
            books->setCharacters(query.value("characters").toString().toStdString());
            books->setBookFormat(query.value("bookFormat").toString().toStdString());
            books->setEdition(query.value("edition").toString().toStdString());
            books->setePages(query.value("pages").toInt());
            books->setPublisher(query.value("publisher").toString().toStdString());
            books->setPublishDate(query.value("publishDate").toString().toStdString());
            books->setFirstPublishDate(query.value("firstPublishDate").toString().toStdString());
            books->setAwards(query.value("awards").toString().toStdString());
            books->setRatingsByStars(query.value("ratingsByStars").toString().toStdString());
            books->setLikedPercent(query.value("likedPercent").toInt());
            books->setSetting(query.value("setting").toString().toStdString());
            books->setCoverImg(query.value("coverImg").toString().toStdString());
            books->setBbeScore(query.value("bbeScore").toInt());
            books->setBbeVotes(query.value("bbeVotes").toInt());
            books->setPrice(query.value("price").toDouble());

            allBooks.push_back(books);

        }

        return allBooks;


    }
      /*getters*/
    int getID(){return id;}
    int getBookType(){return 0;}
    string getSeries(){return series;}
    string getTitle(){return title;}
    string getAuthor(){return author;}
    string getRating(){return rating;}
    string getDescription(){return description;}
    string getLanguage(){return language;}
    string getIsbn(){return isbn;}
    string getGenres(){return genres;}
    int getNumRatings(){return numRatings;}
    string getCharacters(){return characters;}
    string getBookFormat(){return bookFormat;}
    string getEdition(){return edition;}
    int getePages(){return pages;}
    string getPublisher(){return publisher;}
    string getPublishDate(){return publishDate;}
    string getFirstPublishDate(){return firstPublishDate;}
    string getAwards(){return awards;}
    string getRatingsByStars(){return ratingsByStars;}
    int getLikedPercent(){return likedPercent;}
    string getSetting(){return setting;}
    int getBbeScore(){return bbeScore;}
    int getBbeVotes(){return bbeVotes;}
    string getCoverImg(){return coverImg;}
    double getPrice(){return price;}

    /*setters*/
    void setID(int id_){id= id_;}
    void setSeries(string ser){series = ser;}
    void setTitle(string tit){ title= tit;}
    void setAuthor(string  auth){ author=auth;}
    void setRating(string rate){rating=rate;}
    void setDescription(string des){description= des;}
    void setLanguage(string lang){language= lang;}
    void setIsbn(string isbn_){isbn = isbn_;}
    void setGenres(string gen){genres = gen;}
    void setNumRatings(int numR){numRatings = numR;}
    void setCharacters(string ch){characters = ch;}
    void setBookFormat(string formate){bookFormat = formate;}
    void setEdition(string ed){edition = ed;}
    void setePages(int pa){pages = pa;}
    void setPublisher(string pub){publisher = pub;}
    void setPublishDate(string pubD){publishDate = pubD;}
    void setFirstPublishDate(string fPubD){firstPublishDate=fPubD;}
    void setAwards(string awd){awards = awd;}
    void setRatingsByStars(string stars){ratingsByStars=stars;}
    void setLikedPercent(int prec){likedPercent=prec;}
    void setSetting(string st){ setting=st;}
    void setBbeScore(int bscore){bbeScore=bscore;}
    void setBbeVotes(int bvotes){bbeVotes=bvotes;}
    void setCoverImg(string cover){ coverImg=cover;}
    void setPrice(double pr){ price=pr;}

    virtual int executeBookQuery(string sql)
     {
        QSqlQuery query;
        qDebug()<<QString::fromStdString(sql);
        return query.exec(QString::fromStdString(sql));

     }

    virtual vector<Book*> lookupBooks(string sql){
        QSqlQuery query;
        query.exec(QString::fromStdString(sql));
        while(query.next())
        {
            Book * books= new TextBook();
            books->setID(query.value("id").toInt());
            books->setSeries(query.value("series").toString().toStdString());
            books->setTitle(query.value("title").toString().toStdString());
            books->setAuthor(query.value("author").toString().toStdString());
            books->setRating(query.value("rating").toString().toStdString());
            books->setDescription(query.value("description").toString().toStdString());
            books->setLanguage(query.value("language").toString().toStdString());
            books->setIsbn(query.value("isbn").toString().toStdString());
            books->setGenres(query.value("genres").toString().toStdString());
            books->setNumRatings(query.value("numRatings").toInt());
            books->setCharacters(query.value("characters").toString().toStdString());
            books->setBookFormat(query.value("bookFormat").toString().toStdString());
            books->setEdition(query.value("edition").toString().toStdString());
            books->setePages(query.value("pages").toInt());
            books->setPublisher(query.value("publisher").toString().toStdString());
            books->setPublishDate(query.value("publishDate").toString().toStdString());
            books->setFirstPublishDate(query.value("firstPublishDate").toString().toStdString());
            books->setAwards(query.value("awards").toString().toStdString());
            books->setRatingsByStars(query.value("ratingsByStars").toString().toStdString());
            books->setLikedPercent(query.value("likedPercent").toInt());
            books->setSetting(query.value("setting").toString().toStdString());
            books->setCoverImg(query.value("coverImg").toString().toStdString());
            books->setBbeScore(query.value("bbeScore").toInt());
            books->setBbeVotes(query.value("bbeVotes").toInt());
            books->setPrice(query.value("price").toDouble());

            allBooks.push_back(books);

        }

        return allBooks;

    }

     ~TextBook(){
         for (int i = 0; i < allBooks.size(); ++i) {
             delete  allBooks[i];
         }
         allBooks.clear();
     }

private:
    int id;
    vector<Book*> allBooks;
    string series;
    string title;
    string author;
    string rating;
    string description;
    string language;
    string isbn;
    string genres;
    int numRatings ;
    string characters;
    string bookFormat;
    string edition;
    int pages;
    string publisher;
    string publishDate;
    string firstPublishDate;
    string awards;
    string ratingsByStars;
    int likedPercent;
    string setting;
    string coverImg;
    int bbeScore;
    int bbeVotes;
    double price;
    int bookType;

};


}
#endif
