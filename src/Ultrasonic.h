/*
  IBT2.h - Library for Ultrasonic (HC-SR04).
  Created by Victor Carvalho, February 10, 2024.
  Released into the public domain.
*/
#ifndef Ultrasonic_h
#define Ultrasonic_h

#include "Arduino.h"

#define SOUND_SPEED 0.034
#define CM_TO_INCH 0.393701

class Ultrasonic {
public:
  Ultrasonic(uint8_t trigger_pin, uint8_t echo_pin);
  float measureCentimeters();
  float measureInchs();

private:
  long measure();
  uint8_t _trigger_pin;
  uint8_t _echo_pin;
  uint8_t _pwm{ 0 };
  uint16_t _distance;
};

#endif
