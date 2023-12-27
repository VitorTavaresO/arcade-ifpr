#include <Arduino.h>
#include <Keyboard.h>
#include "const.h"

void keys(){
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

    if (digitalRead(buttonX) == HIGH) {
        Keyboard.release('x');
    } else {
        Keyboard.press('x');
    }

    if (digitalRead(buttonB) == HIGH) {
        Keyboard.release('b');
    } else {
        Keyboard.press('b');
    }

    if (digitalRead(buttonY) == HIGH) {
        Keyboard.release('y');
    } else {
        Keyboard.press('y');
    }

    if (digitalRead(buttonA) == HIGH) {
        Keyboard.release('a');
    } else {
        Keyboard.press('a');
    }

    if (digitalRead(LTrigger) == HIGH) {
        Keyboard.release('1');
    } else {
        Keyboard.press('1');
    }

    if (digitalRead(LShoulder) == HIGH) {
        Keyboard.release('2');
    } else {
        Keyboard.press('2');
    }

    if (digitalRead(RTrigger) == HIGH) {
        Keyboard.release('3');
    } else {
        Keyboard.press('3');
    }

    if (digitalRead(RShoulder) == HIGH) {
        Keyboard.release('4');
    } else {
        Keyboard.press('4');
    }

    if (digitalRead(startButton) == HIGH) {
        Keyboard.release('5');
    } else {
        Keyboard.press('5');
    }
}