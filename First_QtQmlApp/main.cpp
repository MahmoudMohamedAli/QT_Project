#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "ApplicationWindow.h"
#include <QTimer>
#include "Sender.h"
#include "receiver.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
/*
    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("First_QtQmlApp", "Main");


    ApplicationWindow root("Root Window");
    ApplicationWindow parent1("parent1", &root);
    ApplicationWindow parent2("parent2", &root);
    for(int i =0;  i < 2 ; i++)
    {
        ApplicationWindow child1(QString("child %1 Ctreated").arg(i));
        ApplicationWindow child2(QString("child %1 Ctreated").arg(i));

    }

    QTimer::singleShot(10000,[&](){
        //parent1.deleteLater();
        app.quit();
    });
*/
    Sender *sendobj = new Sender();
    receiver *receiveobj = new receiver();

    QObject::connect(sendobj, &Sender::emitaction, receiveobj, &receiver::actionPeformed);

    emit sendobj->emitaction();

    return app.exec();
}
