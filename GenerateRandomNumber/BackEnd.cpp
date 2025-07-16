#include "BackEnd.h"

BackEnd::BackEnd(QObject *parent)
    : QObject{parent}
{}

void BackEnd::generate(int min, int max)
{
    _randnumber = QRandomGenerator::global()->bounded(min , max);  // 0–99
    emit randnumChanged();
}

void BackEnd::setRandnumber(int newRandnumber)
{
    _randnumber = newRandnumber;
    emit randnumChanged();
}

int BackEnd::randnumber() const
{
    return _randnumber;
}
