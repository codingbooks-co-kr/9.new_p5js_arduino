// 버튼 2개로 부저 주파수 조절 (유형1 사용)

#define BUTTON1 2
#define BUTTON2 4
#define BUZZER 13
int freq = 100;

void setup() {
  pinMode(BUTTON1, INPUT);
  pinMode(BUTTON2, INPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value1 = digitalRead(BUTTON1);
  int value2 = digitalRead(BUTTON2);
  if (value1 == 0) {
    freq_down();
  } else if (value2 == 0) {
    freq_up();
  }
  freq = constrain(freq, 100, 1000);
  Serial.print("Freqency(Hz): ");
  Serial.println(freq);
  delay(200);
}

void freq_down() {
  tone(BUZZER, freq, 200);
  freq -= 100;
}

void freq_up() {
  tone(BUZZER, freq, 200);
  freq += 100;
}
