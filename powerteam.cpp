/*!
 * @file
 */

#include "./powerteam.h"

// Copyright 2016 Jacob Hempel

/*!
 * This is the contructor for the PowerTeam class.
 * It makes a PowerTeam object.
 *
 * @param defaultpower Number being stored in the powerteam object
 */
PowerTeam::PowerTeam(double defaultpower) {
    power = defaultpower;
}

/*!
 * This function sets a new power level.
 *
 * @param number The number to be set as the new power level.
 */
void PowerTeam::setpower(double powerset) {
    power = powerset;
}

/*!
  * Function returns the value of power.
  *
  * @return power
  */
double PowerTeam::getpower(void) {
    return power;
}
