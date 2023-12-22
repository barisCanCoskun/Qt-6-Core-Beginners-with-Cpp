#include "station.h"

Station::Station(QObject *parent, int ch, QString n)
    : QObject{parent}, channel{ch}, name{n}
{

}

void Station::broadcast(QString message)
{
    emit send(channel, name, message);
}
