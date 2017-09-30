#include <Adafruit_CircuitPlayground.h>

unsigned int i = 0;
void pgtemp() {
  int T =  0;
  int tens = 0;
  int ones = 0;
  float tf=0.0;


  Serial.print("Temperature ");
  tf = CircuitPlayground.temperatureF();
  Serial.print(i++);
  Serial.print(" ");
  Serial.print(tf);
  Serial.println(" *F");
  T=tf;

  tens = 10*(T/10);
  Serial.println(tens);
  ones = tf - tens;
  Serial.println(ones);
  CircuitPlayground.clearPixels(); // all leds off
  switch (tens) {
    case 20:
      CircuitPlayground.setPixelColor(9, 0, 100, 100);
    break;
    case 30:
      CircuitPlayground.setPixelColor(8, 0, 100, 100);
    break;
    case 40:
      CircuitPlayground.setPixelColor(7, 0, 100, 100);
    break;
    case 50:
      CircuitPlayground.setPixelColor(6, 0, 100, 100);
    break;
    case 60:
      CircuitPlayground.setPixelColor(5, 0, 100, 100);
    break;
    case 70:
      CircuitPlayground.setPixelColor(4, 0, 100, 100);
    break;
    case 80:
      CircuitPlayground.setPixelColor(3, 0, 100, 100);
    break;
    case 90:
      CircuitPlayground.setPixelColor(2, 0, 100, 100);
    break;
    case 100:
      CircuitPlayground.setPixelColor(1, 0, 100, 100);
    break;
    case 110:
      CircuitPlayground.setPixelColor(0, 0, 100, 100);
    break;

    default:
      CircuitPlayground.setPixelColor(0, 0, 100, 100);
      CircuitPlayground.setPixelColor(9, 0, 100, 100);
      CircuitPlayground.setPixelColor(4, 0, 100, 100);
      CircuitPlayground.setPixelColor(5, 0, 100, 100);
    break;
  }

  switch (ones) {
    case 0:
      CircuitPlayground.setPixelColor(9, 100, 0, 0);
    break;
    case 1:
      CircuitPlayground.setPixelColor(8, 100, 0, 0);
    break;
    case 2:
      CircuitPlayground.setPixelColor(7, 100, 0, 0);
    break;
    case 3:
      CircuitPlayground.setPixelColor(6, 100, 0, 0);
    break;
    case 4:
      CircuitPlayground.setPixelColor(5, 100, 0, 0);
    break;
    case 5:
      CircuitPlayground.setPixelColor(4, 100, 0, 0);
    break;
    case 6:
      CircuitPlayground.setPixelColor(3, 100, 0, 0);
    break;
    case 7:
      CircuitPlayground.setPixelColor(2, 100, 0, 0);
    break;
    case 8:
      CircuitPlayground.setPixelColor(1, 100, 0, 0);
    break;
     case 9:
      CircuitPlayground.setPixelColor(0, 100, 0, 0);
    break;
    default:
      CircuitPlayground.setPixelColor(4, 100, 0, 0);
      CircuitPlayground.setPixelColor(5, 100, 0, 0);
   break;
  }


  delay(1000);

}
