// 아두이노: 수신된 정수로 LED 점멸 제어

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {		// 수신 여부 검사
    int value = Serial.read();		// 수신값 읽기
    if (value == 1) {			// 수신값이 1인 경우
      digitalWrite(LED, 1);
    } else if (value == 0) {		// 수신값이 0인 경우
      digitalWrite(LED, 0);
    }
  }
}