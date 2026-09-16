// 아두이노: 아스키코드를 문자, 10진수, 16진수, 2진수 순으로 출력

void setup() {
  Serial.begin(9600);
  Serial.println("ASCII Table");
  for (int i = 0; i < 128; i++) {
    Serial.write(i);
    Serial.print(", DEC: ");
    Serial.print(i);
    Serial.print(", HEX: ");
    Serial.print(i, HEX);
    Serial.print(", BIN: ");
    Serial.println(i, BIN);
  }
}

void loop() { }
