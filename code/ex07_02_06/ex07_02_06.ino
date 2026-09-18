// 버튼을 누르면 200ms 주기로 5회 LED 점멸 (유형2)

#define BUTTON 2
#define LED 6

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0) {
    for (int i = 0; i < 5; i++) {
      blink(200);
    }
  }
}

void blink(int time) {
  digitalWrite(LED, 1);
  delay(time);
  digitalWrite(LED, 0);
  delay(time);
}
