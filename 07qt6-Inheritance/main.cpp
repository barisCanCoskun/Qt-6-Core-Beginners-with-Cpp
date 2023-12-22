#include <QCoreApplication>
#include <QDebug>
#include "canine.h"
#include "feline.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Feline cat{};
    cat.setObjectName("grey");
    cat.meow();
    qInfo() << cat.objectName() << "is alive?" << cat.isAlive();
    qInfo() << cat.objectName() << "has back bone?" << cat.hasBackBone();

    return a.exec();
}










