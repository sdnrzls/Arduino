//라이브러리 불러올때
//#include <라이브러리이름.h>

int pin = 13;

void setup() {  
  // 프로그램이 시작될때 한번만 실행 되는 코드 주로 초기설정을 넣어줌
  // 아두이노의 설정이나 세팅등을 하기위해 최초 1번실행
  // GPIO 핀을 출력 or 입력
  pinMode(pin, OUTPUT); //핀을 출력으로 설정한다.

}

void loop() {
  //void setup()이 한번 실행 된 후 반복적으로 실행 되는 코드
  digitalWrite(pin, HIGH);
  delay(1000);      //1000ms ( 1/000초가 ms) => 1초
  digitalWrite(pin, LOW);
  delay(1000);

}
