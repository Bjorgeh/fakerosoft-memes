#include "users.h"
#include "qdebug.h"

users::users(QObject *parent)
    : QObject{parent}
{

}
//Adds new user with name and pw
users::users(QString newUser, QString newPass, int userCo)
{
    user = newUser;
    password = newPass;
    userCode = userCo;
}

QString users::getUser()
{
    return user;
}

QString users::getPass()
{
    return password;
}

int users::getUserCode()
{
    return userCode;
}

int users::setCode(int code)
{
    userCode = code;
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

