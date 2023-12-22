#ifndef ANIMAL_H
#define ANIMAL_H

#include <QObject>
#include <QDebug>

class Animal : public QObject
{
    Q_OBJECT
    QString name;
    static int count;
public:
    explicit Animal(QObject *parent = nullptr, QString = "");
    ~Animal();

    QString get_name();
    static int get_num_animals();


signals:

};

#endif // ANIMAL_H





