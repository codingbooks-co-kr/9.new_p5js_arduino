// 아두이노: 가변저항값 2개 송신 2

#define VARIABLE_R1 A1
#define VARIABLE_R2 A2

void setup() {
  pinMode(VARIABLE_R1, INPUT);
  pinMode(VARIABLE_R2, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value1 = analogRead(VARIABLE_R1);	// 10비트값을 2바이트의 int형 변수에 저장
  int value2 = analogRead(VARIABLE_R2);	// 10비트값을 2바이트의 int형 변수에 저장

  Serial.write(0xff);     			// 동기신호(0xff) 송신
  int high_byte = (value1 & 0xff00) >> 8;	// 가변저항1의 상위 바이트 추출 후 저장 
  int low_byte = value1 & 0x00ff;		// 가변저항1의 하위 바이트 추출 후 저장 
  Serial.write(high_byte);			// 가변저항1의 상위 바이트 송신
  Serial.write(low_byte);			// 가변저항1의 하위 바이트 송신

  high_byte = (value2 & 0xff00) >> 8;		// 가변저항2의 상위 바이트 추출 후 저장 
  low_byte = value2 & 0x00ff;			// 가변저항2의 하위 바이트 추출 후 저장 
  Serial.write(high_byte);			// 가변저항2의 상위 바이트 송신
  Serial.write(low_byte);			// 가변저항2의 하위 바이트 송신
  delay(30);					// 전송속도 지연
}