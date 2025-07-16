#include "ApplicationWindow.h"
#include <QDebug>
ApplicationWindow::ApplicationWindow(QString title, QObject *parent) : QObject{parent} , title(title)
{
    qDebug()<< "Hello App Window Created" << title;
}

ApplicationWindow::~ApplicationWindow()
{
    qDebug()<< "Application Window destroyed " << title;
}
