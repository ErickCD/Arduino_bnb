void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.println(digitalRead(2));
  if(digitalRead(2) == 0) {
    Serial.println("Presionado boton1");
    delay(300);
  }
  
  if(digitalRead(3) == 0) {
    Serial.println("Presionado boton2");
    delay(300);
  }
  
}
