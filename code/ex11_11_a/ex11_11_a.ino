// 아두이노: 가변저항값 송신

#define VARIABLE_R A1

void setup() {
  pinMode(VARIABLE_R, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(VARIABLE_R);
  Serial.write('A');			// 동기신호 ‘A’를 송신
  Serial.write(value / 100);		// 10진수(4자리)의 상위 2자리값 송신
  Serial.write(value % 100);		// 10진수(4자리)의 하위 2자리값 송신
  delay(30);				// 전송속도 지연
}