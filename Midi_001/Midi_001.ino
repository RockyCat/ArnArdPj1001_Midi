int noteOnCh1(int keynumber, int velocity)
{
  Serial.write(0x90);
  Serial.write(keynumber);
  Serial.write(velocity);
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
}

void loop()
{
  noteOnCh1(0x3C, 0x50);
  delay(100);
  noteOffCh1(0x3C);
  
  noteOnCh1(0x3E, 0x50);
  delay(1000);
  noteOffCh1(0x3E);
  
  noteOnCh1(0x40, 0x50);
  delay(1000);
  noteOffCh1(0x40);
  
  noteOnCh1(0x41, 0x50);
  delay(1000);
  noteOffCh1(0x41);
  
  noteOnCh1(0x41, 0x50);
  delay(1000);
  noteOffCh1(0x41);
} 
  
  
