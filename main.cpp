/*!
 * @file
 */

#include <iostream>
#include "./powerteam.h"
#include "./thing.h"

// Copyright 2016 Jacob Hempel

/*!
 * A test program to check the interaction between
 * the objects powerteam and thing.  
 */
int main(int argc, char* argv[]) {
    PowerTeam power1(4.0);
    thing thing1(power1.getpower());

    std::cout << "Initial Power Level: " << power1.getpower() << "\n";
    power1.setpower(6.6);

    std::cout << "New Power Level: " << power1.getpower() << "\n";
    std::cout << "number in thing1: " << thing1.getnumber() << "\n";
    return 0;
}
