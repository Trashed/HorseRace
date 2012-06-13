//
// horse.h
//
// Horse class is used for storing data for each individual horse.
//

#ifndef HORSE_H
#define HORSE_H

#include <QString>

class Horse
{
public:
    Horse();
    Horse(int _number, QString _name, int _racesLS, int _racesTS, int _ranksLS[], int _ranksTS[],
          int _moneyLS, int _moneyTS, int _ranksFLR[], int _elapsedTime[]);
    ~Horse();

private:
    int horseNumber;
    QString name;
    int racesLastSeason;
    int racesThisSeason;
    int rankingsLastSeason[3];
    int rankingsThisSeason[3];
    int earnedMoneyLastSeason;
    int earnedMoneyThisSeason;
    int rankingsFiveLastRaces[5];
    int elapsedTimeFiveLastRaces[5];
};

#endif // HORSE_H
