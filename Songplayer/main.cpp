#include <QGuiApplication>
#include <QIcon>
#include <QQmlApplicationEngine>
#include<PlayerController.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    app.setWindowIcon(QIcon(":/Songplayer/assets/icons/app_icon.ico"));
    QQmlApplicationEngine engine;
     const QUrl url(u"qrc:/Songplayer/Main.qml"_qs);

    PlayerController *playerController = new PlayerController(&app);
    qmlRegisterSingletonInstance("com.company.PlayerController", 1, 0, "PlayerController", playerController);

     QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);

    engine.loadFromModule("Songplayer", "Main");

    return app.exec();
}
