
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  //pinMode(13, OUTPUT);
  pinMode(3, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(3, HIGH);
  delay(5000);              // wait for 5 second
  //digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(3, LOW);
  delay(5000);              // wait for 5 second
}
