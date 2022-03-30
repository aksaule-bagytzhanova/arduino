int led1 = 2;
int light = A0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   if (analogRead(light) <200) digitalWrite(led1, HIGH);
   else digitalWrite(led1, LOW);
}
