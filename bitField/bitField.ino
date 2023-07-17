#define BUTTON_PIN 0
#define LED_PIN 1
struct bitField {
  unsigned int a:1;
  unsigned int b:1;
  unsigned int c:1;
  unsigned int d:1;
  unsigned int e:1;
  unsigned int f:1;
  unsigned int g:1;
  unsigned int h:1;
};

struct bitField input;

void setup() {
    pinMode(BUTTON_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);

}

void loop() {
    input.a = digitalRead(BUTTON_PIN);
    if (input.a == 1) {
      digitalWrite(LED_PIN, HIGH);
    } else {
      digitalWrite(LED_PIN, LOW);
    }
}
