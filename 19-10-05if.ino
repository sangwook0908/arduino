// 불빛 켰다 끄기
void setup() {
  pinMode(9,OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(7));
  if(digitalRead(7) == HIGH)
  {
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW); 
  }
  else if(digitalRead(8) == HIGH)
  {
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);  
  }
}
