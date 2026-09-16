// 실행할 때마다 랜덤값 출력

void setup() {
  Serial.begin(9600);
  randomSeed(analogRead(A3));   // A3: 조도센서
}

void loop() {
  int num = random(100);
  Serial.println(num);
  delay(1000);
}
