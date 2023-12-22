#include <QCoreApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    bool isOn{false};
//    bool isOn = false;

    qInfo() << "Light switch: " << isOn;

    isOn = true;
    qInfo() << "Light switch:" << isOn;

    enum Color{red, blue, green};

    Color myColor{Color::blue};

    qInfo() << "My color is:" << myColor;

    enum Colour{yellow = 24, white = 7, black = 10};
    Colour myColour{Colour::white};
    qInfo() << "My colour is:" << myColour;

    return a.exec();
}

















