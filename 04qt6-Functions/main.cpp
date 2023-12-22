#include <QCoreApplication>
#include<QDebug>

void function(){
    qInfo() << "No-arg func";
}

void function(QString str){
    qInfo() << "string arg func:" << str;
}

void function(int value){
    qInfo() << "int arg func:" << value;
}

void function(bool isAactive){
    qInfo() << "bool arg func:" << isAactive;
}

void function(float_t value){
    qInfo() << "float arg func:" << value;
}

void function(double value){
    qInfo() << "double arg func:" << value;
}

void func_call_by_ref(int &ref);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

//    function();
//    function("Baris Can Coskun");
////    function((QString)"Baris Can Coskun");
//    function(QString("Baris Can Coskun"));
//    function(32);
//    function(true);
//    function((float_t)75.2);
//    function(75.2);

    int n{3};
    qInfo() << "n:" << n;

    int &ref{n};
    qInfo() << "ref:" << ref;

    ref = 5;
    qInfo() << "n:" << n;
    qInfo() << "ref:" << ref;

    n = 1;
    qInfo() << "n:" << n;
    qInfo() << "ref:" << ref;

    func_call_by_ref(n);
    qInfo() << "n:" << n;
    qInfo() << "ref:" << ref;

    int k{0};
    ref = k;
    qInfo() << "k assign to ref:" << ref;
    n = 6;
    qInfo() << "ref:" << ref;
    k = 7;
    qInfo() << "n:" << n;
    qInfo() << "k:" << k;
    qInfo() << "ref:" << ref;

    return a.exec();
}

void func_call_by_ref(int &m){
    qInfo() << "Value changing in func_call_by_ref";
    m = 10;
}


















