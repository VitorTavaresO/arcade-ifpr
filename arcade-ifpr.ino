#include <Mouse.h>
#include <Keyboard.h>

const int joystickX = A0;
const int joystickY = A1;
const int joystickButton = 15;
const int tPadUp = 2;
const int tPadDown = 3;
const int tPadLeft = 4;
const int tPadRight = 5;

int cursorSpeed = 10;
int responseDelay = 5;
int threshold = cursorSpeed/4;
int center = cursorSpeed/2;


void setup() {
    pinMode(joystickButton, INPUT_PULLUP);
    Mouse.begin();
    Keyboard.begin();
}

void loop() {
    int xReading = readAxis(joystickX);
    int yReading = readAxis(joystickY);

    Mouse.move(xReading, yReading, 0);
    if(digitalRead(joystickButton) == LOW) {
        Mouse.press(MOUSE_LEFT);
    } else {
        Mouse.release(MOUSE_LEFT);
    }

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
