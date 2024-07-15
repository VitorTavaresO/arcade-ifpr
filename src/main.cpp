#include <Joystick.h>

Joystick_ Joystick;

const int pinToButtonMap = 15;

void setup()
{
  pinMode(pinToButtonMap, INPUT_PULLUP);
  Joystick.begin();
}

int lastButtonState = 0;

void loop()
{

  int currentButtonState = !digitalRead(pinToButtonMap);
  if (currentButtonState != lastButtonState)
  {
    Joystick.setButton(0, currentButtonState);
    lastButtonState = currentButtonState;
  }

  delay(50);
}