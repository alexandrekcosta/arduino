// C++ code
//

#define potPin 0
#define ledRed 9

int valPot = 0;

void setup()
{
  pinMode(ledRed, OUTPUT);
}

void loop()
{
  valPot = analogRead(potPin);
  valPot = map(valPot,0,1023,0,255);
  
  analogWrite(ledRed,valPot);
}