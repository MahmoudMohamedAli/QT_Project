#include "receiver.h"

receiver::receiver(QObject *parent)
    : QObject{parent}
{

}

void receiver::actionPeformed()
{
    qDebug()<<"Hello the functions executed";
}
