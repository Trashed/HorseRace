//
// race.h
//
// This class holds the all data composed from the parsed
// text file. Horse instances are private members of this class.
//

#ifndef RACE_H
#define RACE_H

#include "includes/horse.h"

#include <QVector>

class Race
{
public:
    Race();
    ~Race();

    void addHorse(Horse);
private:
    QVector<Horse> horses;
};

#endif // RACE_H
