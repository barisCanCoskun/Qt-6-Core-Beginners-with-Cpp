#include <QCoreApplication>
#include "lion.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Lion leo{};
    leo.speak();

    Feline *diablo{new Lion{}};
    diablo->speak();            // override

    return a.exec();
}













