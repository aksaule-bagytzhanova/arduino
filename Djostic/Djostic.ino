#define axis_X 0
#define axis_Y 1
#define axis_Z 2

int value_X, value_Y, value_Z = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(axis_Z, INPUT);
  digitalWrite(axis_Z, HIGH);

  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  value_X = analogRead(axis_X);
  Serial.print("X:");
  Serial.print(value_X, DEC);
  value_Y = analogRead(axis_Y);
  Serial.print(" |Y:");
  Serial.print(value_Y, DEC);
  value_Z = digitalRead(axis_Z);
  Serial.print(" |Z: ");
  Serial.println(value_Z);
  
}
