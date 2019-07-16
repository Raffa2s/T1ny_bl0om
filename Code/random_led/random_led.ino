#include <Adafruit_NeoPixel.h>
long randNumber;
#define PIN            4

#define NUMPIXELS      3
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
int delayval = 100;

void setup() {

  pixels.begin();

  randomSeed(analogRead(0));

}

void loop() {

  int r = random(128);

  int g = random(128);

  int b = random(128);
     
      
      for(int i=0;i<NUMPIXELS;i++){

      pixels.setPixelColor(i, pixels.Color(r,g,b));

      pixels.show(); // This sends the updated pixel color to the hardware.

      delay(delayval); // Delay for a period of time (in milliseconds).

       }
}
