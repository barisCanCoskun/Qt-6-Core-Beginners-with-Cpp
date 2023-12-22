#ifndef STATION_H
#define STATION_H

#include <QObject>
#include <QDebug>

class Station : public QObject
{
//    Q_OBJECT
//    int channel;
    QString name;
public:
    explicit Station(QObject *parent = nullptr, int ch = 0, QString n = "unknown");

    Q_OBJECT
    int channel;
signals:
    void send(int ch, QString n, QString message);

public slots:
    void broadcast(QString message);

};

#endif // STATION_H










