// 아두이노: 인터럽트(interrupt) 방식
// 수신된 정수로 LED 점멸 제어

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() { }

// 수신값이 있으면 자동 호출
void serialEvent() {
  int value = Serial.read();	// 읽기
  if (value == 1) {    		// 1 수신
    digitalWrite(LED, 1);
  } else if (value == 0) {  	// 0 수신
    digitalWrite(LED, 0);
  }
}