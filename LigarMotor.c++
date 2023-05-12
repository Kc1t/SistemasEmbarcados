#include <Servo.h>
Servo meuServo;
void setup()
{
  meuServo.attach(2);
  pinMode(12, INPUT);
}
void loop()
{
  if(digitalRead(12)==1)
  {
  	meuServo.write(45);
    delay(50);
  }
  else
  {
  	meuServo.write(0);
    delay(50);
  }
}
