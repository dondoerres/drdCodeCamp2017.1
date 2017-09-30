#include <Adafruit_CircuitPlayground.h>
#include "pgtemp.h"
#include "pgflashlight.h"
#include "pgwheel.h"
#include "pgwheelr.h"
#include "pgtone.h"
#include "pgtone2.h"
#include "pgchristmas.h"
#include "pgtonelite.h"


void setup() {
  Serial.begin(9600);
  CircuitPlayground.begin();
  CircuitPlayground.clearPixels(); // all leds off
  CircuitPlayground.redLED(LOW);  // small red LED off
}

void loop() {
  int capVal;
  delay(100);

  if( (capVal = CircuitPlayground.readCap(3)) > 100) {
  Serial.print("Capsense #3: "); Serial.println(capVal);
  pgwheel();
  CircuitPlayground.clearPixels();
  }
  if( (capVal = CircuitPlayground.readCap(2)) > 100) {
  Serial.print("Capsense #2: "); Serial.println(capVal);
  pgwheelr();
  }

  if( (capVal = CircuitPlayground.readCap(0)) > 100) {
  Serial.print("Capsense #0: "); Serial.println(capVal);
  pgtemp();
  }

  if( (capVal = CircuitPlayground.readCap(1)) > 100) {
  Serial.print("Capsense #1: "); Serial.println(capVal);
  pgflashlight();
  }

  if( (capVal = CircuitPlayground.readCap(12)) > 100) {
  Serial.print("Capsense #12: "); Serial.println(capVal);
  CircuitPlayground.clearPixels();
  delay(100);
  pgtone();
  delay(100);
  }

  if( (capVal = CircuitPlayground.readCap(6)) > 100) {
  Serial.print("Capsense #6: "); Serial.println(capVal);
  CircuitPlayground.clearPixels();
  delay(100);
  pgtone2();
  delay(100);
  }

  if( (capVal = CircuitPlayground.readCap(9)) > 100) {
  Serial.print("Capsense #9: "); Serial.println(capVal);
  CircuitPlayground.clearPixels();
  pgchristmas();
  }

  if( (capVal = CircuitPlayground.readCap(10)) > 100) {
  Serial.print("Capsense #10: "); Serial.println(capVal);
  CircuitPlayground.clearPixels();
  pgtonelite();
  }

}
