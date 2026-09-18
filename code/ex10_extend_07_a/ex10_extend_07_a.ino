// 아두이노: 2개의 값 받아 서보모터 각도 및 LED 밝기 제어

#include <Servo.h>			// Servo 클래스가 선언된 헤더파일 가져오기
#define LED 6
#define SERVO A0
Servo servo;				// Servo 클래스 기반 servo 객체의 선언, 생성

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(SERVO, OUTPUT);
  servo.attach(SERVO);			// SERVO핀(→A0)을 servo 객체에 연결
  Serial.begin(9600);
}

void loop() {
  while (Serial.findUntil("A", "\n")) {	// ‘A’와 ‘\n’으로 감싼 문자열 처리
    int value1 = Serial.parseInt();
    int value2 = Serial.parseInt();
    servo.write(value1);
    analogWrite(LED, value2);
  }
}