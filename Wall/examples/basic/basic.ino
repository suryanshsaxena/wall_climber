#include "Wall.h"
#include "Servo.h"

Wall wall(9,5,false);

void setup() {
Serial.begin(9600);  
}

void loop() {
  wall.clockwise(-1);
  delay(100);
}
