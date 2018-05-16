void setup() {
  pinMode(2, INPUT);
  Serial.begin(9600);
}

void loop() {
  if(digitalRead(2) == 1){ // Si hay mivimiento
    Serial.println("Hay movimiento");
  } else { //Si no hay movimiento
    Serial.println("");
  }
}
