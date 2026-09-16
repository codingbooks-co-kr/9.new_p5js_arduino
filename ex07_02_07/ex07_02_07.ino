// 버튼을 누르면 200ms 주기로 LED 점멸을 랜덤 반복 (유형2)
// 교재 수정내용 참조: www.codingbooks.co.kr/ 

#define BUTTON 2
#define LED 6

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0) {
    int count = random(1, 10);
    Serial.print("Blink count: ");
    Serial.println(count);
    blink(count);
  }
}

void blink(int cnt) {
  for (int i = 0; i < cnt; i++) {
    digitalWrite(LED, 1);
    delay(200);
    digitalWrite(LED, 0);
    delay(200);
  }
}
