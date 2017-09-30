#include <Adafruit_CircuitPlayground.h>

void pgwheelr() {
  int i = 0;
  int j = 0;
  for (j = 0; j < 3; j++) {
      for (i = 9; i > -1; i--) {
           CircuitPlayground.setPixelColor(i, CircuitPlayground.colorWheel(25 * i));
           delay(100);
          }
  delay(500);
  CircuitPlayground.clearPixels();
  delay(200);

  }
}
