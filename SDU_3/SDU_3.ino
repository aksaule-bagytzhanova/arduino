int sound = A0;
int sound_output = 2;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A0));
  if (analogRead(A0))>200)
  digitalWrite(sound_output, 1);
  else digitalWrite(sound_output, 0);
  
}
