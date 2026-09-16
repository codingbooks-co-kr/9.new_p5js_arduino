// LED를 1초 간격으로 점멸 1

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, 1);
  delay(1000);
  digitalWrite(13, 0);
  delay(1000);
}
