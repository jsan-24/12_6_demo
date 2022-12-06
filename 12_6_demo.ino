#include "Adafruit_Neopixel.h"

Adafruit_Neopixel neopixel
void setup() {
  // put your setup code here, to run once:
  
  Serial.println ("hello");
}

void loop() {
  // put your main code here, to run repeatedly:
  neopixel.begin();
}
