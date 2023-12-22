/*
    What
    intro to classes

    Why
    want to create objects from blueprints

    How
    look at example

*/
#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal cat;
    cat.setObjectName("cat");
    Animal dog;
    dog.setObjectName("dog");
    Animal bird;
    bird.setObjectName("bird");

    dog.speak("bark");
    cat.speak("meov");
    bird.speak("tweet");

    return a.exec();
}














