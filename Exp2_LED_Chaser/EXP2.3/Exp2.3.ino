//SWING
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}
void loop()
{ 
  for(int i=1;i<=4;i++)
  {
     digitalWrite(i,HIGH);
  	 delay(50);
  	 digitalWrite(i,LOW);
     delay(50);
  }
  for(int i=4;i>=0;i--)
  {
     digitalWrite(i,HIGH);
  	 delay(50);
  	 digitalWrite(i,LOW);
     delay(50);
  }
}
