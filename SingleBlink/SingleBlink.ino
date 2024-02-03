void turnOffLeds()
{
  for (int i = 2; i <= 9; ++i)
  {
    digitalWrite(i, LOW);
  }
}

// the setup function runs once when you press reset or power the board
void setup() {
  // Will init all of my LEDS
  for (int i = 2; i <= 9; ++i)
    // initialize digital pin i as an output.
    pinMode(i, OUTPUT);

  turnOffLeds();
}

// the loop function runs over and over again forever
void loop() {
  
  for (int i = 2; i <= 9; ++i)
  {
    digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
    delay(1000);                       // wait for a second
    digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
    delay(1000);                       // wait for a second
  }
}
