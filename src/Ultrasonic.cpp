/*
  IBT2.h - Library for Ultrasonic (HC-SR04).
  Created by Victor Carvalho, February 10, 2024.
  Released into the public domain.
*/

#include "Arduino.h"
#include "Ultrasonic.h"

Ultrasonic::Ultrasonic(uint8_t trigger_pin, uint8_t echo_pin)
  : _trigger_pin(trigger_pin), _echo_pin(echo_pin) {

  pinMode(this->_trigger_pin, OUTPUT);
  pinMode(this->_echo_pin, INPUT);
}

long Ultrasonic::measure() {
  digitalWrite(this->_trigger_pin, LOW);
  delayMicroseconds(2);
  digitalWrite(this->_trigger_pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(this->_trigger_pin, LOW);

  return pulseIn(this->_echo_pin, HIGH);
}

float Ultrasonic::measureCentimeters() {
  return (this->measure() * SOUND_SPEED) / 2;
}

float Ultrasonic::measureInchs() {
  return this->measureCentimeters() * CM_TO_INCH;
}