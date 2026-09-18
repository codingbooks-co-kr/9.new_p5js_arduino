// 2진 연산: AND, OR, XOR, NOT, SHIFT 연산

void setup() {
  Serial.begin(9600);
  int value1 = 10;
  int value2 = 12;
  int val1 = value1 & value2;     // 2진 AND 연산
  int val2 = value1 | value2;     // 2진 OR 연산
  int val3 = value1 ^ value2;     // 2진 XOR 연산
  int val4 = ~value1;             // 2진 NOT 연산
  int val5 = ~value2;             // 2진 NOT 연산
  int val6 = value1 << 3;         // 2진 왼쪽 SHIFT 연산
  int val7 = value1 >> 3;         // 2진 오른쪽 SHIFT 연산

  Serial.print("value1 = ");
  Serial.println(value1, BIN);    // 2진 표현 
  Serial.print("value2 = ");
  Serial.println(value2, BIN);    // 2진 표현 
  Serial.println();
  Serial.print("value1 & value2 = ");
  Serial.println(val1, BIN);      // AND 연산 결과
  Serial.print("value1 | value2 = ");
  Serial.println(val2, BIN);      // OR 연산 결과
  Serial.print("value1 ^ value2 = ");
  Serial.println(val3, BIN);      // XOR 연산 결과
  Serial.print("~value1 = ");
  Serial.println(val4, BIN);      // NOT 연산 결과
  Serial.print("~value2 = ");
  Serial.println(val5, BIN);      // NOT 연산 결과
  Serial.print("value1 << 3 = ");
  Serial.println(val6, BIN);      // 왼쪽 SHIFT 연산 결과
  Serial.print("value1 >> 3 = ");
  Serial.println(val7, BIN);      // 오른쪽 SHIFT 연산 결과
}

void loop() {
}
