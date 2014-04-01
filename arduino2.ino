
int ledPins[] = {4,7,12};
int i;

void setup() {                

  for (i = 0; i<=3; i++)
  pinMode(ledPins[i], OUTPUT);  
}
  void loop() {
    for (i = 0; i<=3; i++){
   if (i==0) {
  digitalWrite(ledPins[i], HIGH);   
  digitalWrite(ledPins[i+1], HIGH);
  digitalWrite(ledPins[i+2], HIGH);
  delay(1000);}
  
  else if (i == 1){
  digitalWrite(ledPins[i-1], HIGH);   
  digitalWrite(ledPins[i], LOW);
  digitalWrite(ledPins[i+1], LOW);  
  delay(1000);}
  
  else if (i == 2) {
  digitalWrite(ledPins[i-2], LOW);       
  digitalWrite(ledPins[i-1], HIGH);  
  digitalWrite(ledPins[i], LOW);    
   delay(1000) ;}   
   
  else if (i == 3 ) { 
  digitalWrite(ledPins[i-3], LOW);    
  digitalWrite(ledPins[i-2], LOW);
  digitalWrite(ledPins[i-1], HIGH);    
   delay(1000) ;
 }
}
  }
