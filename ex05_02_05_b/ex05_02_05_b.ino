// LED가 점점 밝아짐 (do-while문)

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  int i = 0;
  do {
    analogWrite(LED, i);
    delay(10);
    i++;
  } while (i < 256);
  digitalWrite(LED, 0);
  delay(500);
}
