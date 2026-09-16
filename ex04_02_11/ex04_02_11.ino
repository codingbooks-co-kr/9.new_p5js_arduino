// 가변저항으로 LED 제어

#define VARIABLE_R A1
#define LED 6

void setup() {
  pinMode(VARIABLE_R, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(VARIABLE_R);
  int num = value / 400;
  switch (num) {
    case 0:
      digitalWrite(LED, 1);
      delay(100);
      digitalWrite(LED, 0);
      delay(100);
      break;
    case 1:
      digitalWrite(LED, 1);
      delay(200);
      digitalWrite(LED, 0);
      delay(200);
      break;
    case 2:
      digitalWrite(LED, 1);
      delay(400);
      digitalWrite(LED, 0);
      delay(400);
      break;
  }
  Serial.print("Variable Resistor: ");
  Serial.print(value);
  Serial.print(" num: ");
  Serial.println(num);
}
