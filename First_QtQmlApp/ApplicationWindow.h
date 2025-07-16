#ifndef APPLICATIONWINDOW_H
#define APPLICATIONWINDOW_H

#include <QObject>

class ApplicationWindow : public QObject
{
    Q_OBJECT
public:
    explicit ApplicationWindow(QString title, QObject *parent = nullptr);
    ~ApplicationWindow();

signals:

private:
    QString title;
};

#endif // APPLICATIONWINDOW_H
