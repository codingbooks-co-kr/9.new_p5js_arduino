// 버튼을 누르면 경고음 발생

#define BUTTON 2
#define BUZZER 13

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0) {
    for (int i = 0; i <= 100; i++) {
      float sin_value = sin(2 * 3.14 * i * 0.01);
      float freq = 2000 + 1000 * sin_value;
      Serial.print("Frequency: ");
      Serial.println(freq);
      tone(BUZZER, freq);
      delay(10);
    }
  }
  noTone(BUZZER);
}
