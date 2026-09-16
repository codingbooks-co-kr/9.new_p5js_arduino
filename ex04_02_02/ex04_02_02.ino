// 버튼 2개를 동시에 눌러 LED 점등

#define BUTTON1 2
#define BUTTON2 4
#define LED 6

void setup() {
  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(LED, OUTPUT);
}

void loop() {
  int value1 = digitalRead(BUTTON1);
  int value2 = digitalRead(BUTTON2);

  if ((value1 == 0) && (value2 == 0)) {
    digitalWrite(LED, 1);
  } else {
    digitalWrite(LED, 0);
  }
}
