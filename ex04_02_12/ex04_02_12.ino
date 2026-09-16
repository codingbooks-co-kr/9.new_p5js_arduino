// 가변저항으로 부저 제어

#define VARIABLE_R A1
#define BUZZER 13

void setup() {
  pinMode(VARIABLE_R, INPUT);
  pinMode(BUZZER, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(VARIABLE_R);
  int num = value / 300;
  switch (num) {
    case 0:
      noTone(BUZZER);
      break;
    case 1:
      tone(BUZZER, 200);
      break;
    case 2:
      tone(BUZZER, 400);
      break;
    default:
      tone(BUZZER, 600);
      break;
  }
  Serial.print("Number: ");
  Serial.println(num);
  delay(100);
}
