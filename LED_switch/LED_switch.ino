int LED = 10; //LED라는 변수를 만들고 8을 저장한다.
int BUTTON = 2; //BUTTON이라는 변수를 만들고 2를 저장한다.

void setup() {
 pinMode(BUTTON, INPUT); //BUTTON (2번 핀)을 입력모드로 설정한다
 pinMode(LED, OUTPUT); //LED(8번 핀)을 출력모드로 설정한다
 Serial.begin(9600); // 시리얼 통신 추가
}

void loop() {
  if (digitalRead(BUTTON) == HIGH){ //만약 BUTTON에 신호(1)가 입려된다면
    digitalWrite(LED,HIGH); //LED 에 신호(1)을 출력한다
    Serial.println("button ON!");
  }
  else{   //그렇지 않다면 (신호(0)가 입려된다면면
    digitalWrite(LED,LOW); //LED에 신호(0)를 출력한다
    Serial.println("button OFF!");
  }
  delay(100); //0.1초
}
