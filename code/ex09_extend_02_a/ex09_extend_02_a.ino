// 수신된 문자열에서 정수 추출

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {				// 수신 데이터가 있을 때
    String s = Serial.readStringUntil('\n');	// 개행문자('\n')까지의 문자열 추출
    int data = s.toInt();			// 추출된 (숫자)문자열을 정수로 변환
    Serial.print("data: ");
    Serial.println(data);
  }
}