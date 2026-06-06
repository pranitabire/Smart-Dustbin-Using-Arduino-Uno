// Smart Dustbin Code - Fixed
#include <Servo.h>

Servo servo;

// Define ultrasonic sensor pins
const int trigPin = 9;
const int echoPin = 8;

// Define distance threshold (in cm)
const int openDistance = 15;  // Adjust based on placement

// Variables for ultrasonic sensor
long duration;
int distance;
bool isOpen = false;  // Track if the lid is open

void setup() {
  servo.attach(7);
  servo.write(0);    // Ensure the lid is closed initially
  delay(2000);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);
}

void loop() {
  // Get distance from ultrasonic sensor
  distance = getDistance();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Open the lid if an object is detected within the range and it's not already open
  if (distance <= openDistance && !isOpen) {
    Serial.println("Object detected! Opening lid...");
    servo.write(90);   // Open lid
    isOpen = true;     // Set flag to prevent continuous movement
    delay(3000);       // Wait for 3 seconds
  }
  
  // Close the lid if no object is detected and it's currently open
  if (distance > openDistance && isOpen) {
    Serial.println("Closing lid...");
    servo.write(0);    // Close lid
    isOpen = false;    // Reset flag
  }

  delay(200);  // Small delay for stable sensor readings
}

// Function to get distance from ultrasonic sensor
int getDistance() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  return duration * 0.034 / 2; // Convert to cm
}