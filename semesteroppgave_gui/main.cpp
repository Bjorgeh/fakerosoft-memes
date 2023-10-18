#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "auth.h"
#include <QQmlContext>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    //Authorization object
    auth* authorizate = new auth();

    //makes obj for qml useage
    users* userLogin = new users();

    //Adds new users and adds to the userList vector.
    users* admin = new users("admin@memes.com","adminPassword");
    authorizate->userList.push_back(admin);
    users* teacher = new users("teacher@memes.com","teacherPassword");
    authorizate->userList.push_back(teacher);
    users* student = new users("student@memes.com","studentPassword");
    authorizate->userList.push_back(student);

/*
    //Auth object, this will return true/false from obj->legitUser()
    authorizate->authorize(admin, userList);
*/

    engine.rootContext()->setContextProperty("authUser", authorizate);
    engine.rootContext()->setContextProperty("userLogin", userLogin);

    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed,
        &app, []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("semesteroppgave_gui", "Main");



    return app.exec();
}
