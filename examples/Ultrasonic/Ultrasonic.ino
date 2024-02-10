#include "Ultrasonic.h"

#define trigger_pin 5
#define echo_pin 18

Ultrasonic ultrasonic(trigger_pin, echo_pin);

void setup() {
  Serial.begin(115200);
}

void loop() {
  Serial.print("Distance (cm): ");
  Serial.println(ultrasonic.measureCentimeters());
  delay(1000);
}
