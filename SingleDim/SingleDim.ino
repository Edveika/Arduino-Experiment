#define LED_START 2
#define LED_END 9

// the setup function runs once when you press reset or power the board
void setup() {
  // Will init all of my LEDS
  for (int i = LED_START; i <= LED_END; ++i)
    // initialize digital pin i as an output.
    pinMode(i, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for (int i = LED_START; i <= LED_END; ++i)
  {
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
    delay(500);
  }
}
