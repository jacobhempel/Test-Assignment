/*!
 * @file
 */

// Copyright 2016 Jacob Hempel

#include <vector>
#include <iostream>
#include "./powerteam.h"
#include "./thing.h"

void pullPower(std::vector<PowerTeam>* batteryBank);
double checkPowerLevel(std::vector<PowerTeam> batteryBank);
void checkAllBatteries(std::vector<PowerTeam> batteryBank);
void rechargeBatteries(std::vector<PowerTeam>* batteryBank);

int main(int argc, char* argv[]) {
    PowerTeam battery1(8.0);
    PowerTeam battery2(8.0);
    PowerTeam battery3(8.0);
    PowerTeam battery4(8.0);
    std::vector<PowerTeam> batteryBank{battery1, battery2, battery3, battery4};
    std::cout << "This is the initial power in the batterybank: ";
    std::cout << checkPowerLevel(batteryBank) <<"\n";
    checkAllBatteries(batteryBank);
    pullPower(&batteryBank);
    std::cout << "This is the final power in the batterybank: ";
    std::cout << checkPowerLevel(batteryBank) <<"\n";
    checkAllBatteries(batteryBank);
    rechargeBatteries(&batteryBank);
    checkAllBatteries(batteryBank);
}

void pullPower(std::vector<PowerTeam>* batteryBank) {
    double powerDraw;
    double initialLevel;
    std::cout << "how much power is required by the operation? ";
    std::cin >> powerDraw;
    initialLevel = checkPowerLevel(*batteryBank);
    std::cout << "initialLevel = " << initialLevel <<"\n";
    if (initialLevel >= powerDraw) {
        if (powerDraw <= 8) {
            (*batteryBank)[0].setpower(8.00-powerDraw);
        } else if (powerDraw > 8 && powerDraw <= 16) {
            (*batteryBank)[0].setpower(0);
            (*batteryBank)[1].setpower(16-powerDraw);
        } else if (powerDraw > 16 && powerDraw <= 24) {
            (*batteryBank)[0].setpower(0);
            (*batteryBank)[1].setpower(0);
            (*batteryBank)[2].setpower(24-powerDraw);
        } else if (powerDraw > 24 && powerDraw <= 32) {
            (*batteryBank)[0].setpower(0);
            (*batteryBank)[1].setpower(0);
            (*batteryBank)[2].setpower(0);
            (*batteryBank)[3].setpower(32-powerDraw);
        }
    } else {
        std::cout << "There is not enough power in the batteries for this\n ";
    }
}

double checkPowerLevel(std::vector<PowerTeam> batteryBank) {
    unsigned int i;
    double sum;
    for (i=0; i < batteryBank.size(); i++) {
        sum+=batteryBank[i].getpower();
    }
    return sum;
}

void checkAllBatteries(std::vector<PowerTeam> batteryBank) {
    unsigned int i;
    double level;
    for (i=0; i < batteryBank.size(); i++) {
        level = batteryBank[i].getpower();
        std::cout << "Level of Battery " << (i+1) << ": " << level <<"\n";
    }
}

void rechargeBatteries(std::vector<PowerTeam>* batteryBank) {
    char yn;
    std::cout << "Would you like to recharge the batteries? (y/n)\n";
    std::cin >> yn;
    if (yn == 'y') {
        (*batteryBank)[0].setpower(8.0);
        (*batteryBank)[1].setpower(8.0);
        (*batteryBank)[2].setpower(8.0);
        (*batteryBank)[3].setpower(8.0);
    }
}
