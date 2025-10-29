int sensorPin = A0;
int value;
int percentage;

void setup() {
  Serial.begin(9600);
}

void loop() {
  value = analogRead(sensorPin);

  percentage = map(value, 1023, 0, 0, 100); // Convert to %
  Serial.print("Moisture: ");
  Serial.print(percentage);
  Serial.println("%");

  delay(500);
}
