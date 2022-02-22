// 온도 습도에 따라 색 바꾸기
#include <DHT.h>
#include <DHT_U.h>

DHT dht(12, DHT11);        //pin, type

void setup() {
  dht.begin();
  Serial.begin(9600);
  Serial.print("DHT11 TEST");
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  delay(2000);
  int h = dht.readHumidity();
  float t = dht.readTemperature();

  Serial.print("온도 : ");
  Serial.print(t);
  Serial.println("*C");
  Serial.print("습도 : ");
  Serial.print(h);
  Serial.println("%");
  
  if(h < 80)
  {
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
  }
  else if(h >= 80)
  {
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
  }

}
