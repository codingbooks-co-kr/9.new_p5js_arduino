// 아두이노: 조도센서값 송신

#define LIGHT A3
#define MIN 200	// 수정 요!
#define MAX 400  	// 수정 요!

void setup() {
  pinMode(LIGHT, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(LIGHT);
  value = constrain(value, MIN, MAX);
  value = map(value, MIN, MAX, 0, 255);
  Serial.write(value);
  delay(30);		// 전송속도 지연
}