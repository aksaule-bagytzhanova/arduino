int btn = 2;
int val = 0;
int led = 9;
int s =0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(btn, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(btn);
  if(val=0)
    s = 1 - s;
  digitalWrite(led, s);
  Serial.println(val);
}
