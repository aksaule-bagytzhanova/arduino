int led2 = 2;
int led3 = 3;
int led4 = 4;
void setup() {
  // put your setup code here, to run once:
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led2, 1);
  digitalWrite(led3, 1);
  digitalWrite(led4, 1);
  delay(1000);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);
  digitalWrite(led4, 0);
  delay(1000);
}
