#ifndef BOOKSFACTORY_H
#define BOOKSFACTORY_H
#include"TextBook.h"
#include"RefBook.h"



namespace HighlanderBooks  {
class BooksFactory{


public:
    Book* getBooks()
    {
        if(bookType==0)
        {

            factPtr = new TextBook();
        }

        if(bookType==1)
        {

            factPtr = new RefBook();
        }

        return factPtr ;
    }


    BooksFactory(int bookType):factPtr(nullptr),bookType(bookType){ }
    ~BooksFactory(){
        delete factPtr;
        }


private:
        Book* factPtr;
        int bookType;

};
}

#endif // BOOKSFACTORY_H
