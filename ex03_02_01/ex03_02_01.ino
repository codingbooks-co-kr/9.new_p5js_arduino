// 시리얼 통신으로 다양한 데이터형의 변숫값 출력

boolean b1 = true;			// ‘true’로 boolean형 변수 초기화
boolean b2 = false;			// ‘false’로 boolean형 변수 초기화
char c1 = 'A';				// 문자로 char형 변수 초기화
char c2 = 65;				// 정수(→아스키코드)로 char형 변수 초기화
byte b = 65;				// 정수로 byte형 변수 초기화
int i = 65;				// 정수로 int형 변수 초기화
float f = 3.141592;			// 실수로 float형 변수 초기화
String s = "Hello Arduino!";		// 문자열로 String형 변수 초기화

void setup() {
  Serial.begin(9600);
  Serial.print("String s = ");
  Serial.println(s);

  Serial.print("char c1 = ");
  Serial.println(c1);

  Serial.print("char c2 = ");
  Serial.println(c2);

  Serial.print("byte b = ");
  Serial.println(b);

  Serial.print("int i = ");
  Serial.println(i);

  Serial.print("float f = ");
  Serial.println(f);		// 기본: 소수 2자리 출력

  Serial.print("boolean b1 = ");
  Serial.println(b1);

  Serial.print("boolean b2 = ");
  Serial.println(b2);
}

void loop() { }