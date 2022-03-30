int sound = A0;
int button1 = 2;
int button2 = 4;
int button3 = 5;
int sound_output = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button1, OUTPUT);
  pinMode(button2, OUTPUT);
  pinMode(button3, OUTPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(sound));
  if (analogRead(sound) >  100 || digitalRead(button1)== 1){
  tone(sound_output, 2222, 2000); 
  delay(2000);
  }
  else if (analogRead(sound) >  100 || digitalRead(button2)== 1){
  tone(sound_output, 222, 2000); 
  delay(2000);
  }
  else if (analogRead(sound) >  100 || digitalRead(button3)== 1){
  tone(sound_output, 22, 2000); 
  delay(2000);
  }
  else 
  {noTone(sound_output);
  delay(2000);
  }
}
