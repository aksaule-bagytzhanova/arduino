int led = 13;
int ldr = A0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (analogRead(ldr) < 800) digitalWrite(led, 35);
  else if (analogRead(ldr) < 10) digitalWrite(led, 200);
  else digitalWrite(led, LOW);

}
