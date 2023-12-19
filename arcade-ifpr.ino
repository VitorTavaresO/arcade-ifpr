#include <Mouse.h>
#include <Keyboard.h>
#include "functions.h"

const int joystickX = A0;
const int joystickY = A1;
const int joystickButton = 15;
const int TpadUp = 2;
const int DpadDown = 3;
const int DpadLeft = 4;
const int DpadRight = 5;
const int buttonX = 6;
const int buttonB = 7;
const int buttonY = 8;
const int buttonA = 9;
const int LTrigger = 10;
const int LShoulder = 11;
const int RTrigger = 12;
const int RShoulder = 13;
const int startButton = 14;

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
    int xReading = readAxis(joystickX, cursorSpeed, threshold, center);
    int yReading = readAxis(joystickY, cursorSpeed, threshold, center);

    Mouse.move(xReading, yReading, 0);
    if(digitalRead(joystickButton) == LOW) {
        Mouse.press(MOUSE_LEFT);
    } else {
        Mouse.release(MOUSE_LEFT);
    }

    delay(responseDelay);
}
