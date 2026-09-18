// 10진수, 2진수, 16진수 값 출력

void setup() {
  Serial.begin(9600);
  int value = 255;

  Serial.print("int: ");
  Serial.println(value);

  Serial.print("DEC: ");
  Serial.println(value, DEC);

  Serial.print("BIN: ");
  Serial.println(value, BIN);

  Serial.print("HEX: ");
  Serial.println(value, HEX);
}

void loop() {
}
