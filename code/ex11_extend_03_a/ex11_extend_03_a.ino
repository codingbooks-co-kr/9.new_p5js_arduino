// Serial.write()와 Serial.println()의 차이

void setup() {
  Serial.begin(9600);

  Serial.write('A');	// ❶ 문자 송신
  Serial.print(" : ");
  Serial.println('A'); 	// 문자 송신

  Serial.write("ABC"); 	// ❷ 문자열 송신
  Serial.print(" : ");
  Serial.println("ABC");	// 문자열 송신

  Serial.write("65");	// ❸ 문자열 송신
  Serial.print(" : ");
  Serial.println(65);	// 문자열 송신

  Serial.write(65); 	// ❹ 0∼255(1바이트)의 정수 송신
  Serial.print(" : ");
  Serial.println(65);	// 문자열 송신
}

void loop() { }