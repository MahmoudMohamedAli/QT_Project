#ifndef BACKEND_H
#define BACKEND_H

#include <QObject>
#include<QtQml>
#include <QRandomGenerator>

class BackEnd : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int randnum READ randnumber WRITE setRandnumber NOTIFY randnumChanged)
    QML_ELEMENT
public:
    explicit BackEnd(QObject *parent = nullptr);
    Q_INVOKABLE void generate(int min, int max);

    void setRandnumber(int newRandnumber);

    int randnumber() const;

signals:
   void randnumChanged();

private:
    int _randnumber;
};

#endif // BACKEND_H
