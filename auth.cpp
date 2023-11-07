#include "auth.h"

auth::auth(QObject *parent)
    : QObject{parent}
{

}

//Returns true/false
bool auth::authorize(users *userObj)
{
    //Loops trough UserList and checks if objects match login info
    for(int i{0}; i < userList.length(); i++){
        if(userList.at(i)->getUser() == userObj->getUser() && userList.at(i)->getPass() == userObj->getPass()){
            userExist = true;
            userObj->setCode(userList.at(i)->getUserCode());
            return true;
        }
    }

    //Returns false if user not legit
    return userExist;
}

//Returns list of all users with access codes.
QVector<QString> auth::getAllUsers()
{
    QVector<QString> data;
    for(int i{0}; i<userList.length(); i++){
        data << userList.at(i)->getUser() << QString::number(userList.at(i)->getUserCode());
    }
    return data;
}

//Returns true or false
bool auth::legitUser()
{
    return userExist;
}

