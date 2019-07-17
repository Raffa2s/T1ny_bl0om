# T1ny_bl0om - Elettronics

## Getting Started

### Requisites
<img align="right" width="200" height="200" src="https://github.com/Raffa2s/T1ny_bl0om/blob/T1ny_bl0om/master/Images/photo_2019-07-17_12-12-55.jpg">Before start, this is the part for me more hard to achieve because I never soldered SMD component before this project; so, if you are like me, take your time.

It's important to have the right hardware for the job, so this is mine:
- Soldering iron, mine is a Weller WHS 40
- Soldering station, mine is [this one](https://www.aliexpress.com/item/32817153181.html?spm=a2g0s.9042311.0.0.27424c4d8S5X5Y) Set E, that had a soldering iron and solder past
- Solder past, [mine](https://www.aliexpress.com/item/32623418957.html?spm=a2g0s.9042311.0.0.27424c4d8S5X5Y) but the one that came with the soldering station works fine
- Flux paste, [mine](https://www.aliexpress.com/item/32331668231.html?spm=a2g0s.9042311.0.0.27424c4dDTmYnn) and works fine
- Soldering fume extractor, [this](https://www.youtube.com/watch?v=gNbNKMQhCOQ) is very articuleted but it's important to have a kind of a extractor to evacuate the soldering fume

The following instractions is divide in two part:
- ISP
- T1ny_bl0om

If you have a flasher you can skip the ISP part and go straight to the T1ny_bl0om part.

### Steps
#### Set-up
First of all, if you have completed the soldering part, is important to:
- Had installed the Arduino IDE
- Install the adafruit library for the ws2812 in your Arduino IDE called *Adafruit_NeoPixel*
- Add the support for the Attiny85 in Arduino IDE, if you had problem follow the first 2 steps of this [guide](https://www.instructables.com/id/How-to-Program-an-Attiny85-From-an-Arduino-Uno/)

After the set-up of the Arduini IDE it's time to flash the Attiny85; to do so, is important to set the arduino to flash firstly the bootloader to the Attiny85 and after that we test it.

#### Burn teh Bootloader

So it's important to set the arduino like the photo:
<img align="left" width="511" height="378" src="https://github.com/Raffa2s/T1ny_bl0om/blob/T1ny_bl0om/master/Images/screen.PNG">
- Board: ATtiny25/45/45
- Processor: ATtiny85
- Clock: Internal 8 MHz
- Port: COMXX (matching your port)
- Programmer: Arduino as ISP

After that, it's time to flash the bootloader pressing the button *Burn the bootloader*.



#### Test Code

If everything it's fine you can try to upload the code 'attiny_blink/attiny_blink.ino' that make the led in the flash board to blink periodically; after that you can upload the code 'Neopixel_Rainbow/Neopixel_Rainbow.ino'.

The code is fairly similar to the code example given by Adafruit with his own library.

In case you have any problems feel free to contact me on [Twitter](https://twitter.com/raffass).



<img src="https://github.com/Raffa2s/T1ny_bl0om/blob/T1ny_bl0om/master/Images/yop.gif" width="50">
