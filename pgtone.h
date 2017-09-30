#include <Adafruit_CircuitPlayground.h>

void pgtone(){
CircuitPlayground.playTone(100, 250);
Serial.println("1");
delay(100);
CircuitPlayground.playTone(200, 250);
Serial.println("2");
delay(100);
CircuitPlayground.playTone(300, 250);
Serial.println("3");
delay(100);
CircuitPlayground.playTone(400, 250);
Serial.println("4");
delay(100);
CircuitPlayground.playTone(500, 250);
Serial.println("5");
}
