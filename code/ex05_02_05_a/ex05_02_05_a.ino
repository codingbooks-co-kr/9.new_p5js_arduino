// LED가 점점 밝아짐 (while문)

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  int i = 0;
  while(i < 256) {
    analogWrite(LED, i);
    delay(10);
    i++;
  }
  digitalWrite(LED, 0);
  delay(500);
}
