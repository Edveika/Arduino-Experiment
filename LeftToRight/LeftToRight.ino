// Turns off all of the LEDs
// NOTE: for some reason on my board HIGH and LOW are inverted
// HIGH - turn off
// LOW - turn on
void turnOffLeds() {
  for (int i = 2; i <= 9; ++i)
    digitalWrite(i, HIGH);
}

// the setup function runs once when you press reset or power the board
void setup() {
  // Will init all of my LEDS
  for (int i = 2; i <= 9; ++i)
    // initialize digital pin i as an output.
    pinMode(i, OUTPUT);

  // Turns off all of the LEDs on launch
  turnOffLeds();
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 2; i <= 9; ++i)
  {
    digitalWrite(i, LOW);
    delay(500);
  }
  for (int i = 9; i >= 2; --i)
  {
    digitalWrite(i, HIGH);
    delay(500);
  }
}
