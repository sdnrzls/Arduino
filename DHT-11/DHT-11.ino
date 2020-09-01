#include "DHT.h" //라이브러리 가져오기
#define DHTPIN 2 //DHTPIN을 디지털 2핀으로 정의한다

#define DHTTYPE DHT11 //DHTTYPE를 DHT11로 정의한다.
DHT dht(DHTPIN, DHTTYPE); //DHT설정 - dht(디지털 2,dht11) 센서객체 초기화

void setup() {
 Serial.begin(9600); //9600속도로 시리얼 통신을 시작한다
  Serial.println(F("DHTxx test!")); //print의 F함수는 메모리 절약을 위해

  dht.begin(); //시리얼 통신 시작
}

void loop() {
 delay(2000); //2초 대기 (센서의 측정 주기가 보통 1초이상은 되어야 정밀하기 때문에)

 float h = dht.readHumidity(); //변수 선언(h는 습도)
 float t = dht.readTemperature(); //변수 선언(t는 온도)

  if (isnan(h) || isnan(t)) { //null 혹은 에러일때 표시
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
    }
 
  Serial.print(F("Humidity: "));
  Serial.print(h);
  Serial.print(F("%  Temperature: "));
  Serial.print(t);
  Serial.println(F("°C "));

}
