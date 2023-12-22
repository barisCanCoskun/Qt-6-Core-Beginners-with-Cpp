#include "animal.h"

int Animal::count{};

Animal::Animal(QObject *parent, QString n)
    : QObject{parent}, name{n}{
    ++count;
}

Animal::~Animal()
{
    --count;
}

QString Animal::get_name()
{
    qInfo() << "name: " + name;
    return name;
}

int Animal::get_num_animals()
{
    return count;
}

















