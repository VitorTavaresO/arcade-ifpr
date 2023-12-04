#include <Mouse.h>
#include <Keyboard.h>

const int joystickX = A0;
const int joystickY = A1;

int cursorSpeed = 10;
int responseDelay = 5;
int threshold = cursorSpeed/4;
int center = cursorSpeed/2;


void setup() {
    Mouse.begin();
    Keyboard.begin();
}

void loop() {
  int xReading = readAxis(joystickX);
  int yReading = readAxis(joystickY);

    Mouse.move(xReading, yReading, 0);

  delay(responseDelay);
}


int readAxis(int thisAxis) {
  int reading = analogRead(thisAxis);

  reading = map(reading, 0, 1023, 0, cursorSpeed);

  int distance = reading - center;

  if (abs(distance) < threshold) {
    distance = 0;
  }

  return distance;
}
