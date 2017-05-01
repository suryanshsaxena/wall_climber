/**
Author : Suryansh Saxena 
**/

#ifndef Wall_h
#define Wall_h

#include "Arduino.h"
#include "Servo.h"

class Wall
{
  public:
    Wall(int pin1, int pin2, int control);
    void clockwise(int val);
    void anticlock(int val);
    void stop();

  private:
    int _pin1;
    int _pin2;
    bool c; 
    Servo esc;


};

#endif