// analogWrite() 함수를 사용한 LED 밝기 조절

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  for (int i = 0; i < 256; i++) {
    analogWrite(LED, i);
    delay(10);
  }
  digitalWrite(LED, 0);
  delay(500);
}
