// 0.5초와 1초마다 LED 점멸 1 (미완성)

#define LED1 6
#define LED2 7

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  digitalWrite(LED1, 1);
  delay(500);
  digitalWrite(LED1, 0);
  delay(500);
  digitalWrite(LED2, 1);
  delay(1000);
  digitalWrite(LED2, 0);
  delay(1000);
}
