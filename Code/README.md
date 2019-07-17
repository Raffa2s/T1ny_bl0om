# T1ny_bl0om - Code

## Getting Started

### Requisites

<img align="right" width="200" height="200" src="https://github.com/Raffa2s/T1ny_bl0om/blob/T1ny_bl0om/master/Images/photo_2019-07-17_15-17-39.jpg">Before start, is better to have completed the soldering part of the project because now it's time for flashing and programming :heart_eyes: :sparkles:

Remember to flash the arduino as ISP **BEFORE** solder it to the board, if you need an ISP to program the Attiny85.

### Steps
First of all, if you have completed the soldering part, is important to:
- Had installed the Arduino IDE
- Install the adafruit library for the ws2812 in your Arduino IDE called *Adafruit_NeoPixel*
- Add the support for the Attiny85 in Arduino IDE, if you had problem follow the first 2 steps of this [guide](https://www.instructables.com/id/How-to-Program-an-Attiny85-From-an-Arduino-Uno/)

After the set-up of the Arduini IDE it's time to flash the Attiny85; to do so, is important to set the arduino to flash firstly the bootloader to the Attiny85 and after that we test it.

<img align="left" width="300" height="300" src="https://github.com/Raffa2s/T1ny_bl0om/blob/T1ny_bl0om/master/Images/screen.PNG">So it's important to set the arduino like the photo:
- Board: ATtiny25/45/45
- Processor: ATtiny85
- Clock: Internal 8 MHz
- Port: COMXX (matching your port)
- Programmer: Arduino as ISP

After

In case you have any problems feel free to contact me on [Twitter](https://twitter.com/raffass).



<img src="https://github.com/Raffa2s/T1ny_bl0om/blob/T1ny_bl0om/master/Images/yop.gif" width="50">
