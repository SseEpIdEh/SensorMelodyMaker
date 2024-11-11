 
void setup() {
  pinMode(10, OUTPUT);

}

void loop() {
  tone(10,262);
  delay(250);

  tone(10,392);
  delay(500);

  tone(10,311);
  delay(500);

  tone(10,262);
  delay(250);

  noTone(10);
  delay(250);
}
