#define CLOCK 13
#define DATA 12
#define LATCH 8
void setup() {
  // put your setup code here, to run once:
  pinMode(CLOCK, OUTPUT);
  pinMode(DATA, OUTPUT);
  pinMode(LATCH, OUTPUT);

  digitalWrite(LATCH,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LATCH, LOW);
//
//  shiftOut(DATA, CLOCK, LSBFIRST, 0b10110110);
  shiftOut(DATA, CLOCK, LSBFIRST, 0b11111110);
  digitalWrite(LATCH, HIGH);

}
