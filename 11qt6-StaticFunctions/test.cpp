#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent} {
    qInfo() << this << "constructed.";
}

void Test::doStuff() {
    qInfo() << this << "doStuff";
    doOtherStuff();
}

void Test::doOtherStuff() {
//    qInfo() << this << "doOtherStuff";    // this does not exist.
//    doStuff();    // there is no instance

// We can still run code without an instance.
    qInfo() << "doOtherStuff";
}

















