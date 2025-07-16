#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <MathOperation.h>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("IntegrationCplusplusinQmlcode", "Main");

    return app.exec();
}
