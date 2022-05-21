// C++ code
//

#define buttonA 6
#define buttonB 7
#define ledXOR 8
#define ledOU 9
#define ledE 10

bool valA = 0;
bool valB = 0;

void setup()
{
  pinMode(ledXOR, OUTPUT);
  pinMode(ledOU,OUTPUT);
  pinMode(ledE,OUTPUT);
  
  pinMode(buttonA,INPUT);
  pinMode(buttonB,INPUT);
}

void loop()
{
  valA = digitalRead(buttonA);
  valB = digitalRead(buttonB);
  digitalWrite(ledXOR,valA^valB);
  digitalWrite(ledOU,valA|valB);
  digitalWrite(ledE,valA&valB);
}