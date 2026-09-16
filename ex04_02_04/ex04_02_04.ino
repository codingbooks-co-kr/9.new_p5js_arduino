// 버튼을 누르고 있는 동안 LED 토글

#define BUTTON 2
#define LED 6
boolean state = false;
int count = 0;

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0) {
    state = !state;
    digitalWrite(LED, state);
    Serial.print("Count: ");
    Serial.println(count++);
  }
  delay(200);
}
