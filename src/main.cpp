#include <Arduino.h>

void setup() {
    Serial.begin(9600);
    Serial.println("Setup LoRa Sender....");
 }

void loop() {
    Serial.println("Loop...");
    delay(2000);
}
