// 아두이노: 가변저항값 수신

#define LED 6				// PWM 출력핀: LED 밝기 제어

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  while (Serial.available()) {
    int value = Serial.read();		// p5로부터 값 수신
    analogWrite(LED, value);		// 수신된 값을 LED 밝기 변화로 표시
  }
}