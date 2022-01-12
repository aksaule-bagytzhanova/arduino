#include <Stepper_28BYJ.h>
const int stepsPerRevolution = 4096;

Stepper_28BYJ myStepper_28BYJ(stepsPerRevolution, 8, 9, 10, 11);

void setup() {
  // put your setup code here, to run once:
  myStepper_28BYJ.setSpeed(3);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("counterclockwise");
  myStepper_28BYJ.step(stepsPerRevolution);
  delay(500);
  Serial.println("clockwise");
  myStepper_28BYJ.step(-stepsPerRevolution);
  delay(500);
  
}
