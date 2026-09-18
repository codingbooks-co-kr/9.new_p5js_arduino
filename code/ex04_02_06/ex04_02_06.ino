// LED 점멸할 때의 LED 상태 읽기

#define BUTTON 2
#define LED 6

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value1 = digitalRead(BUTTON);
  int value2 = digitalRead(LED);
  if (value1 == 0) {
    digitalWrite(LED, 1);
  } else {
    digitalWrite(LED, 0);
  }
  Serial.print("LED State: ");
  Serial.println(value2);
}
