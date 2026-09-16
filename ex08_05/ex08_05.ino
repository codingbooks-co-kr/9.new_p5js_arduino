// 가변저항의 하위 4비트값을 추출하고 LED 4개로 표현 (1이면 점등 0이면 소등)

#define VARIABLE_R A1
const int LED[] = {6, 7, 8, 12};

void setup() {
  for (int i = 0; i < 4; i++) {
    pinMode(LED[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(VARIABLE_R);
  Serial.println(value, BIN);
  for (int i = 0; i < 4; i++) {
    digitalWrite(LED[i], 0);
  }
  for (int i = 0; i < 4; i++) {
    int check_bit = 1 << i;
    if (value & check_bit) {
      digitalWrite(LED[i], 1);
    }
  }
  delay(100);
}
