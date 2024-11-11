#include <CapacitiveSensor.h>
#include <Arduino.h>

// Define sensor and speaker pin constants
CapacitiveSensor sensor = CapacitiveSensor(4, 2);  // 2MΩ resistor between pins 4 & 2
const int speakerPin = 9;  // Pin for the speaker 
const int threshold = 200;  // Adjust this value based on your sensor readings

void setup() {
  Serial.begin(115200);  // Begin Serial Monitor
  pinMode(speakerPin, OUTPUT);  // Set speaker pin as output
}

void loop() {
  // Measure capacitance
  long measurement = sensor.capacitiveSensor(30);  // Take 30 samples for accuracy
  Serial.print("Measurement: ");
  Serial.println(measurement);
  
  // Play tone on speaker if measurement exceeds the threshold
  if (measurement > threshold) {
    tone(speakerPin, 1000);  // Play a 1000 Hz tone on the speaker
  } else {
    noTone(speakerPin);  // Stop the tone
  }

  delay(10);  // Small delay for readability
}
