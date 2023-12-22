#include "feline.h"

Feline::Feline(QObject *parent)
    : QObject{parent}
{

}

void Feline::speak()
{
    qInfo() << this << "meow";
}










