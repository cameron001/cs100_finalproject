#ifndef BOOKSFACTORY_H
#define BOOKSFACTORY_H
#include"TextBook.h"



namespace HighlanderBooks  {
class BooksFactory{


public:
    Book* getBooks()
    {
        if(bookType==0)
        {

            factPtr = new TextBook();
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
