// C++ code
//
#define pin_pot 0
#include <Servo.h>

Servo servoldg;

void setup()
{
  servoldg.attach(9);
  
}

void loop()
{
  
  servoldg.write(map(analogRead(pin_pot),0,1023,0,179));
  delay(20);
  
}