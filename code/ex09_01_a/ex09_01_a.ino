// 시리얼 통신으로 데이터 송·수신1

void setup() {
  Serial.begin(9600);
  Serial.println("Please input data");
}

void loop() {
  if (Serial.available()) {
    int c = Serial.read();
    Serial.print("data: ");
    Serial.println(c);
  }
}
