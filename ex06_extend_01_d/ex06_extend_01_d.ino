// 배열의 선언 및 초기화를 따로 처리

#define LED 6
int x[3];

void setup() {
  pinMode(LED, OUTPUT);
  x[0] = 200;
  x[1] = 400;
  x[2] = 600;
}

void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED, 1);
    delay(x[i]);
    digitalWrite(LED, 0);
    delay(x[i]);
  }
}
