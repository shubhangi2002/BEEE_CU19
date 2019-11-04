//ODD EVEN
void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}
void loop()
{ 
  for(int i=0;i<4;i++)
  {
    if(i==0)
    {
     digitalWrite(2, HIGH);
     digitalWrite(4, HIGH);
  	 delay(1000);
  	 digitalWrite(2, LOW);
     digitalWrite(4, LOW); 
    }
    if(i==1)
    {
     digitalWrite(1, HIGH);
     digitalWrite(3, HIGH);
     delay(1000);
     digitalWrite(1, LOW);
     digitalWrite(3, LOW); 
    }
  }
}
//Made by - Aman Kumar
//UID - 19BCS3520
