/**********************************************
  Title:
  Date:
  By:
  Desciption:
***********************************************/
int btn1 = 8;
int btn2 = 9;
int btn3 = 10;
int btn4 = 11;
int btn5 = 12;
   
void noteOnCh1(int keynumber)
{
  Serial.write(0x90);
  Serial.write(keynumber);
  Serial.write(0x10);
}

void noteOffCh1(int keynumber)
{
  Serial.write(0x90);
  Serial.write(keynumber);
  Serial.write(0);
}

void blinkLED13(int count)
{
  int n;
  
  for (n=0; n < count; n++)
  {
    digitalWrite(13, HIGH);
    delay(50);
    digitalWrite(13, LOW);
  }
}

void setup()
{
  Serial.begin(31250);    // Baud rate for MIDI 31,250bps
  
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
}

void loop()
{

   if (digitalRead(btn1) == LOW)      // Button1 = ON
   {
     blinkLED13(1);
     
     noteOnCh1(0x3C);
   }
   else                               // Button1 = Off  
   {
     noteOffCh1(0x3C);
   }
   
   if (digitalRead(btn2) == LOW)      // Button2 = ON
   {
     blinkLED13(2);
     
     noteOnCh1(0x3E);
   }
   else                               // Button2 = Off
   {
     noteOffCh1(0x3E);
   }
   
   if (digitalRead(btn3) == LOW)      // Button3 = ON
   {
     blinkLED13(3);
     
     noteOnCh1(0x40);
   }
   else                               // Button3 = Off
   {
     noteOffCh1(0x40);
   }
   
   if (digitalRead(btn4) == LOW)      // Button4 = ON
   {
     blinkLED13(4);
     
     noteOnCh1(0x41);
   }
   else                               // Button4 = Off
   {
     noteOffCh1(0x41);
   }
   
   if (digitalRead(btn5) == LOW)      // Button5 = ON
   {
      blinkLED13(5);
     
      noteOnCh1(0x43);
   }
   else                               // Button5 = Off
   {
     noteOffCh1(0x43);
   }
} 
  
  
