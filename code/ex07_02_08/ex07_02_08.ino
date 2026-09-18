// 센서 3개(1∼3번핀) 값의 백분율 출력 (유형4)

void setup() {
  Serial.begin(9600);
  for (int i = 1; i <= 3; i++) {
    pinMode(i, INPUT);
  }
}

void loop() {
  for (int i = 1; i <= 3; i++) {
    int value = sensorPercent(i);
    Serial.print(" Pin");
    Serial.print(i);
    Serial.print(": ");
    Serial.print(value);
  }
  Serial.println();
  delay(100);
}

int sensorPercent(int pin) {
  int val = analogRead(pin);
  int percent = map(val, 0, 1023, 0, 100);
  return percent;
}
