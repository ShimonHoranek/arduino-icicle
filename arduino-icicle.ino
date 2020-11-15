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
  for (int i = 6; i <= 14; i++) {
    leds[i] = CRGB (RedBase,GreenBase,BlueBase);
    FastLED.show();
}
leds[14] = CRGB(RedShadow,GreenShadow,BlueShadow);
FastLED.show();
delay(350);

leds[14] = CRGB(RedFull,GreenFull,BlueFull);
leds[13] = CRGB(RedShadow,GreenShadow,BlueShadow);
FastLED.show();
delay(400);

leds[14] = CRGB(RedShadow,GreenShadow,BlueShadow);
leds[13] = CRGB(RedFull,GreenFull,BlueFull);
leds[12] = CRGB(RedShadow,GreenShadow,BlueShadow);
FastLED.show();
delay(400);

leds[14] = CRGB(RedBase,GreenBase,BlueBase);
leds[13] = CRGB(RedShadow,GreenShadow,BlueShadow);
leds[12] = CRGB(RedFull,GreenFull,BlueFull);
leds[11] = CRGB(RedShadow,GreenShadow,BlueShadow);
FastLED.show();
delay(350);

leds[13] = CRGB(RedBase,GreenBase,BlueBase);
leds[12] = CRGB(RedShadow,GreenShadow,BlueShadow);
leds[11] = CRGB(RedFull,GreenFull,BlueFull);
leds[10] = CRGB(RedShadow,GreenShadow,BlueShadow);
FastLED.show();
delay(325);

leds[12] = CRGB(RedBase,GreenBase,BlueBase);
leds[11] = CRGB(RedShadow,GreenShadow,BlueShadow);
leds[10] = CRGB(RedFull,GreenFull,BlueFull);
leds[9] = CRGB(RedShadow,GreenShadow,BlueShadow);
FastLED.show();
delay(300);

leds[11] = CRGB(RedBase,GreenBase,BlueBase);
leds[10] = CRGB(RedShadow,GreenShadow,BlueShadow);
leds[9] = CRGB(RedFull,GreenFull,BlueFull);
leds[8] = CRGB(RedShadow,GreenShadow,BlueShadow);
FastLED.show();
delay(275);

leds[10] = CRGB(RedBase,GreenBase,BlueBase);
leds[9] = CRGB(RedShadow,GreenShadow,BlueShadow);
leds[8] = CRGB(RedFull,GreenFull,BlueFull);
leds[7] = CRGB(RedShadow,GreenShadow,BlueShadow);
FastLED.show();
delay(250);

leds[9] = CRGB(RedBase,GreenBase,BlueBase);
leds[8] = CRGB(RedShadow,GreenShadow,BlueShadow);
leds[7] = CRGB(RedFull,GreenFull,BlueFull);
leds[6] = CRGB(RedShadow,GreenShadow,BlueShadow);
FastLED.show();
delay(225);

leds[8] = CRGB(RedBase,GreenBase,BlueBase);
leds[7] = CRGB(RedShadow,GreenShadow,BlueShadow);
leds[6] = CRGB(RedFull,GreenFull,BlueFull);
FastLED.show();
delay(200);

leds[7] = CRGB(RedBase,GreenBase,BlueBase);
leds[6] = CRGB(RedShadow,GreenShadow,BlueShadow);
FastLED.show();

//under
leds[5] = CRGB(0,0,150);
FastLED.show();
delay(150);

leds[5] = CRGB(RedOff,GreenOff,BlueOff);
leds[4] = CRGB(0,0,200);
leds[6] = CRGB(RedBase,GreenBase,BlueBase);
FastLED.show();
delay(100);

leds[4] = CRGB(RedOff,GreenOff,BlueOff);
leds[3] = CRGB(0,0,75);
FastLED.show();
delay(100);

leds[3] = CRGB(RedOff,GreenOff,BlueOff);
leds[2] = CRGB(0,0,50);
FastLED.show();
delay(75);

leds[2] = CRGB(RedOff,GreenOff,BlueOff);
leds[1] = CRGB(0,0,25);
FastLED.show();
delay(75);

leds[1] = CRGB(RedOff,GreenOff,BlueOff);
leds[0] = CRGB(0,0,10);
FastLED.show();
delay(50);

leds[0] = CRGB(RedOff,GreenOff,BlueOff);
FastLED.show();
delay(2000);
  }
  
  
