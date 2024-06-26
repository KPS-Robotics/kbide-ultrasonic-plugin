/******************************************************************
 * Ultrasonic HC-SR04 library for KB-IDE by bavensky
 ******************************************************************/

#ifndef ultrasonic_h
#define tultrasonic_h

#include <Arduino.h>


#if ARDUINO < 100
  #include <WProgram.h>
#else
  #include <Arduino.h>
#endif

class ULTRASONIC
{
public:
  ULTRASONIC();
  ~ULTRASONIC();

  void begin(uint8_t _echo, uint8_t _trig);
  float read_distance_cm();


protected:

private:
  int ECHO, TRIG;

};

#endif /*ultrasonic_h*/

