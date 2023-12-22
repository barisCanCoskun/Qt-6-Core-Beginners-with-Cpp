#ifndef AGECALC_H
#define AGECALC_H

#include <QObject>

class AgeCalc : public QObject
{
    Q_OBJECT
    int age;
    QString name;
public:
    explicit AgeCalc(QObject *parent = nullptr);

    int getAge() const;             // via refactor, dont change
    void setAge(int newAge);        // via refactor, dont change

    QString getName() const;
    void setName(const QString &newName);

    int humanYears() const;
    int dogYears() const;
    int catYears() const;


signals:

};

#endif // AGECALC_H




