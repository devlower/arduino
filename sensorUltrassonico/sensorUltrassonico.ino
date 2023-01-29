int inches = 0;

int cm = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  cm = 0.01723 * readUltrasonicDistance(7, 7);
  inches = (cm / 2.54);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.println("cm");
  
  if (cm < 100)
  {
    digitalWrite (8, HIGH);
  	delay (300);
  	digitalWrite (8, LOW);
    delay (300);
  }
      else
      digitalWrite (10, LOW); 
  
  if ((cm >= 100 && cm <= 200))
      digitalWrite (9, HIGH);
      else
      digitalWrite (9, LOW);
  
  if (cm > 200)
    digitalWrite (10, HIGH);
    else 
    digitalWrite (10, LOW);
  
  delay(100);
}
