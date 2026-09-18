// 0.5초와 1초마다 LED 점멸 2 (완성)

#define LED1 6
#define LED2 7
boolean state1 = false, state2 = false;
unsigned long current_time, prev_time1, prev_time2;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  current_time = millis();
  if (current_time - prev_time1 >= 500) {
    prev_time1 = current_time;
    state1 = !state1;
    digitalWrite(LED1, state1);
  }
  if (current_time - prev_time2 >= 1000) {
    prev_time2 = current_time;
    state2 = !state2;
    digitalWrite(LED2, state2);
  }
}
