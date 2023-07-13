#define PINRED 0
#define PINGREEN 1
#define PINBLUE 2
#define POTRED 3
#define POTGREEN 4
#define POTBLUE 5

void setup() {
    pinMode(PINRED, OUTPUT);
    pinMode(PINGREEN, OUTPUT);
    pinMode(PINBLUE, OUTPUT);
    pinMode(POTRED, INPUT);
    pinMode(POTGREEN, INPUT);
    pinMode(POTBLUE, INPUT);

}

void loop() {
    int redValue = map(analogRead(POTRED), 0, 1023, 0, 255);
    int greenValue = map(analogRead(POTGREEN), 0, 1023, 0, 255);
    int blueValue = map(analogRead(POTBLUE), 0, 1023, 0, 255);
    analogWrite(PINRED, redValue);
    analogWrite(PINGREEN, greenValue);
    analogWrite(PINBLUE, blueValue);

}
