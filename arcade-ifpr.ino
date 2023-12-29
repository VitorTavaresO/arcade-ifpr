#include <Mouse.h>
#include <Keyboard.h>
#include "const.h"
#include "functions.h"


void setup() {
    pinMode(JOYSTICKBUTTON, INPUT_PULLUP);
    pinMode(DPADUP, INPUT_PULLUP);
    pinMode(DPADDOWN, INPUT_PULLUP);
    pinMode(DPADLEFT, INPUT_PULLUP);
    pinMode(DPADRIGHT, INPUT_PULLUP);
    Mouse.begin();
    Keyboard.begin();
}

void loop() {
    joystick();
    keys();
    delay(responseDelay);
}