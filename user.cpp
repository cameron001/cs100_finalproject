#include "user.h"

user::user(QObject *parent) : QObject(parent) {}

QString user::getFirstName() const
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

int user::getUserId() const
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
