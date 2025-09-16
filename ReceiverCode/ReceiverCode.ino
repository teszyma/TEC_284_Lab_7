const int RED_PIN = 7;
const int YELLOW_PIN = 6;
const int GREEN_PIN = 5;
const int BUTTON_PIN = 2;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == HIGH) {
    digitalWrite(RED_PIN, LOW);
    digitalWrite(YELLOW_PIN, LOW);
    digitalWrite(GREEN_PIN, LOW);
  } else {
    digitalWrite(GREEN_PIN, HIGH);
    delay(3000);
    digitalWrite(GREEN_PIN, LOW);

    digitalWrite(YELLOW_PIN, HIGH);
    delay(1000);
    digitalWrite(YELLOW_PIN, LOW);

    digitalWrite(RED_PIN, HIGH);
    delay(3000);
    digitalWrite(RED_PIN, LOW);
  }
}


