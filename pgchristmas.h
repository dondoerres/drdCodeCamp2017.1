#include <Adafruit_CircuitPlayground.h>

void pgchristmas() {
   int i, j;

   CircuitPlayground.clearPixels(); // all leds off
   for(j = 0; j < 4; j++) {
       for (i = 0; i < 9; i+=2) {
           CircuitPlayground.setPixelColor(i, 100, 0, 0);
           delay(150);
           CircuitPlayground.setPixelColor(i+1,0,100,0);
       }
       delay(150);
       for (i = 0; i < 9; i+=2) {
           CircuitPlayground.setPixelColor(i, 0, 100, 0);
           delay(150);
           CircuitPlayground.setPixelColor(i+1,100,0,0);
       }
       delay(400);
       CircuitPlayground.clearPixels();
   }


}
