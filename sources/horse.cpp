#include "includes/horse.h"

Horse::Horse()
{
    // ...
}

/*
 * Parameter constructor to set all the data that
 * the instance of Horse class needs.
 */
Horse::Horse(int _number, QString _name, int _racesLS, int _racesTS,
             int _ranksLS[], int _ranksTS[], int _moneyLS, int _moneyTS, int _ranksFLR[], int _elapsedTime[])
{
    int horseNumber              = _number;
    QString name                 = _name;
    int racesLastSeason          = _racesLS;
    int racesThisSeason          = _racesTS;
    // int rankingsLastSeason       = _ranksLS;  // array

    for (unsigned int i = 0; i < sizeof(rankingsLastSeason); i++)
    {
        rankingsLastSeason[i] = _ranksLS[i];
    }

    // int rankingsThisSeason       = _ranksTS;  // array

    for (unsigned int i = 0; i < sizeof(rankingsThisSeason); i++)
    {
        rankingsThisSeason[i] = _ranksTS[i];
    }

    int earnedMoneyLastSeason    = _moneyLS;
    int earnedMoneyThisSeason    = _moneyTS;
    // int rankingsFiveLastRaces    = _ranksFLR;  // array

    for (unsigned int i = 0; i < sizeof(rankingsFiveLastRaces); i++)
    {
        rankingsFiveLastRaces[i] = _ranksFLR[i];
    }

    // int elapsedTimeFiveLastRaces = _elapsedTime;  // array

    for (unsigned int i = 0; i < sizeof(elapsedTimeFiveLastRaces); i++)
    {
        elapsedTimeFiveLastRaces[i] = _elapsedTime[i];
    }

}

/*
 * Destructor
 */
Horse::~Horse()
{
    // ...
}
