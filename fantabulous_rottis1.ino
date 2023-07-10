 int led = 8 ;
 int button = 9 ;
 int ledstatus =0 ;
 int buttonstatus=0 ; 
 int d = 500 ;
void setup()
{
  pinMode(led , OUTPUT);
  pinMode(button , INPUT);
}

void loop()
{
buttonstatus =digitalRead(button) ;
  
  if(buttonstatus == 1)
  {
  if(ledstatus == 0)
  {
  digitalWrite(led, 1);
    ledstatus = 1 ;
      delay(d) ;
  }
    else
    {
    digitalWrite(led , 0);
     ledstatus = 0 ;   
       delay(d) ;

    }
    
    
  }
}
