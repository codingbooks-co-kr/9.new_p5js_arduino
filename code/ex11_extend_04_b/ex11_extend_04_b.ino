// 아두이노: 가변저항값 송신2

#define VARIABLE_R A1

void setup() {
  pinMode(VARIABLE_R, INPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(VARIABLE_R);
  Serial.write(0xff);
  Serial.write(highByte(value));
  Serial.write(lowByte(value));
}
