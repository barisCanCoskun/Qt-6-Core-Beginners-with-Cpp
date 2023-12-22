#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <QObject>
#include <QDebug>
#include "Toaster.h"
#include "Freezer.h"
#include "Microwave.h"

class Appliance : public QObject, public Toaster, public Freezer, public Microwave
{
    Q_OBJECT
public:
    explicit Appliance(QObject *parent = nullptr);
    // Microwave interface
    bool cook();

    // Freezer interface
    bool freeze();

    // Toaster interface
    bool grill();

signals:



};

#endif // APPLIANCE_H








