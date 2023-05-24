https://www.tinkercad.com/things/hjuicKhHS4D-usano-potenciometro/editel
#include "Servo.h"
Servo servo;

const int pinoPot=A0;
int valorPot=0;
int angulo=0;

void setup()
{
  pinMode(pinoPot, OUTPUT);
  servo.attach(3);
}

void loop()
{
 valorPot=analogRead(pinoPot);
  angulo=map(valorPot,0, 1023, 0, 180);
  servo.write(angulo);
  delay(15);
  
}
