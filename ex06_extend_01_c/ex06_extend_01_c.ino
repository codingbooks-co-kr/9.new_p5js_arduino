// 배열의 선언 및 초기화를 한 번에 처리

#define LED 6
int x[3] = {200, 400, 600};

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED, 1);
    delay(x[i]);
    digitalWrite(LED, 0);
    delay(x[i]);
  }
}
