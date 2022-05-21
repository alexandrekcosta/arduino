// C++ code
//

char reading;

#define ledOrange 10
#define ledGreen 9
#define ledRed 8

void setup()
{
  
  Serial.begin(9600);
  
  pinMode(ledRed, OUTPUT);
  pinMode(ledOrange,OUTPUT);
  pinMode(ledGreen,OUTPUT);
  
  pinMode(ledRed,LOW);
  pinMode(ledOrange,LOW);
  pinMode(ledGreen,LOW);
}

void loop()
{
  while(Serial.available() > 0){
    
    reading = Serial.read();
    
    if(reading == 'r' || reading == 'R'){
    
    	digitalWrite(ledRed,!digitalRead(ledRed));
    
    
    }
    
    else if(reading == 'o' || reading == 'O'){
      
      digitalWrite(ledOrange,!digitalRead(ledOrange));
    
  }
  
    else if(reading == 'g' || reading == 'G'){
    
    	digitalWrite(ledGreen,!digitalRead(ledGreen));
    
    }
    
    Serial.print(reading);
    
  }
}