// 버튼으로 서보모터 제어

#include <Servo.h>
#define BUTTON 2
#define SERVO A0
Servo servo;

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(SERVO, OUTPUT);
  servo.attach(SERVO);
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0) {
    for (int i = 0; i < 180; i++) {
      servo.write(i);
      delay(20);
    }
    for (int i = 180; i >= 0; i--) {
      servo.write(i);
      delay(20);
    }
  }
}
