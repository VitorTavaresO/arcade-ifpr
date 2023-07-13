const int pinRed = 11;
const int pinGreen = 10;
const int pinBlue = 9;
const int pinPotRed = A0;
const int pinPotGreen = A3;
const int pinPotBlue = A4;

void setup() {
  pinMode(pinPotRed, INPUT);
  pinMode(pinPotGreen, INPUT);
  pinMode(pinPotBlue, INPUT);

  pinMode(pinRed, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinBlue, OUTPUT);

}

void loop() {
  int redValue = map(analogRead(pinPotRed), 0, 1023, 0, 255);
  int greenValue = map(analogRead(pinPotGreen), 0, 1023, 0, 255);
  int blueValue = map(analogRead(pinPotBlue), 0, 1023, 0, 255);
  analogWrite(pinRed, redValue);
  analogWrite(pinGreen, greenValue);
  analogWrite(pinBlue, blueValue);

}
