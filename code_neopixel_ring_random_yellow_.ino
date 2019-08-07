
#include <Adafruit_NeoPixel.h>

 
#define PIN 5
 
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(16, PIN);
     
uint32_t color  = 0xFFFF00; 

 
void setup() {

  pixels.begin();
  pixels.setBrightness(50); 

}

void loop()
{
    uint8_t  i;
   
 
    i = random(16);
    pixels.setPixelColor(i, color);
    pixels.show();
    delay(100);
    pixels.setPixelColor(i, 0);
    
}


  
