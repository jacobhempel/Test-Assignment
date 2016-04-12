/*!
 * @file
 */

#ifndef POWERTEAM_H_
#define POWERTEAM_H_

// Copyright 2016 Jacob Hempel

/*!
 * This class can store a power, get a power,
 * and set a power.
 */
class PowerTeam {
 public:
    explicit PowerTeam(double defaultpower);
    void setpower(double powerset);
    double getpower(void);
 private:
    double power;
};

#endif  // POWERTEAM_H_
