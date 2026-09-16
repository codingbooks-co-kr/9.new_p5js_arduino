// 키보드 문자로 부저 제어

#define BUZZER 13

void setup() {
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
  Serial.println("Please type k, i, m");
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    if (c == 'k') {
      tone(BUZZER, 262, 500);
    } else if (c == 'i') {
      tone(BUZZER, 330, 500);
    } else if (c == 'm') {
      tone(BUZZER, 392, 500);
    }
  }
}
