#include <Joystick.h>

Joystick_ Joystick;

const int blackButton = 2;
const int whiteButton = 3;
const int greenButton = 4;
const int redButton = 5;
const int yellowButton = 6;
const int blueButton = 7;

void setup()
{
  pinMode(blackButton, INPUT_PULLUP);
  pinMode(whiteButton, INPUT_PULLUP);
  pinMode(greenButton, INPUT_PULLUP);
  pinMode(redButton, INPUT_PULLUP);
  pinMode(yellowButton, INPUT_PULLUP);
  pinMode(blueButton, INPUT_PULLUP);
  Joystick.begin();
  Serial.begin(9600);
}

int lastBlackButtonState = 0;

void loop()
{

  int currentBlackButtonState = !digitalRead(blackButton);
  if (currentBlackButtonState != lastBlackButtonState)
  {
    Joystick.setButton(0, currentBlackButtonState);
    lastBlackButtonState = currentBlackButtonState;
    Serial.println("Black button pressed");
  }

  delay(50);
}