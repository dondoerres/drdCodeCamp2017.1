#include <Adafruit_CircuitPlayground.h>

void pgtonelite(){
int i;
for (i = 0; i < 3; i++) {
CircuitPlayground.playTone(220, 400);
delay(100);
CircuitPlayground.setPixelColor(9, 100, 0, 0);
CircuitPlayground.setPixelColor(0, 100, 0, 0);
Serial.println("1");
delay(100);
CircuitPlayground.playTone(440, 400);
delay(100);
CircuitPlayground.setPixelColor(8, 0, 100, 0);
CircuitPlayground.setPixelColor(1, 0, 100, 0);
Serial.println("2");
delay(100);
CircuitPlayground.playTone(880, 400);
delay(100);
CircuitPlayground.setPixelColor(7, 0, 0, 100);
CircuitPlayground.setPixelColor(2, 0, 0, 100);
Serial.println("3");
delay(100);
CircuitPlayground.playTone(540, 400);
delay(100);
CircuitPlayground.setPixelColor(6, 100, 100, 0);
CircuitPlayground.setPixelColor(3, 100, 100, 0);
Serial.println("4");
delay(100);
CircuitPlayground.playTone(100, 400);
delay(100);
CircuitPlayground.setPixelColor(5, 100, 0, 100);
CircuitPlayground.setPixelColor(4, 100, 0, 100);
Serial.println("5");
delay(300);
CircuitPlayground.clearPixels();
}
delay(400);
}
