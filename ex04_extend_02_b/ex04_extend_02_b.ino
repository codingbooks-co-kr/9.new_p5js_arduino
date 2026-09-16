// 아두이노: 비교 연산 결과

void setup() {
  Serial.begin(9600);
  Serial.println(10 > 5);
  Serial.println(10 < 5);
  Serial.println(10 == 5);
  Serial.println(10 != 5);
}

void loop() { }
