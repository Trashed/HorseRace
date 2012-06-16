#include "includes/horse.h"

/*
 * Parameter constructor to set all the data that
 * the instance of Horse class needs.
 */
Horse::Horse()
{
    horseNumber     = 0;
    name            = "";
    racesLastSeason = 0;
    racesThisSeason = 0;
    totalRaces      = 0;

    rankingsLastSeason[0] = 0;
    rankingsLastSeason[1] = 0;
    rankingsLastSeason[2] = 0;

    rankingsThisSeason[0] = 0;
    rankingsThisSeason[1] = 0;
    rankingsThisSeason[2] = 0;

    earnedMoneyLastSeason = 0;
    earnedMoneyThisSeason = 0;

    rankingsFiveLastRaces[0] = 0;
    rankingsFiveLastRaces[1] = 0;
    rankingsFiveLastRaces[2] = 0;
    rankingsFiveLastRaces[3] = 0;
    rankingsFiveLastRaces[4] = 0;

    elapsedTimeFiveLastRaces[0] = 0;
    elapsedTimeFiveLastRaces[1] = 0;
    elapsedTimeFiveLastRaces[2] = 0;
    elapsedTimeFiveLastRaces[3] = 0;
    elapsedTimeFiveLastRaces[4] = 0;
}

/*
 * Destructor
 */
Horse::~Horse()
{
    // ...
}


