#include "includes/race.h"

/*
 * Default constructor
 */
Race::Race()
{
    // ...
}

/*
 * Destructor
 */
Race::~Race()
{
    // ...
}

/*
 * Add a Horse object into a vector of Horses
 */
void Race::addHorse(Horse _horse)
{
    horses.append(_horse);
}
