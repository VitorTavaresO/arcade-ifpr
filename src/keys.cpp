#include <Arduino.h>
#include <Keyboard.h>
#include "const.h"

void keys(){
if (digitalRead(DPADUP) == HIGH) {
        Keyboard.release('w');
    } else {
        Keyboard.press('w');
    }

    if (digitalRead(DPADDOWN) == HIGH) {
        Keyboard.release('s');
    } else {
        Keyboard.press('s');
    }

    if (digitalRead(DPADLEFT) == HIGH) {
        Keyboard.release('a');
    } else {
        Keyboard.press('a');
    }

    if (digitalRead(DPADRIGHT) == HIGH) {
        Keyboard.release('d');
    } else {
        Keyboard.press('d');
    }

    if (digitalRead(BUTTONX) == HIGH) {
        Keyboard.release('x');
    } else {
        Keyboard.press('x');
    }

    if (digitalRead(BUTTONB) == HIGH) {
        Keyboard.release('b');
    } else {
        Keyboard.press('b');
    }

    if (digitalRead(BUTTONY) == HIGH) {
        Keyboard.release('y');
    } else {
        Keyboard.press('y');
    }

    if (digitalRead(BUTTONA) == HIGH) {
        Keyboard.release('a');
    } else {
        Keyboard.press('a');
    }

    if (digitalRead(LTRIGGER) == HIGH) {
        Keyboard.release('1');
    } else {
        Keyboard.press('1');
    }

    if (digitalRead(LSHOULDER) == HIGH) {
        Keyboard.release('2');
    } else {
        Keyboard.press('2');
    }

    if (digitalRead(RTRIGGER) == HIGH) {
        Keyboard.release('3');
    } else {
        Keyboard.press('3');
    }

    if (digitalRead(RSHOULDER) == HIGH) {
        Keyboard.release('4');
    } else {
        Keyboard.press('4');
    }

    if (digitalRead(STARTBUTTON) == HIGH) {
        Keyboard.release('5');
    } else {
        Keyboard.press('5');
    }
}