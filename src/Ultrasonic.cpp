/******************************************************************
 * Ultrasonic HC-SR04 library for KB-IDE by bavensky
 *****************************************************************/

#include "Ultrasonic.h"
#include <Arduino.h>
ULTRASONIC::ULTRASONIC() {}
ULTRASONIC::~ULTRASONIC() {}

void ULTRASONIC::begin(uint8_t _echo, uint8_t _trig)
{
  this->ECHO = _echo;
  this->TRIG = _trig;
  pinMode(this->ECHO, INPUT);
  pinMode(this->TRIG, OUTPUT);
}


float ULTRASONIC::read_distance_cm(){
    digitalWrite(this->TRIG, HIGH);
    delayMicroseconds(10);
    digitalWrite(this->TRIG, LOW);

    // measure duration of pulse from ECHO pin
    int duration_us = pulseIn(this->ECHO, HIGH);

    // calculate the distance
    float distance_cm = 0.017 * duration_us;
    return distance_cm;
}

