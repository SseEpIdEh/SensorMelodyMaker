#include <CapacitiveSensor.h>
#include <Arduino.h>

// Define sensor and speaker pin constants
CapacitiveSensor sensor = CapacitiveSensor(4, 2);  // 1MΩ resistor between pins 4 & 2
const int speakerPin = 9;  // Pin for the speaker // 15 ohm between pin 9 and speaker
const int threshold = 200;  

void setup() {
  Serial.begin(115200); 
  pinMode(speakerPin, OUTPUT);  
}

void loop() {
  // Measure capacitance
  long measurement = sensor.capacitiveSensor(30);  
  Serial.print("Measurement: ");
  Serial.println(measurement);
  
 
  if (measurement > threshold) {
    tone(speakerPin, 1000);  
  } else {
    noTone(speakerPin);  
  }

  delay(10);  
}
