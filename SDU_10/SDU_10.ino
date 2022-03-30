#include <Servo.h>

#define PIN_SERVO_X 4
#define PIN_SERVO_Y 5


#define PIN_VRX A1
#define PIN_VRY A0
#define PIN_BUTTON 3

// создание объектов Servo
Servo servoX;
Servo servoY;
// служебные переменные
int joyXpr=0;
int joyYpr=0;
int joyX, joyY;
int angleX, angleY;

void setup () {
   Serial.begin (9600);
   
   servoX.attach(PIN_SERVO_X);
   servoY.attach(PIN_SERVO_Y);
}

void loop () {
   joyX=analogRead(PIN_VRX);
   joyY=analogRead(PIN_VRY);
   // Выводим значение по оси X
   Serial.print("X = ");
   Serial.print(joyX);
   // Выводим значение по оси Y
   Serial.print("  Y = ");
   Serial.println(joyY);
   // сравнение с предыдущими
   if(abs(joyX-joyXpr)>10) { // повернуть по оси X
       angleX=map(joyX,0,1023,0,180);
       servoX.write(angleX);
       // время на перемещение сервопривода
       delay(15);
   }
   if(abs(joyY-joyYpr)>10) { // повернуть по оси Y
       angleY=map(joyY,0,1023,0,180);
       servoY.write(angleY);
       // время на перемещение сервопривода
       delay(15);
   }
   joyXpr=joyX;
   joyYpr=joyY;
}
