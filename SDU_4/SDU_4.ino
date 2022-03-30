int sound = A0;
int sound_output = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(sound));
  if (analogRead(sound) >  100){
  analogWrite(sound_output, 22222);
  delay(2000);
  }
  
  else 
  {analogWrite(sound_output, 0);
  delay(2000);
  }
}
