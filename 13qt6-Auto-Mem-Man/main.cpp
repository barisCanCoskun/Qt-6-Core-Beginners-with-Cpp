#include <QCoreApplication>
#include "test.h"

void create_unique_ptr(){
    // std::unique_ptr<Account> p2{new Savings_Account{"Joe"}};
    std::unique_ptr<Test> t{new Test{}};
    t->doStuff();

//    unique_ptr automatically deleted the newly created memory space
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Test t;
    t.doStuff();

    create_unique_ptr();

    return a.exec();
}




