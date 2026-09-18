// 0.5초마다 LED 점멸 2

#define LED 6
int state = 0;
unsigned long current_time, prev_time;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  current_time = millis();
  if (current_time - prev_time >= 500) {
    prev_time = current_time;
    state = 1 - state;
    digitalWrite(LED, state);
  }
}
