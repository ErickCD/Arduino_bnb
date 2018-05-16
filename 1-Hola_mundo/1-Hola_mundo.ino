int ledRed = 9;
int ledGreen = 10;
int ledBlue = 11;

void setup() {
  Serial.begin(9600);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledBlue, OUTPUT);
}

void loop() {
  while(Serial.available() == 0);
    char val = Serial.read();
    
    if(val == '0') {
      Serial.println("Invalido");
    } else if(val == '1') {
      color(255, 0, 0); //Color rojo
      delay(1000);
    } else if(val == '2'){
      color(0, 255, 0); //Color verde
      delay(1000);
    } else if(val == '3') {
      color(0, 0, 255); //Color azul
      delay(1000);
    } else if(val == '4') {
      color(255, 255, 255); //Color blanco
      delay(1000);
    } else if(val == '5') {
      color(255, 0, 255); //Color magenta
      delay(1000);
    } else if(val == '6') {
      color(255, 128, 0); //Color naranja
      delay(1000);
    }
  }

  void color(int rojo, int verde, int azul){
    //Escritura de PWM del color rojo
    analogWrite(ledRed, 255-rojo);

    //Escritura de PWM del color verde
    analogWrite(ledGreen, 255-verde);

    //Escritura de PWM del color azul
    analogWrite(ledBlue, 255-azul);
  }

