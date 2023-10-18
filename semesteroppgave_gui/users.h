#ifndef USERS_H
#define USERS_H
#include <QObject>

//user class, makes obj of username and password
class users : public QObject
{
    Q_OBJECT
public:
    explicit users(QObject *parent = nullptr);
    users(QString newUser,QString newPass);

    Q_INVOKABLE QString getUser();
    QString getPass();

private:
    QString user;
    QString password;

public slots:
    void setUser(QString newUser);
    void setPass(QString newPass);
};

#endif // USERS_H
