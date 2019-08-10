#include <Arduino.h>
#include <pins_arduino.h>
#include <WiFi.h>
#include <WiFiClient.h>
#include <WiFiAP.h>
#include <WebServer.h>
#include <Wire.h>
#include <Ultrasonic.h>

ULTRASONIC ultrasonic;

void setup()
{
  Serial.begin(115200);
  ultrasonic.begin("4", "5");
}
void loop()
{
  Serial.println(((uint8_t)ultrasonic.read_distance_cm()));
  delay(200);
}
