 const int pinRed = 11;
 const int pinGreen = 10;
 const int pinBlue = 9;

void setup() {
  pinMode(pinRed, OUTPUT);
  pinMode(pinGreen, OUTPUT);
  pinMode(pinBlue, OUTPUT);

}

void loop() {
  digitalWrite(pinRed, 255);
  digitalWrite(pinGreen, 255);
  digitalWrite(pinBlue, 0);

}
