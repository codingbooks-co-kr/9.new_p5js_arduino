// 버튼 2개로 LED 2개 점등 제어

#define BUTTON1 2
#define BUTTON2 4
#define LED1 6
#define LED2 7

void setup() {
  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  int value1 = digitalRead(BUTTON1);
  int value2 = digitalRead(BUTTON2);

  if ((value1 == 1) && (value2 == 1)) {
    digitalWrite(LED1, 0);
    digitalWrite(LED2, 0);
  } else if ((value1 == 0) && (value2 == 1)) {
    digitalWrite(LED1, 1);
    digitalWrite(LED2, 0);
  } else if ((value1 == 1) && (value2 == 0)) {
    digitalWrite(LED1, 0);
    digitalWrite(LED2, 1);
  } else {
    digitalWrite(LED1, 1);
    digitalWrite(LED2, 1);
  }
}
