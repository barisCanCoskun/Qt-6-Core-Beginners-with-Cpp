#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <iostream>
#include "radio.h"
#include "station.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Radio boombox;
    Station *channels[3];

//    create some stations
    channels[0] = new Station(&boombox, 89, "Grunge");
    channels[1] = new Station(&boombox, 98, "R&B");
    channels[2] = new Station(&boombox, 102, "Reggae");

    boombox.connect(&boombox, &Radio::quit, &a, QCoreApplication::quit, Qt::QueuedConnection);

//    for(size_t i{}; i < 3; ++i){
//        boombox.connect(channels[i], &Station::send, &boombox, &Radio::listen);
//    }

    do{
        qInfo() << "Enter on, off, test or quit";
        QTextStream qtin(stdin);
        QString line = qtin.readLine().trimmed().toUpper();

        if(line == "ON"){
            qInfo() << "Turning the radio on";
            for(size_t i{}; i < 3; ++i){
                boombox.connect(channels[i], &Station::send, &boombox, &Radio::listen);
            }
            qInfo() << "Radio is on";
        }

        if(line == "OFF"){
            qInfo() << "Turning the radio off";
            for(size_t i{}; i < 3; ++i){
                boombox.disconnect(channels[i], &Station::send, &boombox, &Radio::listen);
            }
            qInfo() << "Radio is off";
        }

        if(line == "TEST"){
            qInfo() << "Testing";
            for(size_t i{}; i < 3; ++i){
                channels[i]->broadcast("Broadcasting live");
            }
            qInfo() << "Testing completed";
        }

        if(line == "QUIT"){
            qInfo() << "Quiting";
            emit boombox.quit();
            break;
        }

    }while(true);    // doing it for illustrative purposes

    return a.exec();    // when boombax deleted in stack all channels ptrs in heap will be deleted.
}







