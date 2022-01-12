const int digitalPin = 2;
const int digitalPin2 = 3;
int sensor;
void setup() {
  // put your setup code here, to run once:
  pinMode(digitalPin2, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensor = digitalRead(digitalPin);
  if (sensor == LOW){
    Serial.println("SOUND DETECTED");
  }

  delay(2);

}
