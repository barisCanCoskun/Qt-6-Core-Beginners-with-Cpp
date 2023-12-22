#include <QCoreApplication>
#include <QDebug>
#include "agecalc.h"

void print(const AgeCalc &calc){
    qInfo() << calc.getName() << "Human years:" << calc.humanYears();
    qInfo() << calc.getName() << "Dog years:" << calc.dogYears();
    qInfo() << calc.getName() << "Cat years:" << calc.catYears();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    AgeCalc boris{};

    boris.setName("Boris");
    boris.setAge(32);

    print(boris);

    return a.exec();
}





