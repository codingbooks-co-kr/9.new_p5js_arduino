// 가변저항 10비트 중 0번 비트 세트

#define VARIABLE_R A1

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(VARIABLE_R); 
  Serial.print(value, BIN);
  Serial.print(" ");
  value |= 0x1;
  Serial.println(value, BIN);
  delay(100);
}
