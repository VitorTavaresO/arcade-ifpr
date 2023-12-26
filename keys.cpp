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
}