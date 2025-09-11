#include <SoftwareSerial.h>

SoftwareSerial mySerial(6, 7);

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    mySerial.print(Serial.readStringUntil('\n'));
  }
}


