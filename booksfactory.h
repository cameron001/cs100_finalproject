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
//    QVector<Book*> getTotalBooks()
//    {
//        QSqlQuery query;
//        int book_type = 0;
//        query.prepare("SELCT * FROM books WHERE book_type = ? ");
//        query.addBindValue(book_type);
//        if (!query.exec())
//        {
//            qDebug() << query.lastError();
//        }
//        else
//        {
//            int count = 0;
//            while(query.next())
//            {
//                count++;
//                int id = query.value(0).toInt();
//                book_type = query.value(1).toInt();
//                QString series = query.value(2).toString();
//                QString title = query.value(3).toString();
//                QString author = query.value(4).toString();
//                if (book_type == 0)
//                {
//                    //create new book
//                    Book* t_book = new TextBook();
//                    t_book->setID(query.value("id").toInt());
//                    t_book->setSeries(query.value("series").toString().toStdString());
//                    t_book->setTitle(query.value("id").toString().toStdString());
//                    t_book->setAuthor(query.value("author").toString().toStdString());
//                    totalBooks.push_back(t_book);
//                }
//                if (book_type == 1)
//                {
//                    Book*
//                }
//            }
//            if (count < 1)
//            {
//                QMessageBox error;
//                error.setText("Error! Username or password is incorrect");
//                error.setIcon(QMessageBox::Warning);
//                error.setWindowTitle("Invalid user");
//                error.exec();
//            }
//        }
//        if (bookType == 1)
//        {
//            totalBooks.push_back(factPtr->getBookType());
//        }
//        if (bookType == 2)
//        {
//            totalBooks.push_back(2);
//        }
//       return totalBooks;
//    }


    BooksFactory(int bookType):factPtr(nullptr),bookType(bookType){ }
    ~BooksFactory(){
        delete factPtr;
        }


private:
        Book* factPtr;
        QVector<Book*> totalBooks;
        int bookType;

};
}

#endif // BOOKSFACTORY_H
