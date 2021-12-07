#include "user.h"
int HighlanderBooks::user::userId=0;
QString HighlanderBooks::user::firstName="";
QString HighlanderBooks::user::studentID="";
QString HighlanderBooks::user::userType="";
int HighlanderBooks::user::isLibrarian=0;
int HighlanderBooks::user::isFaculty=0;

namespace HighlanderBooks {

user::user(QObject *parent) : QObject(parent) {}

QString user::getFirstName()
{
    return firstName;
}

QString user::getLastName() const
{
    return lastName;
}

QString user::getUsername() const
{
    return username;
}

QString user::getPassword() const
{
    return password;
}

int user::getUserId()
{
    return userId;
}

void user::setFirstName(const QString& value)
{
    //check if value != the first name
    firstName = value;
}

void user::setLastName(const QString& value)
{
    lastName = value;
}

void user::setUsername(const QString& value)
{
    username = value;
}

void user::setPassword(const QString& value)
{
    password = value;
}

void user::setUserId(int value)
{
    userId = value;
}

QString user::getStudentID(){ return studentID;}
QString user::getUserType(){return userType;}
int user::getisLibrarian(){return isLibrarian;}
int user::getisFaculty(){return isFaculty;}

void user::setStudentID(QString& value){studentID = value;}
void user::setisLibrarian( int& value){isLibrarian=value;}
void user::setisFaculty( int& value){isFaculty=value;}
void user::setUserType( QString& value){userType=value;}
}
