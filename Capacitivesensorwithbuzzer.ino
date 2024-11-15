#include <CapacitiveSensor.h>


CapacitiveSensor sensor = CapacitiveSensor(4, 2);  // 1MOHM connect between pin 2 and pin 4
const int buzzerPin = 10;      // Pin for the buzzer , negetive connect to ground
const int threshold = 200;  

void setup() {
  Serial.begin(115200);
  pinMode(buzzerPin, OUTPUT);  
}

void loop() {
  long measurement = sensor.capacitiveSensor(30);  // Take 30 samples for accuracy
  Serial.print("Measurement: ");
  Serial.println(measurement);

  if (measurement > threshold) {
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


    
    // DO NOT CHANGE ANYTHING BELOW THIS LINE !!
   
  delay(10);  // Small delay for readability
}
