#include "radio.h"

Radio::Radio(QObject *parent)
    : QObject{parent}
{

}

void Radio::listen(int ch, QString n, QString message)
{
    qInfo() << ch << "-"<< n << "-" << message;
}
