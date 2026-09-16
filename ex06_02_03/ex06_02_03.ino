// 가변저항을 돌려 LED 순차 점등
// 교재 수정내용 참조: www.codingbooks.co.kr/ 

#define VARIABLE_R A1
const int LED[] = {6, 7, 8, 12};

void setup() {
  pinMode(VARIABLE_R, INPUT);
  for (int i = 0; i < 4; i++) {
    pinMode(LED[i], OUTPUT);
  }
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(VARIABLE_R);
  int num = map(value, 0, 1023, 0, 4);
  Serial.print("Variable Resistor: ");
  Serial.print(value);
  Serial.print(" : ");
  Serial.println(num);
  for (int i = 0; i < 4; i++) {     // LED 전부 소등
    digitalWrite(LED[i], 0);
  }
  for (int i = 0; i < num; i++) {   // LED 순차 점등
    digitalWrite(LED[i], 1);
  }
}
