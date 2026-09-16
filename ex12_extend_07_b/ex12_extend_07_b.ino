// LED 0.5초 간격 점멸 (C/C++ 코드)

#include <Arduino.h>

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, 1);
  delay(500);
  digitalWrite(13, 0);
  delay(500);
}

int main() {
  init();
  setup();
  for (;;) {
    loop();
    if (serialEventRun) serialEventRun();
  }
  return 0;
}
