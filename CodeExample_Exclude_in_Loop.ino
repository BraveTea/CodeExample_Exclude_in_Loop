void setup()
{
  Serial.begin(9600);
  for (int i = 0; i < 10; i++)
  {
    if (i == 4)
    {
      continue;
    }
    Serial.println(i+1);
    delay(500);
  }
  
  
}

void loop()
{
  
}

