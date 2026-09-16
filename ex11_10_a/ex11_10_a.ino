// 아두이노: 가변저항값 2개와 푸시버튼값 송신

#define BUTTON 2
#define VARIABLE_R1 A1
#define VARIABLE_R2 A2
int prev_value = 0;

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(VARIABLE_R1, INPUT);
  pinMode(VARIABLE_R2, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value1 = analogRead(VARIABLE_R1);
  int value2 = analogRead(VARIABLE_R2);
  Serial.print(value1);
  Serial.print(",");
  Serial.print(value2);
  Serial.print(",");

  int value3 = digitalRead(BUTTON);		// 버튼값 읽기
  if (value3 == 0 && prev_value == 1) {	// 버튼을 누른 순간에만 참이 됨!
    Serial.println("pressed");			// 송신값: “value1,value2,pressed\r\n”
  } else {
    Serial.println("unpressed");			// 송신값: “value1,value2,unpressed\r\n”
  }
  prev_value = value3;				// 버튼을 누르기 전 prev_value=1
  delay(30);					// 전송속도 지연
}