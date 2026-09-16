// 수신된 데이터 중 정수 1개 추출

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    int c = Serial.parseInt();
    Serial.print("data: ");
    Serial.println(c);
  }
}
