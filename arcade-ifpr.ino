#include <Mouse.h>
#include <Keyboard.h>
#include "const.h"
#include "functions.h"


void setup() {
    pinMode(joystickButton, INPUT_PULLUP);
    pinMode(DpadUp, INPUT_PULLUP);
    pinMode(DpadDown, INPUT_PULLUP);
    pinMode(DpadLeft, INPUT_PULLUP);
    pinMode(DpadRight, INPUT_PULLUP);
    Mouse.begin();
    Keyboard.begin();
}

void loop() {
    joystick();
    keys();
    delay(responseDelay);
}