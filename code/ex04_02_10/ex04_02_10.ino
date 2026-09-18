// 버튼 누를 때마다 부저의 주파수 증가

#define BUTTON 2
#define BUZZER 13
int prev_value = 0, freq = 100;

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0 && prev_value == 1) {
    tone(BUZZER, freq, 500);
    Serial.print("Freqency(Hz): ");
    Serial.println(freq);
    if (freq >= 500) {
      freq = 100;
    } else {
      freq += 100;
    }
  }
  prev_value = value;
}
