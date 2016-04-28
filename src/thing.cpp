/*!
 * @file
 */

#include "./thing.h"

// Copyright 2016 Jacob Hempel

/*!
 * This is the contructor for the thing class. 
 * It makes a thing object.
 *
 * @param number Number being stored in the thing object
 */
thing::thing(double number) {
    storednumber = number;
}

/*!
 * This function sets a new stored number.
 *
 * @param number The number to be set as storednumber.
 */
void thing::setnumber(double number) {
    storednumber = number;
}

 /*!
  * Function returns the value of storednumber.
  *
  * @return storednumber
  */
double thing::getnumber(void) {
    return storednumber;
}

