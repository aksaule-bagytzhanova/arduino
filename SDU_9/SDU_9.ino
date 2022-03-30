// пин подключения контакта VRX
#define PIN_VRX A1
// пин подключения контакта VRY
#define PIN_VRY A0
// пин подключения кнопки
#define PIN_BUTTON 3

void setup () {
   // запуск последовательного порта
   Serial.begin (9600);
}

void loop () {
   // Выводим значение по оси X
   Serial.print("X = ");
   Serial.println(analogRead(PIN_VRX));
   // Выводим значение по оси Y
   Serial.print("Y = ");
   Serial.println(analogRead(PIN_VRY));
   // Состояние кнопки
   Serial.print("button = ");
   if (digitalRead(PIN_BUTTON) == HIGH) {
      Serial.println ("NOT CLICK");
   }
   else {
      Serial.println ("CLICK!");
   }
   // Пауза 1 сек
   delay (1000);
}
