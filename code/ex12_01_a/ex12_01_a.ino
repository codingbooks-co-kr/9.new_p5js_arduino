// 아두이노: 인터럽트 방식
// 수신된 정수로 LED 밝기 제어

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() { }

// 수신값이 있으면 자동 호출
void serialEvent() {
  int value = Serial.read();	// 수신
  analogWrite(LED, value);
  Serial.write('B');     		// 송신
}