// Starting of Program
int Mo1L = 4;
int Mo1R = 5;
int Mo2L = 6;
int Mo2R = 7;
char bluetooth;

void setup() 
{  
  pinMode(Mo1L, OUTPUT);  // Digital pin 10 set as output Pin
  pinMode(Mo1R, OUTPUT);  // Digital pin 11 set as output Pin
  pinMode(Mo2L, OUTPUT);  // Digital pin 12 set as output Pin  
  pinMode(Mo2R, OUTPUT);  // Digital pin 13 set as output Pin
  Serial.begin(9600);
}

void loop()
{
  while (Serial.available() > 0)
  {
    bluetooth = Serial.read();
    Serial.println(bluetooth);
  }

  if( bluetooth == 'F') // Forward
    {
      digitalWrite(Mo1L, HIGH);
      digitalWrite(Mo1R, LOW);
      digitalWrite(Mo2L, HIGH);
      digitalWrite(Mo2R, LOW);  
    }
  else if(bluetooth == 'B') // Backward
    {
      digitalWrite(Mo1L, LOW);
      digitalWrite(Mo1R, HIGH);
      digitalWrite(Mo2L, LOW);
      digitalWrite(Mo2R, HIGH); 
    }
  else if(bluetooth == 'L') //Left
    {
      digitalWrite(Mo1L, LOW);
      digitalWrite(Mo1R, LOW);
      digitalWrite(Mo2L, HIGH);
      digitalWrite(Mo2R, LOW);
    }
  else if(bluetooth == 'R') //Right
    {
      digitalWrite(Mo1L, HIGH);
      digitalWrite(Mo1R, LOW);
      digitalWrite(Mo2L, LOW);
      digitalWrite(Mo2R, LOW); 
    }
  else if(bluetooth == 'S') //Stop
    {
      digitalWrite(Mo1L, LOW);
      digitalWrite(Mo1R, LOW);
      digitalWrite(Mo2L, LOW);
      digitalWrite(Mo2R, LOW); 
    }
  else if(bluetooth == 'I') //Forward Right
    {
      digitalWrite(Mo1L, HIGH);
      digitalWrite(Mo1R, LOW);
      digitalWrite(Mo2L, LOW);
      digitalWrite(Mo2R, LOW);
    }
  else if(bluetooth == 'J') //Backward Right
    {
      digitalWrite(Mo1L, LOW);
      digitalWrite(Mo1R, HIGH);
      digitalWrite(Mo2L, LOW);
      digitalWrite(Mo2R, LOW);
    }
   else if(bluetooth == 'G') //Forward Left
    {
      digitalWrite(Mo1L, LOW);
      digitalWrite(Mo1R, LOW);
      digitalWrite(Mo2L, HIGH);     
      digitalWrite(Mo2R, LOW);
    }
  else if(bluetooth == 'H') //Backward Left
    {
      digitalWrite(Mo1L, LOW);
      digitalWrite(Mo1R, LOW);
      digitalWrite(Mo2L, LOW);
      digitalWrite(Mo2R, HIGH); 
    }
}
/* References 
 1. http://www.datasheetcafe.com/hc-05-datasheet-bluetooth/
 2. https://www.electronicshub.org/hc-05-bluetooth-module/
*/
