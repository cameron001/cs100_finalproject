#ifndef USER_H
#define USER_H

#include <QObject>
#include <QVector>
#include <QString>
namespace HighlanderBooks  {
class user : public QObject
{
    Q_OBJECT

    QString lastName;
    QString username;
    QString password;






public:
    static int userId;
    static  QString firstName;
    static QString studentID;
    static QString userType;
    static int isLibrarian;
    explicit user(QObject *parent = nullptr);
    static QString getFirstName() ;
    QString getLastName() const ;
    QString getUsername() const;
    QString getPassword() const;

    static  QString getStudentID();
    static  QString getUserType();
    static int getisLibrarian();

    static int getUserId() ;


    void setFirstName(const QString& value);
    void setLastName(const QString& value);
    void setUsername(const QString& value);
    void setPassword(const QString& value);
    void setStudentID( QString& value);
    void setisLibrarian(int& value);
    void setUserType( QString& value);
    static void setUserId(int value);
    static int logout();





};}

#endif // USER_H
