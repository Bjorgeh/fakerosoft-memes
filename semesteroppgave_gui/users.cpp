#include "users.h"
#include "qdebug.h"

users::users(QObject *parent)
    : QObject{parent}
{

}
//Adds new user with name and pw
users::users(QString newUser, QString newPass)
{
    user = newUser;
    password = newPass;
}

QString users::getUser()
{
    return user;
}

QString users::getPass()
{
    return password;
}

//Sets new username to obj
void users::setUser(QString newUser)
{
    user = newUser;
    qInfo() << "username Set.";
}

//sets new password to obj
void users::setPass(QString newPass)
{
    password = newPass;
    qInfo() << "pass Set.";
}

