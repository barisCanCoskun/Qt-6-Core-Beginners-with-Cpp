#include "source.h"

Source::Source(QObject *parent)
    : QObject{parent}
{

}

void Source::test()
{
    emit mySignal("Hello from Signal");
}
