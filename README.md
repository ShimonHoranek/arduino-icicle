# arduino icicle
Home-made LED icicle used as a christmas light.
## Used parts
* WS2812B adressable LED strip
* Arduino nano
### How to make one
You will need adressable LED strip (obviously) and any type of arduino, I used arduino nano for its size.\
**wiring**\
I've chosen to use pin D5, but you can use any other digital pwm pin, as long as you change the code.\
other 2 pins are GND and VCC, which are connected to GND and VIN\
**code**\
In the code I use [FastLED](https://github.com/FastLED/FastLED) library\
