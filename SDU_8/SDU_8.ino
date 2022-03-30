int led = 2;
int sound_read = A0;
int sound_output = A1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  tone(sound_output, 222);
  if (analogRead(sound_read)>50) {
    digitalWrite(led, 1);
    delay(2000);
    noTone(sound_output);
    digitalWrite(led, 0);
    delay(2000);
  }
  else{
    digitalWrite(led, 0);
  }
  delay(random(1000, 10000));
}
