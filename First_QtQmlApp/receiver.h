#ifndef RECEIVER_H
#define RECEIVER_H

#include <QObject>
#include <QDebug>
class receiver : public QObject
{
    Q_OBJECT
public:
    explicit receiver(QObject *parent = nullptr);

signals:

public slots:
    void actionPeformed();

};

#endif // RECEIVER_H
