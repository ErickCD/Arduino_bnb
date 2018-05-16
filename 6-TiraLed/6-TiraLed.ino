void setup() {
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  //pinMode(11, OUTPUT);
}

void loop() {
  for(int i = 0; i <= 255 ; i+=5){
    //analogWrite(9, i);
    analogWrite(11, i);
    //analogWrite(10, 255 - i);
    delay(30);
  }
  delay(500);
}
