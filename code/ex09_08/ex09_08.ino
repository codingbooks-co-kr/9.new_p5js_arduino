// 정수로 LED 점멸 시간 제어 (완성)

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Serial.println("Please enter a number");
}

void loop() {
  if (Serial.available()) {
    int time = Serial.parseInt();
    digitalWrite(LED, 1);
    delay(time);
    digitalWrite(LED, 0);
    delay(time);
    digitalWrite(LED, 1);
    delay(time);
    digitalWrite(LED, 0);
    delay(time);
  }
}
