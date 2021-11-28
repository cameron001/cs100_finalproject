#ifndef BOOK_H
#define BOOK_H
#include<vector>
#include<string>
#include"database.h"
#include<iostream>
#include <QString>
using namespace std;

namespace HighlanderBooks  {

/**
 * @brief The books class
 * Abstract class
 */
class Book{

public:
    virtual vector<Book*> getBookObjects()=0;
    virtual Book* getBookDetails(int)=0;
    virtual int getID()=0;
    virtual int getBookType()=0;
    virtual string getSeries()=0;
    virtual string getTitle()=0;
    virtual string getAuthor()=0;
    virtual string getRating()=0;
    virtual string getDescription()=0;
    virtual string getLanguage()=0;
    virtual string getIsbn()=0;
    virtual string getGenres()=0;
    virtual int getNumRatings()=0;
    virtual string getCharacters()=0;
    virtual string getBookFormat()=0;
    virtual string getEdition()=0;
    virtual int getePages()=0;
    virtual string getPublisher()=0;
    virtual string getPublishDate()=0;
    virtual string getFirstPublishDate()=0;
    virtual string getAwards()=0;
    virtual string getRatingsByStars()=0;
    virtual int getLikedPercent()=0;
    virtual string getSetting()=0;
    virtual int getBbeScore()=0;
    virtual int getBbeVotes()=0;
    virtual string getCoverImg()=0;
    virtual double getPrice()=0;
    virtual ~Book()=default;


    virtual void setID(int id_)=0;
    virtual void setSeries(string ser)=0;
    virtual void setTitle(string tit)=0;
    virtual void setAuthor(string  auth)=0;
    virtual void setRating(string rate)=0;
    virtual void setDescription(string des)=0;
    virtual void setLanguage(string lang)=0;
    virtual void setIsbn(string isbn_)=0;
    virtual void setGenres(string gen)=0;
    virtual void setNumRatings(int numR)=0;
    virtual void setCharacters(string ch)=0;
    virtual void setBookFormat(string formate)=0;
    virtual void setEdition(string ed)=0;
    virtual void setePages(int pa)=0;
    virtual void setPublisher(string pub)=0;
    virtual void setPublishDate(string pubD)=0;
    virtual void setFirstPublishDate(string fPubD)=0;
    virtual void setAwards(string awd)=0;
    virtual void setRatingsByStars(string stars)=0;
    virtual void setLikedPercent(int prec)=0;
    virtual void setSetting(string st)=0;
    virtual void setBbeScore(int bscore)=0;
    virtual void setBbeVotes(int bvotes)=0;
    virtual void setCoverImg(string cover)=0;
     virtual void setPrice(double pr)=0;

//    virtual Book* getBook(long ISBN);
//    virtual string createBook(Book*);
//    virtual string updateBook(long ISBN);
//    virtual string deleteBook(long ISBN);
};





}
#endif // BOOK_H
