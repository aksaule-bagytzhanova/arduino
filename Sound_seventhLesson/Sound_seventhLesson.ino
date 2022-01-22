int sound = 2;
int led = 13;
int val = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(sound, INPUT);
  pinMode(led, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(sound);
  Serial.println(val);
  if(val==0)
    digitalWrite(led, 1);
  else
    digitalWrite(led, 0);
}
