#ifndef MATHOPERATION_H
#define MATHOPERATION_H
#include<QtQml>
class MathOperation : public QObject
{
    Q_OBJECT
    QML_ELEMENT
public:
    explicit MathOperation(QObject* parent = nullptr);
    Q_INVOKABLE int addop(int x,int y);
    Q_INVOKABLE int subtractop(int x,int y);
    Q_INVOKABLE int multipleop(int x,int y);
    Q_INVOKABLE int divisionop(int x,int y);
};

#endif // MATHOPERATION_H
