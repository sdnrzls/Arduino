 int val = 0; // 변수 cbs를 선언하고 A0(아날로그 0번)을 저장
 
 void setup() {
  Serial.begin(9600);
  pinMode(6,OUTPUT);
}

void loop() {
    val = analogRead(A0);
    analogWrite(6,val/4);
    Serial.println(val);
    delay(100);
}
