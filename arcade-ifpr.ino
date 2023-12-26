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

    if (digitalRead(DpadUp) == HIGH) {
        Keyboard.release('w');
    } else {
        Keyboard.press('w');
    }

    if (digitalRead(DpadDown) == HIGH) {
        Keyboard.release('s');
    } else {
        Keyboard.press('s');
    }

    if (digitalRead(DpadLeft) == HIGH) {
        Keyboard.release('a');
    } else {
        Keyboard.press('a');
    }

    if (digitalRead(DpadRight) == HIGH) {
        Keyboard.release('d');
    } else {
        Keyboard.press('d');
    }

    delay(responseDelay);
}