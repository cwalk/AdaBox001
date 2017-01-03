# AdaBox001
Example projects that I created based on components received with Adafruit's Adabox001. 

## YouTube

YouTube Playlist : 

## Temperature LCD (tempLCD)

Using a temperature sensor and an LCD display, I display the temperature! Potentiometer is only to increase/decrease brightness of backlit LCD.

### Diagram

You will need to connect a potentiometer, temperature sensor, and the LCD to the Feather board.

Feather:

 * USB pin to +V rail
 * GND pin to GND rail

LCD Wiring:

 * LCD GND (Pin 1) to GND rail
 * LCD VCC (Pin 2) to +V rail
 * LCD VO (Pin 3) to middle Potentiometer pin
 * LCD RS (Pin 4) to digital pin 6
 * LCD R/W (Pin 5) to GND rail
 * LCD Enable (Pin 6) to digital pin 5
 * LCD D4 (Pin 11) to digital pin 9
 * LCD D5 (Pin 12) to digital pin 10
 * LCD D6 (Pin 13) to digital pin 11
 * LCD D7 (Pin 14) to digital pin 12
 * LCD BL1 (Pin 15) to +V rail
 * LCD BL2 (Pin 16) to GND rail

Temperature Sensor (TMP36):

 * Left pin to 3.3V on Feather
 * Middle pin to Analog 0
 * Right pin to GND rail

10k Potentiometer:

 * Left pin to +V rail
 * Middle pin to LCD VO pin (pin 3)
 * Right pin to GND rail

Below is a diagram:

![Diagram](/tempLCD/tempLCDCircuit.jpg?raw=true "Diagram")

### YouTube

YouTube: https://www.youtube.com/watch?v=urYcSrP3Dhc&feature=youtu.be

## Sound from Light (lightSounds)

### Diagram

![Diagram](/lightSounds/lightSoundsCircuit.jpg?raw=true "Diagram")

### YouTube

YouTube: https://www.youtube.com/watch?v=1TNp_1lK8Ek&feature=youtu.be

## Light from Flex sensor (flexLED)

### Diagram

![Diagram](/flexLED/flexLEDCircuit.png?raw=true "Diagram")

### YouTube

YouTube: https://www.youtube.com/watch?v=TWC42rp0Sxs&feature=youtu.be

## RGB LED Potentiometer (rgbPotentiometer)

### Diagram

![Diagram](/rgbPotentiometer/rgbPotentiometerCircuit.png?raw=true "Diagram")

### YouTube

YouTube: https://www.youtube.com/watch?v=nAPrk0c1XV8&feature=youtu.be

## Neopixel Featherwing Animations (neopixelButtonCycle)

### Diagram

![Diagram](/neopixelButtonCycle/neopixelButtonCycleCircuit.png?raw=true "Diagram")

### YouTube

YouTube: 
