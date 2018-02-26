#ifndef ROLLERS_H
#define ROLLERS_H
#include "API.h"

namespace rollers {
    typedef struct {
        int motorNum;
        int isReverse;
        bool isTruespeed;
    } motors;

    void init(int motorNum, int isReverse);
    void speed(int iSpeed);
    void timed(int iSpeed, int duration);

    void teleop();
}


#endif