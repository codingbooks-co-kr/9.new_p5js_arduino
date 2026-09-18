// 아두이노: 가변저항값 2개 송신 1

#define VARIABLE_R1 A1
#define VARIABLE_R2 A2

void setup() {
  pinMode(VARIABLE_R1, INPUT);
  pinMode(VARIABLE_R2, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value1 = analogRead(VARIABLE_R1);	// 가변저항값1 읽기
  int value2 = analogRead(VARIABLE_R2);	// 가변저항값2 읽기
  value1 = map(value1, 0, 1023, 0, 255);	// 1바이트(0∼255)로 값 변환
  value2 = map(value2, 0, 1023, 0, 255);	// 1바이트(0∼255)로 값 변환
  Serial.write('A');				// 동기신호 ‘A’를 송신
  Serial.write(value1);				// 가변저항1의 1바이트(0∼255) 전송
  Serial.write(value2);				// 가변저항2의 1바이트(0∼255) 전송
  delay(30);					// 전송속도 지연
}