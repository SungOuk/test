int dataPin = 2;
int clockPin = 3;
int latchPin = 4;
 
byte data = 0; 

void setup() {

  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(latchPin, OUTPUT);
}
 
void shiftWrite(int desiredPin, boolean desiredState)
{
bitWrite(data, desiredPin, desiredState);
shiftOut(dataPin, clockPin, MSBFIRST, data);
digitalWrite(latchPin, HIGH);
digitalWrite(latchPin, LOW);
}

void loop(){
  for(int i = 0; i<=3; i++)
  {
    shiftWrite(i, HIGH);
    delay(100);
  }
  
   for(int i = 3; i >=0; i--)
  {
    shiftWrite(i, LOW);
    delay(100);
  }
  
}