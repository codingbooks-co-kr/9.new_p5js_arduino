// 문자열로 LED 점멸 제어 1

#define LED 6
String s;

void setup() {
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
  Serial.println("Please enter <on> or <off>");
}

void loop() {
  if (Serial.available()) {
    char c = Serial.read();
    if (c == '\n') {
      if (s.equals("on")) {
        digitalWrite(LED, 1);
      }
      if (s.equals("off")) {
        digitalWrite(LED, 0);
      }
      s = "";
    } else {
      s += c;
    }
  }
}
