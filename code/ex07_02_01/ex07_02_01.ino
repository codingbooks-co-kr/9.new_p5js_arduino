// 버튼을 누르는 동안 LED 점멸 (함수유형1)

#define BUTTON 2
#define LED 6

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0) {
    blink();
  }
}

void blink() {
  digitalWrite(LED, 1);
  delay(200);
  digitalWrite(LED, 0);
  delay(200);
}
