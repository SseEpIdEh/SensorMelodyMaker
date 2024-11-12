#include <CapacitiveSensor.h>

// Define sensor, LED, and buzzer pin constants
CapacitiveSensor sensor = CapacitiveSensor(4, 2);  // 2MΩ resistor between pins 4 & 2
const int ledPin = 9;  // Pin for the LED
const int buzzerPin = 10;  // Pin for the buzzer
const int threshold = 200;  // Adjust this value based on your sensor readings

void setup() {
  Serial.begin(115200);  // Begin Serial Monitor
  pinMode(ledPin, OUTPUT);  // Set LED pin as output
  pinMode(buzzerPin, OUTPUT);  // Set buzzer pin as output
}

void loop() {
  // Measure capacitance
  long measurement = sensor.capacitiveSensor(30);  // Take 30 samples for accuracy
  Serial.print("Measurement: ");
  Serial.println(measurement);

  // If the measurement exceeds the threshold, turn on LED and play melody
  if (measurement > threshold) {
    digitalWrite(ledPin, HIGH);  // Turn on the LED

    // Play the melody on the buzzer
    tone(buzzerPin, 262);  // C4 note
    delay(250);

    tone(buzzerPin, 392);  // G4 note
    delay(500);

    tone(buzzerPin, 311);  // Eb4 note
    delay(500);

    tone(buzzerPin, 262);  // C4 note
    delay(250);

    noTone(buzzerPin);  // Stop the sound
    delay(250);
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED when not touched
  }

  delay(10);  // Small delay for readability
}
