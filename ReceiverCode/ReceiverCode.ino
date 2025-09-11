#include <SoftwareSerial.h>
#include "rgb_lcd.h"
#include <Wire.h>

rgb_lcd lcd;
SoftwareSerial mySerial(7, 6);

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);

  lcd.begin(16, 2);
  lcd.print("waiting.....");
}

void loop() {
  if (mySerial.available() > 0) {
    String receiveMessage = mySerial.readStringUntil('\n');
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(receiveMessage);
  }
}

