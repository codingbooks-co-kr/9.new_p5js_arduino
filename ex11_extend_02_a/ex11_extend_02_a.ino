// 아두이노: 푸시버튼값 송신

#define BUTTON 2

void setup() {
  pinMode(BUTTON, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);		// 버튼값 읽기
  if (value == 0) Serial.write(0);		// 0 송신
  else Serial.write(1);				// 1 송신
  delay(30);					// 추가: 전송속도 지연(30msec)
}