#include <Arduino.h>
#include <Mouse.h>
#include "const.h"

int cursorSpeed = 10;
int threshold = cursorSpeed/4;
int center = cursorSpeed/2;

int readAxis(int thisAxis) {
  int reading = analogRead(thisAxis);

  reading = map(reading, 0, 1023, 0, cursorSpeed);

  int distance = reading - center;

  if (abs(distance) < threshold) {
    distance = 0;
  }

  return distance;
}

void joystick(){
  int xReading = readAxis(JOYSTICKX);
  int yReading = readAxis(JOYSTICKY);

  Mouse.move(xReading, yReading, 0);
  if(digitalRead(JOYSTICKBUTTON) == LOW) {
    Mouse.press(MOUSE_LEFT);
  } else {
    Mouse.release(MOUSE_LEFT);
  }
}