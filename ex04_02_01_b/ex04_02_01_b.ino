// 버튼으로 LED 제어 (if-else문)

#define BUTTON 2
#define LED 6

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0) {
    digitalWrite(LED, 1);
  } else {
    digitalWrite(LED, 0);
  }
}
