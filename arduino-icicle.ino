#include <FastLED.h>

#define LED_PIN     5
#define NUM_LEDS    15
#define LED_TYPE    WS2811
#define COLOR_ORDER RGB

int RedFull = 0; //0
int GreenFull = 0; //0
int BlueFull = 250; //200

int RedBase = 0; //0
int GreenBase = 0; //0
int BlueBase = 25; //50

int RedOff = 0; //0
int GreenOff = 0; //0
int BlueOff = 0; //0

int RedShadow = 0; //0
int GreenShadow = 25; //25
int BlueShadow = 50; //50
CRGB leds[NUM_LEDS];

void setup() {
    FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);

}


void loop(){

  for (int i = (NUM_LEDS/2)+1; i <= NUM_LEDS-1; i++) {  //rozmezí rampouchu
    leds[i] = CRGB (RedBase, GreenBase, BlueBase);  //zapnutí barvy rampouchu
    FastLED.show();
}
  for (int j = 0; j < NUM_LEDS; j++){   //rozmezí putování kapky
    leds[NUM_LEDS - j-1] = CRGB (RedFull, GreenFull, BlueFull); //zapnutí barvy kapky

    if(j<=(NUM_LEDS/2)&& j>0){  //rozmezí vracení do původu rampouchu
    leds[NUM_LEDS - j] = CRGB (RedBase, GreenBase, BlueBase);   //zapnutí barvy rampouchu
  }
    else if (j>(NUM_LEDS/2)){   //rozmezí vracení do původu kapky
    leds[NUM_LEDS - j] = CRGB (RedOff, GreenOff, BlueOff);  //zapnutí barvy kapky
  }
    FastLED.show();
    delay (600/(j+1));  //rychlost padání kapky
  }
    leds[0] = CRGB (RedOff,GreenOff,BlueOff);   //vypnutí nejnižší ledky po kapce
    FastLED.show();
  delay (2000);  //doba mezi jednotlivými spuštěními
}
