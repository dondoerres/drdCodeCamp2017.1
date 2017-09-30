#include <Adafruit_CircuitPlayground.h>

void pgwheel() {
  int i = 0;
  int j = 0;
  for (j = 0; j < 3; j++) {
      for (i = 0; i < 10; i++) {
           CircuitPlayground.setPixelColor(i, CircuitPlayground.colorWheel(25 * i));
           delay(100);
          }
  delay(500);
  CircuitPlayground.clearPixels();
  delay(200);

  }
}
