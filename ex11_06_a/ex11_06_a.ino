// 아두이노: 가변저항값 송신 3

#define VARIABLE_R A1

void setup() {
  pinMode(VARIABLE_R, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(VARIABLE_R);
  Serial.write(0xff);	// 동기신호
  int high_byte = (value & 0xff00) >> 8;
  int low_byte = value & 0x00ff;
  Serial.write(high_byte);
  Serial.write(low_byte);
  delay(30);		// 전송속도 지연
}