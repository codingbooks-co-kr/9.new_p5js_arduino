// RGB LED가 8가지 색상으로 차례로 출력

#define RedLED 11
#define GreenLED 5
#define BlueLED 3

byte rgbColor[8][3] = {
  {000, 000, 000},  // black
  {255, 000, 000},  // red
  {000, 255, 000},  // green
  {000, 000, 255},  // blue
  {255, 255, 000},  // yellow
  {255, 000, 255},  // magenta
  {000, 255, 255},  // cyan
  {255, 255, 255},  // white
};

void setup() {
  pinMode(RedLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);
  pinMode(BlueLED, OUTPUT);
}

void loop() {
  for (int i = 0 ; i < 8 ; i++) {
    analogWrite(RedLED, rgbColor[i][0]);
    analogWrite(GreenLED, rgbColor[i][1]);
    analogWrite(BlueLED, rgbColor[i][2]);
    delay(1000);
  }
}
