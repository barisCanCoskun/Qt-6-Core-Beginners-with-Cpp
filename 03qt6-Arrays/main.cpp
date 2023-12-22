#include <QCoreApplication>
#include<QDebug>
#include<array>
#include<iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int ages[4]{};
    int sizeof_ages{sizeof(ages) / sizeof(ages[0])};
    qInfo() << "ages[4]:";
    for (int var = 0; var < sizeof_ages; ++var) {
        qInfo() << ages[var];
    }
    qInfo() << ages;
    qInfo() << "\n";

    int months[3];
    int sizeof_months{sizeof(months) / sizeof(months[0])};
    qInfo() << "months[4]:";
    for (int var = 0; var < sizeof_months; ++var) {
        qInfo() << months[var];
    }
    qInfo() << months;
    qInfo() << "\n";

    std::array<int, 4> cars;
    qInfo() << "std::array<int, 4> cars:";
    for (const auto &var : cars) {
        qInfo() << var;
    }
//    qInfo() << cars;
    qInfo() << "\n";

    std::array<int, 3> bikes{};
    qInfo() << "std::array<int, 3> bikes:";
    for (const auto &var : bikes) {
        qInfo() << var;
    }
//    qInfo() << bikes;
    qInfo() << "\n";
    bikes.back() = 7;
    qInfo() << "bikes.back(): " << bikes.back();
    qInfo() << "*bikes.end(): " << *bikes.end();
    auto *it = (bikes.end() - 1);
    qInfo() << "*it: " << *it;
    std::cout << "bikes.front(): " << bikes.front() << std::endl;


    return a.exec();
}











