// C++ code
//

//Code to manange a street signal 

#define carRED 4
#define carORANGE 3
#define carGREEN 2
#define pedestrianRED 12
#define pedestrianGREEN 11
#define button 8

void setup()
{
  pinMode(carGREEN, OUTPUT);
  pinMode(carORANGE,OUTPUT);
  pinMode(carGREEN,OUTPUT);
  pinMode(pedestrianGREEN,OUTPUT);
  pinMode(pedestrianRED,OUTPUT);
  pinMode(button,INPUT_PULLUP);
  digitalWrite(carGREEN,LOW);
  digitalWrite(carORANGE,LOW);
  digitalWrite(carRED,LOW);
  digitalWrite(pedestrianGREEN,LOW);
}

void loop(){
{
  while(digitalRead(button))
  
  		digitalWrite(carGREEN, HIGH);
  		digitalWrite(pedestrianRED, LOW);
	}
  
  digitalWrite(carGREEN,LOW);
  digitalWrite(carORANGE,HIGH);
  delay(3000);
  
  digitalWrite(carORANGE,LOW);
  digitalWrite(carRED,HIGH);
  delay(1000);
  
  digitalWrite(pedestrianRED,LOW);
  digitalWrite(pedestrianGREEN,HIGH);
  delay(5000);
  
  digitalWrite(pedestrianGREEN,LOW);
  
  for(int i=0;i<5;i++){
  
  	digitalWrite(pedestrianRED,!digitalRead(pedestrianRED));
    delay(500);
  
  }
  
  delay(1000);
  digitalWrite(pedestrianGREEN,LOW);
  digitalWrite(carRED,LOW);
  
}
