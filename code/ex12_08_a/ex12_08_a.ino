// 아두이노: 인터럽트 방식
// 마우스 클릭값 수신, 푸시버튼 클릭값 송신

#define BUTTON 2
#define LED 6

void setup() {
  pinMode(BUTTON, INPUT);
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
  int value1 = Serial.read(); 	// 수신
  digitalWrite(LED, value1);
  int value2 = digitalRead(BUTTON);
  Serial.write(value2);		// 송신
}