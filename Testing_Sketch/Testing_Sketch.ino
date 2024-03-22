
#define D13                        53
#define D14                        54

#define DEFAULT_BLINK_RATE_MS     250
#define DEFAULT_NR_CYCLES         1

#define LOOP_DELAY_MS             1000

#define SWITCH_WHITE_PIN          D13
#define SWITCH_BLUE_PIN           D14

/*
  Blink a standard LED on the selected pin.
  Pins are active LOW

  Parameters:
    pin:            The pin the LED is connected to
    blink_rate_ms:  The blink rate in ms
    nr_cycles:      The number of times to blink the LED

  Returns:          void
*/
void blink_led_c33 (uint8_t pin, uint8_t blink_rate_ms=DEFAULT_BLINK_RATE_MS, uint8_t nr_cycles=DEFAULT_NR_CYCLES) {
  uint8_t index;

  for (index=0; index < nr_cycles; index++) {
    //  Turn the LED ON
    digitalWrite(pin, LOW);
    delay(blink_rate_ms);
      
    //  Turn the LED OFF
    digitalWrite(pin, HIGH);
    delay(blink_rate_ms);
  }
}

bool switch_state (uint8_t pin) {
  return digitalRead(pin);
}

void setup(void) {
  Serial.begin(115200);
  delay(7000);

  //  Put your setup code here, to run once:
  pinMode(SWITCH_WHITE_PIN, INPUT_PULLUP);
  pinMode(SWITCH_BLUE_PIN, INPUT_PULLUP);

  pinMode(SWITCH_WHITE_PIN, INPUT);

}

void loop() {
  bool state;

  Serial.println("Blink...");
  blink_led_c33(SWITCH_WHITE_PIN, 250, 5);
  blink_led_c33 (SWITCH_BLUE_PIN, 250, 5);

  state = switch_state(SWITCH_WHITE_PIN);

  if (state) {
    digitalWrite(LED_WHITE_PIN, HIGH);
  } else {
    digitalWrite(LED_WHITE_PIN, LOW);
  }

  delay(LOOP_DELAY_MS);
}
