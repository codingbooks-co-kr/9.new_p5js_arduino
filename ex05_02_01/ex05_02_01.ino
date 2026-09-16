// digitalWrite() 함수를 사용한 LED 밝기 조절 모방

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, 0);
  delay(500);
  for (int i = 0; i < 50; i++) {
    digitalWrite(LED, 1);
    delay(2);
    digitalWrite(LED, 0);
    delay(8);
  }
  for (int i = 0; i < 50; i++) {
    digitalWrite(LED, 1);
    delay(4);
    digitalWrite(LED, 0);
    delay(6);
  }
  for (int i = 0; i < 50; i++) {
    digitalWrite(LED, 1);
    delay(6);
    digitalWrite(LED, 0);
    delay(4);
  }
  for (int i = 0; i < 50; i++) {
    digitalWrite(LED, 1);
    delay(8);
    digitalWrite(LED, 0);
    delay(2);
  }
  digitalWrite(LED, 1);
  delay(500);
}
