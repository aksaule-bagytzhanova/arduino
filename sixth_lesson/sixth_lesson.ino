int ftr = 0;
int val = 0;
int val1 = 0;
int led = 2;
int wtr = 1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val1 = analogRead(wtr);
  val = analogRead(ftr);
  Serial.println(val1);
  if (val <750)
    digitalWrite(led, 1);
  else
    digitalWrite(led, 0); 

}
