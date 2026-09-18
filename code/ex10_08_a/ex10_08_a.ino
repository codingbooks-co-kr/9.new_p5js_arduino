// 아두이노: 수신된 두 개의 정수로 서보모터 각도 및 LED 밝기 제어

#include <Servo.h>			// Servo 클래스가 선언된 헤더파일 가져오기
#define LED 6
#define SERVO A0
Servo servo;				// Servo 클래스를 이용한 servo 객체의 선언 및 생성

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(SERVO, OUTPUT);
  servo.attach(SERVO);			// SERVO핀(→A0)을 servo 객체에 연결
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {		// 수신 버퍼에 수신값이 있을 때
    int value1 = Serial.parseInt();	// 서보모터 각도값 수신
    int value2 = Serial.parseInt();	// LED 밝기값 수신
    servo.write(value1);
    analogWrite(LED, value2);
  }
}