#include <CapacitiveSensor.h>

// Define sensor, LED, and buzzer pin constants
CapacitiveSensor sensor = CapacitiveSensor(4, 2);  // 2MΩ resistor between pins 4 & 2
//const int ledPin = 9;  // Pin for the LED// OPTIONAL
const int buzzerPin = 10;  // Pin for the buzzer
const int threshold = 200;  // Adjust this value based on your sensor readings

void setup() {
  Serial.begin(115200);  // Begin Serial Monitor
  //pinMode(ledPin, OUTPUT);  // Set LED pin as output
  pinMode(buzzerPin, OUTPUT);  // Set buzzer pin as output
}

void loop() {
  // Measure capacitance
  long measurement = sensor.capacitiveSensor(30);  // Take 30 samples for accuracy
  Serial.print("Measurement: ");
  Serial.println(measurement);

  // If the measurement exceeds the threshold, turn on LED and play melody
  if (measurement > threshold) {
    //digitalWrite(ledPin, HIGH);  // Turn on the LED
    
    // Recitation Assignment - ALTER THE CODE HERE, replace pseudocode
    // Play the melody on the buzzer
    // C4 note for 262 milliseconds
    // off for 250 milliseconds

    // G4 note for 392 milliseconds
    // off for 500 milliseocnds

    // Eb4 note for 311 milliseconds
    // off for 500 milliseocnds

    // C4 note for 262 milliseconds
    // off for 250 milliseocnds

    noTone(buzzerPin);  // Stop the sound
    delay(250);

    // DO NOT CHANGE ANYTHING BELOW THIS LINE !!
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED when not touched
  }

  delay(10);  // Small delay for readability
}
