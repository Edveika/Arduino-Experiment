#define LED_START 2
#define LED_END 9

// Turns off all of the LEDs
// NOTE: for some reason on my board HIGH and LOW are inverted
// HIGH - turn off
// LOW - turn on
void turnOffLeds() {
  for (int i = LED_START; i <= LED_END; ++i)
    digitalWrite(i, HIGH);
}

// the setup function runs once when you press reset or power the board
void setup() {
  // Will init all of my LEDS
  for (int i = LED_START; i <= LED_END; ++i)
    // initialize digital pin i as an output.
    pinMode(i, OUTPUT);

  // Turns off all of the LEDs on launch
  turnOffLeds();
}

// the loop function runs over and over again forever
void loop() {
  // Go backwards
  for (int i = LED_END; i >= LED_START; --i)
  {
    digitalWrite(i, LOW);
    delay(100);

    // Turn on all of the LEDs to the right
    for (int j = i - 1; j >= LED_START; --j)
    {
      digitalWrite(j, LOW);
      delay(10);
    }
    // Turn off all of the LEDs to the left
    for (int j = LED_START; j <= i; ++j)
    {
      digitalWrite(j, HIGH);
      delay(10);
    }
    
    digitalWrite(i, HIGH);
    delay(100);
  }

  // Go forwards
  for (int i = LED_START; i <= LED_END; ++i)
  {
    digitalWrite(i, LOW);
    delay(100);

    // Turn on all of the LEDs to the left
    for (int j = i + 1; j <= LED_END; ++j)
    {
      digitalWrite(j, LOW);
      delay(10);
    }
    // Turn off all of the LEDs to the right
    for (int j = LED_END; j >= i; --j)
    {
      digitalWrite(j, HIGH);
      delay(10);
    }
    digitalWrite(i, HIGH);
    delay(100);
  }
}
