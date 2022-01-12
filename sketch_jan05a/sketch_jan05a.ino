int ledPin = 13;
byte flicker[] = {180,30,255,200,10,90,150,60};
void setup() {
  pinMode(ledPin, OUTPUT);
  
}

void loop() {
  for(int i=0; i<7; i++){
    analogWrite(ledPin,flicker[i]);
    delay(200);
  }

}
