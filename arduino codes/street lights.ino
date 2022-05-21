// C++ code
//

int c = B00000000;

void setup()
{
  DDRB = B00001111;
  DDRB = B11110000;
}

void loop()
{

  c++;
  
  PORTD = B00001111 | c;
  PORTB = B11110000 | c;
  
  delay(200);
  
}