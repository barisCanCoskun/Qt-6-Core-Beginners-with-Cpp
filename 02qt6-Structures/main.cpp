#include <QCoreApplication>
#include<QDebug>

enum Colors{red, white, blue};

typedef struct _Product
{
    int weight;
    double value;
    Colors color;
}Product;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Product laptop;
    qInfo() << "size of product:" << sizeof(laptop);
    qInfo() << "sizeof int:" << sizeof(int);
    qInfo() << "sizeof double:" << sizeof(double);      // 3 x 8 = 24 : the padding to align the members
    qInfo() << "sizeof colors:" << sizeof(Colors);      // the padding as free space for better access.

    return a.exec();
}



