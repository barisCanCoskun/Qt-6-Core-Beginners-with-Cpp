#include "agecalc.h"

int AgeCalc::getAge() const
{
    return age;
}

void AgeCalc::setAge(int newAge)
{
    age = newAge;
}

QString AgeCalc::getName() const
{
    return name;
}

void AgeCalc::setName(const QString &newName)
{
    name = newName;
}

int AgeCalc::humanYears() const
{
    return age;
}

int AgeCalc::dogYears() const
{
    return age * 7;
}

int AgeCalc::catYears() const
{
    return age * 9;
}

AgeCalc::AgeCalc(QObject *parent)
    : QObject{parent}
{

}



