// 아두이노: 수신된 정수로 부저 제어

#define BUZZER 13

void setup( ) {
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {	// 검사
    int value = Serial.read();	// 수신
    if (value == 1) {		// 1 수신
      tone(BUZZER, 262);
    } else {			// 0 수신
      noTone(BUZZER);
    }
  }
}