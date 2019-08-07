
#include <Adafruit_NeoPixel.h>

 
#define PIN 5
 
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(16, PIN); // create a objec "pixel"
     
uint32_t color  = 0xFFFF00; // color red

 
void setup() {

  pixels.begin();
  pixels.setBrightness(50); 

}

void loop()
{
    
    int a=0 ;
    
    for (a; a<16; a++) // loop 16 times to shift the light on the ring
    {
   
      pixels.setPixelColor(a, color);
      pixels.show();
      delay(100);
      pixels.setPixelColor(a, 0);
    }
    
}


  
