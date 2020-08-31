int LED = 3;
int PIR = 2;
int val = 0;

void setup() {
 pinMode(LED, OUTPUT);
 pinMode(PIR, INPUT);
}

void loop() {
  val = digitalRead(PIR);
  if(val==HIGH){
    digitalWrite(LED,HIGH);
  }
  else{
    digitalWrite(LED,LOW);
  }

}
