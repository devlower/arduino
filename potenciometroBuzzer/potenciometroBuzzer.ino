int analogPin = A0;
int val = 0;
int freq;

void setup()
{
  Serial.begin(9600);
  pinMode(3,OUTPUT);
}

void loop()
{
  val = analogRead(analogPin);
  Serial.println(val);
  
  if (val >= 0 && val <= 171)
  {
  freq = 100;
  tone(3,freq);
  delay(1000);
  noTone(3);
  
  		delay(1800);
  }
  else if (val > 171 && val <= 341)
  {
    freq = 200;
    tone(3,freq);
    delay(1000);
    noTone(3);
    
    	delay(1500);
  }
  else if (val > 341 && val <= 512)
  {
    freq = 300;
    tone(3,freq);
    delay(1000);
    noTone(3);
      
    	delay(1200);
  }
  else if (val > 512 && val <= 682)
  {
    freq = 400;
    tone(3,freq);
    delay(1000);
    noTone(3);
    
    	delay(900);
  }
  else if (val > 682 && val <= 853)
  {
    freq = 500;
    tone(3,freq);
    delay(1000);
    noTone(3);
    
    	delay(600);
  }
  else if (val > 853 && val <= 1023)
  {
    freq = 600;
    tone(3,freq);
    delay(1000);
    noTone(3);
      
    	delay(300);  
  }
}

