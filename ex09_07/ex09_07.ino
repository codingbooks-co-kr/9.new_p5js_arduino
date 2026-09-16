// 수신된 데이터 중 정수 3개 추출

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    int r = Serial.parseInt();
    int g = Serial.parseInt();
    int b = Serial.parseInt();
    Serial.print("red: ");
    Serial.println(r);
    Serial.print("green: ");
    Serial.println(g);
    Serial.print("blue: ");
    Serial.println(b);
  }
}
