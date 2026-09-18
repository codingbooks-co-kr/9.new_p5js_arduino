// 시리얼 통신으로 값 출력

void setup() {
  Serial.begin(9600);
  Serial.println(12, BIN);		// 2진수 문자열: "1100"
  Serial.println(12, DEC);       	// 10진수 문자열: "12"
  Serial.println(12, HEX);       	// 16진수 문자열: "C“
  Serial.println(3.141592, 0);		// 소수 0자리 반올림: 3
  Serial.println(3.141592, 4);		// 소수 4자리 반올림: 3.1416
}

void loop() { }