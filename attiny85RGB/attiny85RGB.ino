#define PINRED 0
#define PINGREEN 1
#define PINBLUE 2

void setup() {
    pinMode(PINRED, OUTPUT);
    pinMode(PINGREEN, OUTPUT);
    pinMode(PINBLUE, OUTPUT);

}

void loop() {
    analogWrite(PINRED, 255);
    analogWrite(PINGREEN, 255);
    analogWrite(PINBLUE, 255);

}
