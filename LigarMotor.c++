Link do tinkercad: "https://www.tinkercad.com/things/4sqERa0JMIG-glorious-stantia/editel?sharecode=4IfmwLVevRJa8-y6rNsVfGDgegZxYpUBgbElJX3LIEs"

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
