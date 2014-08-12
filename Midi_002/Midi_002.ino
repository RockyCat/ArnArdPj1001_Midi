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
  
  int key;
  
  for (key=0; key<128; key++)
  {
    noteOffCh1(key);
  }
}

void loop()
{
  int key;
  
  for (key=0; key<128; key++)
  {
    noteOnCh1(key, 0x50);
    delay(400);
    noteOffCh1(key);
    delay(100);
  }
} 
  
  
