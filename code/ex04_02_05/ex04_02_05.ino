// 버튼을 누를 때마다 LED 한 번 토글

#define BUTTON 2
#define LED 6
boolean state = false;
int count = 0, prev_value = 0;

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0 && prev_value == 1) {
    state = !state;
    digitalWrite(LED, state);
    Serial.print("Count: ");
    Serial.println(count++);
  }
  prev_value = value;
}
