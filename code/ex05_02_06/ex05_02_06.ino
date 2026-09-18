// digitalWrite() 함수를 사용한 LED 밝기 조절 모방

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 50; j++) {
      digitalWrite(LED, 1);
      delay(i);
      digitalWrite(LED, 0);
      delay(10 - i);
    }
  }
}
