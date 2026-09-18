// 버튼으로 LED 점등 (배열 미사용) 

#define BUTTON 2
#define LED1 6
#define LED2 7
#define LED3 8
#define LED4 12

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0) {
    digitalWrite(LED1, 1);
    digitalWrite(LED2, 1);
    digitalWrite(LED3, 1);
    digitalWrite(LED4, 1);
  } else {
    digitalWrite(LED1, 0);
    digitalWrite(LED2, 0);
    digitalWrite(LED3, 0);
    digitalWrite(LED4, 0);
  }
}
