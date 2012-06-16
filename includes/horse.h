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
    ~Horse();

    void setHorseNumber(int _number) {horseNumber = _number;}
    void setHorseName(QString _name) {name = _name;}
    void setTotalRaces(int _total) {totalRaces = _total;}
    void setRacesLastSeason(int _rls) {racesLastSeason = _rls;}
    void setRacesThisSeason(int _rts) {racesThisSeason = _rts;}
    void setRankingsLastSeason(int _ranking[]) {rankingsLastSeason[0] = _ranking[0];
                                                rankingsLastSeason[1] = _ranking[1];
                                                rankingsLastSeason[2] = _ranking[2];}
    void setRankingsThisSeason(int _ranking[]) {rankingsThisSeason[0] = _ranking[0];
                                                rankingsThisSeason[1] = _ranking[1];
                                                rankingsThisSeason[2] = _ranking[2];}
    void setEarnedMoneyLastSeason(int _money) {earnedMoneyLastSeason = _money;}
    void setEarnedMoneythisSeason(int _money) {earnedMoneyThisSeason = _money;}
    void setFiveLastRaceRankings(int _fiveRankings[]) {rankingsFiveLastRaces[0] = _fiveRankings[0];
                                                       rankingsFiveLastRaces[1] = _fiveRankings[1];
                                                       rankingsFiveLastRaces[2] = _fiveRankings[2];
                                                       rankingsFiveLastRaces[3] = _fiveRankings[3];
                                                       rankingsFiveLastRaces[4] = _fiveRankings[4];}
    void setFiveLastElapsedTimes(int _fiveTimes[]) {elapsedTimeFiveLastRaces[0] = _fiveTimes[0];
                                                    elapsedTimeFiveLastRaces[1] = _fiveTimes[1];
                                                    elapsedTimeFiveLastRaces[2] = _fiveTimes[2];
                                                    elapsedTimeFiveLastRaces[3] = _fiveTimes[3];
                                                    elapsedTimeFiveLastRaces[4] = _fiveTimes[4];}

private:
    int horseNumber;
    QString name;
    int totalRaces;
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
