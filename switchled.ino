int button1Pin = 2;
int ledPin = 10;

void setup() {
pinMode(ledPin, OUTPUT);
pinMode(button1Pin, INPUT);
pinMode(button1Pin, OUTPUT);
}

void loop() {
  int button1State;
  button1State = digitalRead(button1Pin);
  if(button1State == LOW)
     digitalWrite(ledPin, HIGH);
  else
     digitalWrite(ledPin, LOW);
}