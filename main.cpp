#include <Arduino.h>
#define ANALOG_PIN D1


void setup() {
  Serial.begin(115200); // Start the serial communication
  pinMode(ANALOG_PIN, INPUT);
}

void loop() {
  int analogValue = analogRead(ANALOG_PIN); // Read the analog value
  float Voltage = analogValue * (5.0 / 4095.0); 
  Serial.print("ADC_Value: ");
  Serial.print(analogValue);
  Serial.print(" Voltage: ");
  Serial.println(Voltage); // 'println' adds a new line at the end// Print the value to the serial monitor
  delay(1000); // Wait for a second
}