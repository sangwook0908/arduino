void setup() {
  for(int i=8;i<12;i++)            //8 = L+,9 = L-,10 = R+,11 = R-
  {
    pinMode(i, OUTPUT);
  }
  pinMode(A0, INPUT);             //x
  pinMode(A1, INPUT);             //y
  
}

void loop() {
  
  int x = analogRead(A0);
  int y = analogRead(A1);
  
  if(y >= 550 && 450<= x && x<=550)
  {
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
  }
  else if(y <= 450 && 450<= x && x<=550)
  {
    digitalWrite(8, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(11, HIGH);
  }
  else if(x <= 450 && 450<= y && y<= 550)
  {
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(11, LOW);
  }
  else if(x >= 550 && 450<= y && y<= 550)
  {
    digitalWrite(8, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }
  else
  {
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }
} 
