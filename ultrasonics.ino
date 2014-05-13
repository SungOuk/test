
int echoPin = 7;
int ledPin = 8;


void setup() {
  Serial.begin (9600);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  long duration, distance;
  digitalWrite(echoPin, LOW);
  delayMicroseconds(2);
  digitalWrite(echoPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(echoPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  if (distance >= 200 || distance <= 0) {
    Serial.println("Out of range");
  }
  
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(100);
}