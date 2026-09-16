// 정수로 LED 점멸 시간 제어 (미완성)

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Serial.println("Please enter number(1-9)");
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    if (c >= '1' && c <= '9') {
      int time = (c - '0') * 100;
      digitalWrite(LED, 1);
      delay(time);
      digitalWrite(LED, 0);
      delay(time);
      digitalWrite(LED, 1);
      delay(time);
      digitalWrite(LED, 0);
      delay(time);
    }
  }
}
