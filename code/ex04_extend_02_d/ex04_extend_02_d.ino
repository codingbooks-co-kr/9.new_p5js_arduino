// 버튼으로 LED 제어 (boolean형 변수 사용)

#define BUTTON 2
#define LED 6

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  boolean value = digitalRead(BUTTON);
  digitalWrite(LED, !value);
}
