/*
    What
    Functions can return values

    Why
    We need to take care what we return

    How
    Touch on classes and pointers
    Return a value
    Return a pointer

    A pointer in C++ is a variable that holds the memory address of another variable.
    A reference is an alias for an already defined variable.

    A reference is initialized to a variable, it cannot be changed to refer to another variable.
    Hence, a ref is similar to a const pointer.

*/
#include <QCoreApplication>
#include<QDebug>

//QObject get_object_by_val(QString name){ // return copy
//    QObject o;
//    o.setObjectName(name);
//    return o;         // make a copy. Qt does not like doing that.
//}

//QObject &get_object_by_ref(QString name){ // return reference
//    QObject o;
//    o.setObjectName(name);
//    return o;          // Address of stack memory associated with local variable 'o' returned to caller
//}

QObject *get_object_by_ptr(QString name){
    QObject *o = new QObject();
    o->setObjectName(name);
    return o;           // will NOT be deleted
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    QObject x = get_object_by_val("By value");    // call to deleted constructor of 'QObject'

//    QObject x = get_object_by_ref("By ref");    // call to deleted constructor of 'QObject'

    QObject *x = get_object_by_ptr("By ptr");

    qInfo() << x->objectName();
    qInfo() << x;

    delete x;
    return a.exec();
}















