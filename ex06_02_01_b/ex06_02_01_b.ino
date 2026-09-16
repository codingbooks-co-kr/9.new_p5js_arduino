// 버튼으로 LED 점등 (배열 사용)

#define BUTTON 2
const int LED[] = {6, 7, 8, 12};

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED[0], OUTPUT);
  pinMode(LED[1], OUTPUT);
  pinMode(LED[2], OUTPUT);
  pinMode(LED[3], OUTPUT);
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0) {
    digitalWrite(LED[0], 1);
    digitalWrite(LED[1], 1);
    digitalWrite(LED[2], 1);
    digitalWrite(LED[3], 1);
  } else {
    digitalWrite(LED[0], 0);
    digitalWrite(LED[1], 0);
    digitalWrite(LED[2], 0);
    digitalWrite(LED[3], 0);
  }
}
