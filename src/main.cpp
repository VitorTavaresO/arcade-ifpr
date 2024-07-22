#include <Joystick.h>

Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID, JOYSTICK_TYPE_GAMEPAD,
                   4, 0,                 // Button Count, Hat Switch Count
                   true, true, false,    // X and Y, but no Z Axis
                   false, false, false,  // No Rx, Ry, or Rz
                   false, false,         // No rudder or throttle
                   false, false, false); // No accelerator, brake, or steering

void setup()
{
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);

  Joystick.begin();
  Joystick.setXAxisRange(-1, 1);
  Joystick.setYAxisRange(-1, 1);
}

int lastButtonState[8] = {0, 0, 0, 0, 0, 0, 0, 0};

void loop()
{

  for (int index = 0; index < 8; index++)
  {
    int currentButtonState = !digitalRead(index + 2);
    if (currentButtonState != lastButtonState[index])
    {
      switch (index)
      {
      case 0: // UP
        if (currentButtonState == 1)
        {
          Joystick.setYAxis(-1);
        }
        else
        {
          Joystick.setYAxis(0);
        }
        break;
      case 1: // RIGHT
        if (currentButtonState == 1)
        {
          Joystick.setXAxis(1);
        }
        else
        {
          Joystick.setXAxis(0);
        }
        break;
      case 2: // DOWN
        if (currentButtonState == 1)
        {
          Joystick.setYAxis(1);
        }
        else
        {
          Joystick.setYAxis(0);
        }
        break;
      case 3: // LEFT
        if (currentButtonState == 1)
        {
          Joystick.setXAxis(-1);
        }
        else
        {
          Joystick.setXAxis(0);
        }
        break;
      case 4:
        Joystick.setButton(0, currentButtonState);
        break;
      case 5:
        Joystick.setButton(1, currentButtonState);
        break;
      case 6:
        Joystick.setButton(2, currentButtonState);
        break;
      case 7:
        Joystick.setButton(3, currentButtonState);
        break;
      }
      lastButtonState[index] = currentButtonState;
    }
  }

  delay(10);
}