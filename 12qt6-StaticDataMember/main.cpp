#include <QCoreApplication>
#include <QDebug>
#include "animal.h"

//int Animal::count{};

void display_animal_count(){
    qInfo() << "animal count:" << Animal::get_num_animals();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Animal cat{0, "cifu"};
    cat.get_name();
    display_animal_count();

    Animal dog{0, "dog"};
    dog.get_name();
    display_animal_count();

    QString name{"paris"};
    qInfo() << "\n&name:" << &name;
    qInfo() << "name.length():" << name.length();
    QString *name_ptr{&name};
    qInfo() << "name_ptr:" << name_ptr;
    qInfo() << "&name_ptr:" << &name_ptr;
    qInfo() << "name_ptr->length():" << name_ptr->length();
//    qInfo() << "&name_ptr:" << &&name_ptr;


    return a.exec();
}









