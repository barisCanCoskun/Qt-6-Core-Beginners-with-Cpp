#ifndef FELINE_H
#define FELINE_H

#include <QObject>
#include <QDebug>
#include "mammal.h"

class Feline : public Mammal
{
    Q_OBJECT
public:
    explicit Feline(QObject *parent = nullptr);
    void meow(){qInfo() << this << "meow";}

signals:

};

#endif // FELINE_H






