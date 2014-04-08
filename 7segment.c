int i,j ;

int ON = LOW;
int OFF = HIGH;


int digital[10][8] = {
{ON,ON,ON,ON,ON,ON,OFF,ON},
{OFF,ON,ON,OFF,OFF,OFF,OFF,OFF},     
{ON,ON,OFF,ON,ON,OFF,ON,ON}, 
{ON,ON,ON,ON,OFF,OFF,ON,OFF},     
{OFF,ON,ON,OFF,OFF,ON,ON,ON},      
{ON,OFF,ON,ON,OFF,ON,ON,OFF},    
{ON,OFF,ON,ON,ON,ON,ON,ON},   
{ON,ON,ON,OFF,OFF,ON,OFF,OFF},  
{ON,ON,ON,ON,ON,ON,ON,ON},  
{ON,ON,ON,OFF,OFF,ON,ON,OFF}  
};

int ledPins[] = {2,3,4,5,6,7,8,9};


void setup(){
  for (int i  = 0; i< 8; i++)
  pinMode(ledPins[i], OUTPUT); 
}

   void loop() {
    for (i = 0; i<=9; i++){
      for (j = 0; j< 8; j++){
        digitalWrite(ledPins[j], digital[i][j]);
        
      }
      delay(1000);
    }
   }
   
    