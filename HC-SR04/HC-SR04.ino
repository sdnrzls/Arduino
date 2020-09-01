int trig =2; // 디지털 2번 핀을 변수 trig에 대입
int echo =3; // 디지털 3번 핀을 변수 echo에 대입

void setup() {
  Serial.begin(9600); //시리얼 통신 시작. 통신속도는 9600
  pinMode(trig, OUTPUT); // trig(2번)핀을 출력모드로
  pinMode(echo, INPUT); // echo(3번)핀을 입력모드로

}

void loop() {
  digitalWrite(trig,HIGH); //trig 핀에 HIGH(5V)신호를 보낸다.
  delayMicroseconds(10); // 10마이크로초(1/100,000)ehddks 
  digitalWrite(trig,LOW); // trig 핀엔 LOW(0V)신호를 보낸다
  int distance = pulseIn(echo,HIGH)*17/1000; // 거리 = (시간:pulseIn 함수) X (340m : 초음파의 속도)/(2 :왕복이므로)
  Serial.print(distance); //distance를 시리얼 모니터에 출력
  Serial.println("cm"); // 문자열 cm를 출력
  delay(100); //0.1초 지연
}
