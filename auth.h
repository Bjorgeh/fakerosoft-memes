#ifndef AUTH_H
#define AUTH_H
#include "users.h"
#include <QObject>

class auth : public QObject
{
    Q_OBJECT
public:
    explicit auth(QObject *parent = nullptr);

    //user "database"
    Q_INVOKABLE QVector<users*> userList;

    //authorrizes user
    Q_INVOKABLE bool authorize(users* userObj);

    Q_INVOKABLE QVector<QString> getAllUsers();

private:
    //bool variabel changes if user exist in database.
    bool userExist{false};

public slots:
    bool legitUser();

};

#endif // AUTH_H
