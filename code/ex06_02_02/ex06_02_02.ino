// 버튼으로 LED 점등 (배열과 반복문 사용) 

#define BUTTON 2
const int LED[] = {6, 7, 8, 12};

void setup() {
  pinMode(BUTTON, INPUT);
  for (int i = 0; i < 4; i++) {
    pinMode(LED[i], OUTPUT);
  }
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0) {
    for (int i = 0; i < 4; i++) {
      digitalWrite(LED[i], 1);
    }
  } else {
    for (int i = 0; i < 4; i++) {
      digitalWrite(LED[i], 0);
    }
  }
}
