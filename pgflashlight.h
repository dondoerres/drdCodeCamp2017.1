#include <Adafruit_CircuitPlayground.h>

void pgflashlight() {
  static int liteOn = 0;
  if (liteOn == 0) {
    liteOn = 1;
    }
  else {
    liteOn = 0;
    }

    if (liteOn) {
        for (i = 0; i < 10; i++) {
            CircuitPlayground.setPixelColor(i, 100, 100, 100);
        }
    }
    else {
        CircuitPlayground.clearPixels(); // all leds off
    }
  delay(200);
}
