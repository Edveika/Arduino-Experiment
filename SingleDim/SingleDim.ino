// the setup function runs once when you press reset or power the board
void setup() {
  // Will init all of my LEDS
  for (int i = 2; i <= 9; ++i)
    // initialize digital pin i as an output.
    pinMode(i, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  for (int i = 2; i <= 9; ++i)
  {
    digitalWrite(i, HIGH);
    delay(500);
    digitalWrite(i, LOW);
    delay(500);
  }
}
