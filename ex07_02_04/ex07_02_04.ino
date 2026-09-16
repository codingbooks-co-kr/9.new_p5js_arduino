// 버튼을 누르는 동안 LED 점멸 (함수유형4)

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
    int time = blink(200, 400);
    Serial.print("total blink time = ");
    Serial.println(time);
  }
}

int blink(int on, int off) {
  int total;
  digitalWrite(LED, 1);
  delay(on);
  digitalWrite(LED, 0);
  delay(off);
  total = on + off;
  return total;
}
