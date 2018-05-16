void setup() {
  pinMode(9, OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() {
  //digitalWrite establece el estado del pin output digital
  //digitalWrite (numero de pin digital, HIGH=1=5V o LOW=0=0V)
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  //delay(500);
  digitalWrite(10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  //delay(500);
}
