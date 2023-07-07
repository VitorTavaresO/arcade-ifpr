// Arduino sketch that controls a common cathode or common anode RGB LED
// Uses simple digital on/off control (not PWM)
// Displays all possible digital combinations of LED red, green and blue

// Swap these definitions if using a common anode RGB LED
#define LED_ON    HIGH
#define LED_OFF   LOW

// Arduino digital pins that control red, green and blue colors:
const int LED_R = 2;
const int LED_G = 3;
const int LED_B = 4;

void setup() {
  // Configure pins connected to LED R, G and B as outputs
  pinMode(LED_R, OUTPUT);
  pinMode(LED_G, OUTPUT);
  pinMode(LED_B, OUTPUT);
}

void loop() {
  // All possible combinations of red, green and blue:
  for (int i = 0; i < 8; i++) {
    digitalWrite(LED_R, i & 0x04 ? LED_ON : LED_OFF);
    digitalWrite(LED_G, i & 0x02 ? LED_ON : LED_OFF);
    digitalWrite(LED_B, i & 0x01 ? LED_ON : LED_OFF);
    delay(1000);
  }
}
