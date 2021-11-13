#ifndef USER_H
#define USER_H

#include <QObject>
#include <QVector>
#include <QString>

class user : public QObject
{
    Q_OBJECT
    QString firstName;
    QString lastName;
    QString username;
    QString password;
    int userId;


public:
    explicit user(QObject *parent = nullptr);
    QString getFirstName() const;
    QString getLastName() const;
    QString getUsername() const;
    QString getPassword() const;
    int getUserId() const;

public slots:
    void setFirstName(const QString& value);
    void setLastName(const QString& value);
    void setUsername(const QString& value);
    void setPassword(const QString& value);
    void setUserId(int value);

};

#endif // USER_H
