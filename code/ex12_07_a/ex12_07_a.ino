// 아두이노: 인터럽트 방식
// 마우스 위치값 수신, 가변저항값 송신

#define VARIABLE_R A1
#define LED 6

void setup() {
  pinMode(VARIABLE_R, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  while (Serial.available() == 0) {
    Serial.write('A');	// 시작신호 전송
    delay(300);		// 0.3초 대기
  }
}

void loop() { }

// 수신값이 있으면 자동 호출
void serialEvent() {
  int value1 = Serial.read();	// 수신
  analogWrite(LED, value1);

  int value2 = analogRead(VARIABLE_R);
  value2 = map(value2, 0, 1023, 0, 255);
  Serial.write(value2);		// 송신
}