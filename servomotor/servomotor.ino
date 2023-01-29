#include <Servo.h>

int a = 0;

Servo servo_9;

void setup()
{
  Serial.begin(9600);
  servo_9.attach(3);
}

void loop()
{
  int b;

b = analogRead(A0);
a = map(b, 0, 1023, 0, 180);
servo_9.write(a);
Serial.println(a);
delay(100);
}