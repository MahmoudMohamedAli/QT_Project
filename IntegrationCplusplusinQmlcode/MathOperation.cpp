#include "MathOperation.h"
#include<QDebug>
MathOperation::MathOperation(QObject* parent) {}

int MathOperation::addop(int x, int y)
{
    qDebug() << "Hello" << x + y;
    return x+y;
}

int MathOperation::subtractop(int x, int y)
{
    return x > y ? x-y : y-x;
}

int MathOperation::multipleop(int x, int y)
{
    return x * y;

}

int MathOperation::divisionop(int x, int y)
{
    if(y == 0)
    {
        throw "division by zero";
    }
    return  x / y;
}
