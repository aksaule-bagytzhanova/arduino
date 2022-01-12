#include <dht.h>
DHT sensor = DHT();
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  sensor.attach(A0);
  delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensor.update();
  switch(sensor.getLastError()){
    case DHT_ERROR_OK:
      char msg[128];
      sprintf(msg, "Temperature = %dC, Humidity = %d%%", sensor.getTemperatureInt(), sensor.getHumidityInt());
      Serial.println(msg);
      break;
    case DHT_ERROR_START_FAILED_1:
      Serial.println("Error: start failed (step 1)");
      break;
    case DHT_ERROR_START_FAILED_2:
      Serial.println("Error: start failed (step 2)");
      break;
    case DHT_ERROR_READ_TIMEOUT:
      Serial.println("Error: read timeout");
      break;
    case DHT_ERROR_CHECKSUM_FAILURE:
      Serial.println("Error: checksum error");
      break;
  }
  delay(2000);

}
