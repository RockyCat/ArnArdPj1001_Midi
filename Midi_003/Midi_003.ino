int noteOnCh1(int keynumber)
{
  Serial.write(0x90);
  Serial.write(keynumber);
  Serial.write(0x50);
}

int noteOffCh1(int keynumber)
{
  Serial.write(0x90);
  Serial.write(keynumber);
  Serial.write(0);
}

void setup()
{
  Serial.begin(31250);
  pinMode(8-12, INPUT);
}

void loop()
{
  int btn1 = 8;
  int btn2 = 9;
  int btn3 = 10;
  int btn4 = 11;
  int btn5 = 12;
  
  int val1 = 0;
  int val2 = 0;
  int val3 = 0;
  int val4 = 0;
  int val5 = 0;
  
  val1 = digitalRead(btn1);
  val2 = digitalRead(btn2);
  val3 = digitalRead(btn3);
  val4 = digitalRead(btn4);
  val5 = digitalRead(btn5);
   
   if (val1 == HIGH)
   {
     noteOnCh1(0x3C);
     delay(1000);
     noteOffCh1(0x3C);
   }
   else
   {
     noteOffCh1(0x3C);
   }
   
   if(val2 == HIGH)
   {
     noteOnCh1(0x3E);
     delay(1000);
     noteOffCh1(0x3E);
   }
   else
   {
     noteOffCh1(0x3E);
   }
   
   if(val3 == HIGH)
   {
     noteOnCh1(0x40);
     delay(1000);
     noteOffCh1(0x40);
   }
   else
   {
     noteOffCh1(0x40);
   }
   
   if(val4 == HIGH)
   {
     noteOnCh1(0x41);
     delay(1000);
     noteOffCh1(0x41);
   }
   else
   {
     noteOffCh1(0x41);
   }
   
   if(val5 == HIGH)
   {
      noteOnCh1(0x43);
      delay(1000);
      noteOffCh1(0x43);
   }
   else
   {
     noteOffCh1(0x43);
   }
  
  
} 
  
  
