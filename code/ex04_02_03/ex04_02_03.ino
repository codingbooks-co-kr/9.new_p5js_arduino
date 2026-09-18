// 버튼을 누르는 동안 DC모터 속도 증가, 버튼에서 손을 떼면 속도 감소

#define BUTTON 2
#define DCMOTOR_FWD 9
#define DCMOTOR_BWD 10

int speed = 0;

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(DCMOTOR_FWD, OUTPUT);
  pinMode(DCMOTOR_BWD, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = digitalRead(BUTTON);
  if (value == 0) {
    speed += 10;
  } else {
    speed -= 10;
  }
  speed = constrain(speed, 0, 255);
  analogWrite(DCMOTOR_FWD, speed);
  analogWrite(DCMOTOR_BWD, 0);
  Serial.print("Speed: ");
  Serial.println(speed);
  delay(100);
}
