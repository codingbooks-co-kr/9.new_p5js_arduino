// Red, Green, Blue 순으로 각각 밝아짐

#define RedLED 11
#define GreenLED 5
#define BlueLED 3

void setup() {
  pinMode(RedLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
  pinMode(BlueLED, OUTPUT);
}

void loop() {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j <= 255; j++) {
      if (i == 0) analogWrite(RedLED, j);
      else if (i == 1) analogWrite(GreenLED, j);
      else if (i == 2) analogWrite(BlueLED, j);
      delay(10);
    }
    analogWrite(RedLED, 0);
    analogWrite(GreenLED, 0);
    analogWrite(BlueLED, 0);
  }
}
