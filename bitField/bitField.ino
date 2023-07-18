#define BUTTON_PIN 0
#define LED_PIN 1
struct bitField {
  unsigned int i1:1;
  unsigned int i2:1;
  unsigned int i3:1;
  unsigned int i4:1;
  unsigned int o1:1;
  unsigned int o2:1;
  unsigned int o3:1;
  unsigned int o4:1;
};

struct bitField buttonInput;
struct bitField ledOutput;


void setup() {
    pinMode(BUTTON_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);

}

void loop() {
    buttonInput.i1 = digitalRead(BUTTON_PIN);
    if (buttonInput.i1 == 1) {
      digitalWrite(LED_PIN, HIGH);
    } else {
      digitalWrite(LED_PIN, LOW);
    }
}
