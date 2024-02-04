#define LED_START 2

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED_START, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_START, HIGH);
  delay(1000);
  digitalWrite(LED_START, LOW);
  delay(1000);
}
