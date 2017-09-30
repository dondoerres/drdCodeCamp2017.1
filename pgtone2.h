#include <Adafruit_CircuitPlayground.h>

void pgtone2(){
CircuitPlayground.playTone(220, 400);
Serial.println("1");
delay(100);
CircuitPlayground.playTone(440, 400);
Serial.println("2");
delay(100);
CircuitPlayground.playTone(220, 400);
Serial.println("3");
delay(100);
CircuitPlayground.playTone(440, 400);
Serial.println("4");
delay(100);
CircuitPlayground.playTone(220, 400);
Serial.println("5");
}
