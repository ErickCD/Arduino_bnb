int lectura;

void setup() {
  Serial.begin(9600);
}

void loop() {
  //analogRead devulve un número entre 0 y 1023 que corresponde
  // a la lectura de voltaje de un pin analógico

  //1006 oscuridad total
  //450 Claridad total
  //map (valor a mapear, min original, max original, min deseado, max deseado);
  
  lectura = map(analogRead(0), 1006, 450, 0, 100);
  //lectura = analogRead(0);
  Serial.print("Iluminacion: ");
  Serial.print( lectura );
  Serial.println("%");
}
