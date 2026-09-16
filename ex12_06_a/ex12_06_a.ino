// 아두이노: 인터럽트 방식
// 푸시버튼값 2개 송신

#define BUTTON1 2
#define BUTTON2 4

void setup() {
  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
  Serial.begin(9600);
  while (Serial.available() == 0) {
    Serial.println('A');	// 시작신호 전송
    delay(300);		// 0.3초 대기
  }
}

void loop() { }

// 수신값이 있으면 자동 호출
void serialEvent() {
  int signal = Serial.read();	// 수신
  int value1 = digitalRead(BUTTON1);
  int value2 = digitalRead(BUTTON2);
  Serial.print(value1);
  Serial.print(",");
  Serial.println(value2);		// 송신
}