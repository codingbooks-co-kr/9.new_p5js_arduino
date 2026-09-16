// 아두이노: 인터럽트 방식
// 가변저항값 송신

#define VARIABLE_R A1

void setup() {
  pinMode(VARIABLE_R, INPUT);
  Serial.begin(9600);
}

void loop() { }

// 수신값이 있으면 자동 호출
void serialEvent() {
  int signal = Serial.read();	// 수신
  int value = analogRead(VARIABLE_R);
  value = map(value, 0, 1023, 0, 255);
  Serial.write(value);		// 송신
}