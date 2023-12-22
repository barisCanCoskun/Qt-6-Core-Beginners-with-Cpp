#ifndef MONSTER_H
#define MONSTER_H

#include <QObject>
#include "feline.h"
#include "canine.h"

class Monster : public Feline, public Canine        // Qt doesn't allow multiple inheritance
{
    Q_OBJECT
public:
    explicit Monster(QObject *parent = nullptr);

signals:

};

#endif // MONSTER_H
