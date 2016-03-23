/*!
 * @file
 */

#ifndef _HOME_JACOB_DROPBOX_SPACEHAUC_CODE_TEST_ASSIGNMENT_THING_H_
#define _HOME_JACOB_DROPBOX_SPACEHAUC_CODE_TEST_ASSIGNMENT_THING_H_

// Copyright 2016 Jacob Hempel


/*!
 * This class can store a number,get a number, 
 * and set a number.
 */
class thing {
 public:
    explicit thing(double number);
    void setnumber(double number);
    double getnumber(void);
 private:
    /*! The number stored in thing */
    double storednumber;
};

#endif  // _HOME_JACOB_DROPBOX_SPACEHAUC_CODE_TEST_ASSIGNMENT_THING_H_
