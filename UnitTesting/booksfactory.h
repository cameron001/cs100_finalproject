#ifndef BOOKSFACTORY_H
#define BOOKSFACTORY_H
#include"TextBook.h"
#include"RefBook.h"
#include"journal.h"
#include <cctype>
#include<regex>


using namespace std;
namespace HighlanderBooks  {

class BooksFactory{


public:
    Book* getBooks()
    {
        if(bookType==0) factPtr = new TextBook();
        if(bookType==1) factPtr = new RefBook();
        if(bookType==2) factPtr = new journal();
        return factPtr ;
    }

    bool is_number(const std::string& s)
    {
        return !s.empty() && std::find_if(s.begin(),
            s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
    }


    BooksFactory(int bookType):factPtr(nullptr),bookType(bookType){ }


    BooksFactory(string bookTypeStr){
            std::transform(bookTypeStr.begin(), bookTypeStr.end(), bookTypeStr.begin(),
            [](unsigned char c){ return std::tolower(c); });

            factPtr = nullptr;
            if ( bookTypeStr.find("text") != string::npos) {
                bookType=0;
            }
            else if ( bookTypeStr.find("ref") != string::npos) {
                bookType=1;
            }
            else if ( bookTypeStr.find("jou") != string::npos) {
                bookType=2;
            }
    }

    BooksFactory():factPtr(nullptr){}

   int CreateBook(map<string, string>&fields){




         string sqlCols="insert into books (";
         string sqlVals=" values ( ";
         int i=1;

         for(std::map<string,string>::iterator iter = fields.begin(); iter != fields.end(); ++iter)
         {
            sqlCols+= iter->first+(i<(int)fields.size() ? "," : "");
            if(iter->first=="book_type" || iter->first=="numRatings" || iter->first=="pages" ||  iter->first=="likedPercent" || iter->first=="bbeScore" ||  iter->first=="bbeVotes" )
            {
                int intVal= atoi(iter->second.c_str());
                sqlVals+= to_string(intVal);
            }
            else
            {
                 string x= std::regex_replace(iter->second, std::regex("\""), "\"\"");

                 sqlVals+= "\""+x+"\"";
            }
             sqlVals+= ((i<(int)fields.size()) ? "," : "");
            if(iter->first=="book_type" && is_number(iter->second) && (atoi(iter->second.c_str())>=0 && atoi(iter->second.c_str())<=2) )
            {
              bookType = atoi(iter->second.c_str());
            }
            i++;
         }

         sqlCols+=" )";
         sqlVals+=" )";

         if(factPtr!=nullptr)
         {
             delete factPtr;
         }

         switch(bookType)
         {
            case 0:
             factPtr = new TextBook();
            break;
            case 1:
              factPtr = new RefBook();
            break;
            case 2:
             factPtr = new journal();
            break;

         }
        ;
         int success=0;
         if(factPtr!=nullptr)
         {
           success= factPtr->executeBookQuery(sqlCols+sqlVals);
         }
        return success;
     }




   int UpdateBook(map<string, string>&fields){
         string sqlCols="update books set ";
         int i=1;

         for(std::map<string,string>::iterator iter = fields.begin(); iter != fields.end(); ++iter)
         {

            if(iter->first!="id")
            {
                sqlCols+= iter->first+" = ";
                if(iter->first=="book_type" || iter->first=="numRatings" || iter->first=="pages" ||  iter->first=="likedPercent" || iter->first=="bbeScore" ||  iter->first=="bbeVotes" )
                {
                    int intVal= atoi(iter->second.c_str());
                    sqlCols+= to_string(intVal);
                }
                else
                {
                    string x= std::regex_replace(iter->second, std::regex("\""), "\"\"");
                    sqlCols+= "\""+x+"\"";
                }
                 sqlCols+= (((i+1)<(int)fields.size()) ? "," : "");
                 if(iter->first=="book_type" && is_number(iter->second) && (atoi(iter->second.c_str())>=0 && atoi(iter->second.c_str())<=2) )
                 {
                   bookType = atoi(iter->second.c_str());
                 }
                i++;
            }
         }

         sqlCols+=" where id="+fields.at("id");


         if(factPtr!=nullptr)
         {
             delete factPtr;
         }

         switch(bookType)
         {
            case 0:
             factPtr = new TextBook();
            break;
            case 1:
              factPtr = new RefBook();
            break;
            case 2:
             factPtr = new journal();
            break;

         }
        ;
         int success=0;
         if(factPtr!=nullptr)
         {
           success= factPtr->executeBookQuery(sqlCols);
         }
        return success;
     }

   vector<vector<Book*>> lookupBooks(string col, string findMe)
   {

      if(col=="genres" || col=="author" )
       {
           std::transform(findMe.begin(), findMe.end(), findMe.begin(),
               [](unsigned char c){ return std::tolower(c); });

             factPtr = new TextBook();
             string sql="select * from books where book_type=0 and lower("+col+") like \"%"+findMe+"%\"";
             vector<Book *> temp= factPtr->lookupBooks(sql);
             if (temp.size()>0)
             {
                 booksPtrs.push_back(temp);
             }
       }
       else if(col=="isbn")
      {
          factPtr = new TextBook();
          string sql="select * from books where book_type=0 and lower("+col+") = \""+findMe+"\"";
          vector<Book *> temp= factPtr->lookupBooks(sql);
          if (temp.size()>0)
          {
               booksPtrs.push_back(temp);
          }

          sql="select * from books where book_type=1 and lower("+col+") = \""+findMe+"\"";
          factPtr = new RefBook();
          vector<Book *> temp2= factPtr->lookupBooks(sql);
          if (temp2.size()>0)
          {
               booksPtrs.push_back(temp2);
          }

               sql="select * from books where book_type=2 and lower("+col+") = \""+findMe+"\"";
              factPtr = new RefBook();
              vector<Book *> temp3= factPtr->lookupBooks(sql);
              if (temp3.size()>0)
              {
                   booksPtrs.push_back(temp3);
              }

      }
       else
       {
           factPtr = new TextBook();
           string sql="select * from books where book_type=0 and lower("+col+") like \"%"+findMe+"%\"";
           vector<Book *> temp= factPtr->lookupBooks(sql);
           if (temp.size()>0)
           {
                booksPtrs.push_back(temp);
           }

           sql="select * from books where book_type=1 and lower("+col+") like \"%"+findMe+"%\"";
           factPtr = new RefBook();
           vector<Book *> temp2= factPtr->lookupBooks(sql);
           if (temp2.size()>0)
           {
                booksPtrs.push_back(temp2);
           }

           if(col!="title")
            {
                sql="select * from books where book_type=2 and lower("+col+") like \"%"+findMe+"%\"";
               factPtr = new RefBook();
               vector<Book *> temp3= factPtr->lookupBooks(sql);
               if (temp3.size()>0)
               {
                    booksPtrs.push_back(temp3);
               }
           }

       }

       return booksPtrs ;
   }

    ~BooksFactory(){
        delete factPtr;

        }


private:
        Book* factPtr;
        vector<vector<Book*>> booksPtrs;
        int bookType;

};
}

#endif // BOOKSFACTORY_H
