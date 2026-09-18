// 시리얼 통신으로 데이터 송·수신2

void setup() {
  Serial.begin(9600);
  Serial.println("Please input data");
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    Serial.print("data: ");
    Serial.println(c);
  }
}
