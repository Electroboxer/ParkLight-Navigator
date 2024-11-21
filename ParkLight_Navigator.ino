const int trigPin = 9;
const int echoPin = 10;
const int ledPin = 11;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1; // Convert to cm
  
  // Ensure distance is within a reasonable range
  if (distance > 36 || distance < 2) {
    distance = 36; // ultrasonic sensor has a range of 400cm limiting it to shorter range due to small scale project
  }
  
  int brightness = map(distance, 2, 36, 0, 100); // Map distance to brightness
  brightness = constrain(brightness, 0, 255); // you can reverse the mapping for making a smart street light
  
  analogWrite(ledPin, brightness);
  
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm");
  Serial.print(" - Brightness: ");
  Serial.println(brightness);
  
  delay(100);
}