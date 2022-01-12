#include <SPI.h>
#include <MFRC522.h>
#define RST_PIN 9
#define SS_PIN 10
bool isValid = false;
MFRC522 mfrc522(SS_PIN, RST_PIN); 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  while(!Serial);
Serial
  SPI.begin();
  mfrc522.PCD_Init();

}

void loop() {
  // put your main code here, to run repeatedly:
  if (!mfrc522.PICC_IsNewCardPresent()){
    return;
  }

  if(!mfrc522.PICC_ReadCardSerial()){
    return;
  }

  byte uidCard[] = {0x98, 0x6B, 0x1D, 0x00};
  isValid = true;

  Serial.print("Card UID:");

  for(byte i=0; i < mfrc522.uid.size; i++) {
    if (mfrc522.uid.uidByte[i] < 0x10) Serial.print(F(" 0"));
    else Serial.print(F(" "));
    Serial.print(mfrc522.uid.uidByte[i], HEX);
    if (mfrc522.uid.uidByte[i] != uidCard[i]){
      isValid = false;
    }
  }

  if (isValid) {
    Serial.println(" KEY VALID");
  }
  else{
    Serial.println(" KEY INVALID");
  
  }

}
