// 0.5초마다 LED 점멸 1

#define LED 6
boolean state = false;
unsigned long current_time, prev_time;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  current_time = millis();
  if (current_time - prev_time >= 500) {
    prev_time = current_time;
    state = !state;
    digitalWrite(LED, state);
  }
}
