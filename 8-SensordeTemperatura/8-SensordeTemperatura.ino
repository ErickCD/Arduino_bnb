int miliVolts;

void setup() {
  Serial.begin(9600);
}

void loop() {
  miliVolts = map(analogRead(0), 0, 1023, 0, 5000);
  Serial.println(miliVolts/10);
}
