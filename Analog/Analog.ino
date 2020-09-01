 int val = 0; // 변수 cbs를 선언하고 A0(아날로그 0번)을 저장
 
 void setup() {
  Serial.begin(9600); // 시리얼 통신을 시작하며, 통신 속도를 9600으로 설정

}

void loop() {
  val = analogRead(A0); //변수 val를 선언하고 cbs 아날로그 값을 저장
  Serial.println(val); //시리얼 모니터에 val값을 출력
  delay(100); //다음 코드를 실행하기까지 0.1초만큼 기다린다.

}
