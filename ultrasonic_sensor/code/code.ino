#define trigPin 13
#define echoPin 12
#define led 7
#define led2 10
#define buzzer 6

void setup() {
  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin (9600);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  if (distance < 5) {  // This is where the LED On/Off happens
  digitalWrite(led,HIGH); // When the Red condition is met, the Green LED should turn off
  digitalWrite(led2,LOW);
  digitalWrite(buzzer,HIGH);
  delay(10);
  digitalWrite(buzzer,LOW);
  delay(10);
}

  else if(distance < 10) {
    digitalWrite(led,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(buzzer,HIGH);
    delay(50);
    digitalWrite(buzzer,LOW);
    delay(50);
  }
  else if(distance < 20) {
    digitalWrite(led,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer,LOW);
    delay(100);
  }
  else if(distance < 30) {
    digitalWrite(led,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(buzzer,HIGH);
    delay(150);
    digitalWrite(buzzer,LOW);
    delay(150);
  }
  
  else {
    digitalWrite(led,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(buzzer,LOW);
    delay(200);
  }
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  
}
