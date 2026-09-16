// 정수로 LED 점멸 횟수 제어 (완성)

#define LED 6

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Serial.println("Please enter a number");
}

void loop() {
  if (Serial.available()) {
    int num = Serial.parseInt();
    for (int i = 0; i < num; i++) {
      digitalWrite(LED, 1);
      delay(200);
      digitalWrite(LED, 0);
      delay(200);
    }
  }
}
