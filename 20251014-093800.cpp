// Pin definitions
const int sensorPin = A0;  // Soil moisture sensor analog pin
const int ledPin = 13;     // LED pin

// Threshold for dryness (0-1023 for analog reading)
const int dryThreshold = 400; // Adjust this based on your sensor calibration

void setup() {
  pinMode(ledPin, OUTPUT);    // Set LED as output
  Serial.begin(9600);         // For debugging and monitoring
}

void loop() {
  int sensorValue = analogRead(sensorPin);  // Read soil moisture value
  Serial.print("Soil moisture sensor value: ");
  Serial.println(sensorValue);
  
  // Check if soil is dry
  if(sensorValue < dryThreshold) {
    digitalWrite(ledPin, HIGH);  // Turn on LED
  } else {
    digitalWrite(ledPin, LOW);   // Turn off LED
  }
  
  delay(1000); // Wait 1 second before next reading
}
