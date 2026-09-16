// 가변저항 10비트 중 9번 비트 검사 후 LED 점멸 제어

#define LED 6
#define VARIABLE_R A1

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(VARIABLE_R);
  Serial.println(value, BIN);
  if (value & 0x200) {
    digitalWrite(LED, 1);
  } else {
    digitalWrite(LED, 0);
  }
  delay(100);
}
