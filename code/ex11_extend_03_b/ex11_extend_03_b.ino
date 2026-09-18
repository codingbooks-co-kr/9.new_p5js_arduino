// Serial.write()와 Serial.println()의 차이

void setup() {
  Serial.begin(9600);
  int num1 = Serial.write("65");  // 문자열 송신, 각 문자의 아스키코드 송신
  Serial.print(" ");
  Serial.print(num1);             // 송신 바이트 수: 2
  Serial.print(" : ");
  int num2 = Serial.print("65");  // 문자열 송신, 각 문자의 아스키코드 송신
  Serial.print(" ");
  Serial.println(num2);           // 송신 바이트 수: 2

  int num3 = Serial.write(65);    // 0∼255(1바이트)의 정수 송신
  Serial.print(" ");
  Serial.print(num3);             // 송신 바이트 수: 1
  Serial.print(" : ");
  int num4 = Serial.print(65);    // 문자열 송신, 각 숫자문자의 아스키코드 송신
  Serial.print(" ");
  Serial.println(num4);           // 송신 바이트 수: 2
}

void loop() { }
