# AdaBox001
Example projects that I created based on components received with Adafruit's Adabox001. 

## YouTube

YouTube Playlist : https://www.youtube.com/playlist?list=PLgAD2y-6wgwoaIJlPjkwUR0mKumRaz1oe

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

I attach a Piezo buzzer and photo resistor to the feather, to play different pitches based on the analog value from the light level.

### Diagram

Connect the piezo to ground and a digital pin (I chose 12), and the photo resistor to V and analog pin 0, going to ground through a resistor. 

![Diagram](/lightSounds/lightSoundsCircuit.jpg?raw=true "Diagram")

### YouTube

YouTube: https://www.youtube.com/watch?v=1TNp_1lK8Ek&feature=youtu.be

## Light from Flex sensor (flexLED)

I change the brightness of an LED by mapping the value from an analog reading of a flex sensor resistor.

### Diagram

Connect a regular LED from ground to a digital pin (I use 11), using a resistor inbetween. Connect the flexible sensor resistor to V and analog pin 0, going to ground through a 10k resistor.

![Diagram](/flexLED/flexLEDCircuit.png?raw=true "Diagram")

### YouTube

YouTube: https://www.youtube.com/watch?v=TWC42rp0Sxs&feature=youtu.be

## RGB LED Potentiometer (rgbPotentiometer)

I connect 3 potentiometers to analog pins, and map their values to the red, green, and blue values for an RGB LED.

### Diagram

Connect the common anode RGB LED to 3 different digital pins with resistors (I chose 9, 10, and 11), with the common anode to +V. The potentiometers will have GND and +V on the outside pins, with the middle pins going to 3 separate analog pins (I chose A0, A1, and A2).

The digram only shows 1 potentiometer, but I used 3. Wire them up the same way. The Arduino file shows which pins I used for which values.

![Diagram](/rgbPotentiometer/rgbPotentiometerCircuit.png?raw=true "Diagram")

### YouTube

YouTube: https://www.youtube.com/watch?v=nAPrk0c1XV8&feature=youtu.be

## Neopixel Featherwing Animations (neopixelButtonCycle)

Here I use 2 push buttons to cycle forward or backward in a sequence of different lighting animations I created for the Neopixel shield. 

### Diagram

I wire up a push button with one leg going from +V and the other on a digital pin, with a resistor, leading to ground. I use 2 push buttons overall, 1 for forward and 1 for backwards. I chose digital pins 12 and 13. I used 10k resistors on both buttons. 

![Diagram](/neopixelButtonCycle/neopixelButtonCycleCircuit.png?raw=true "Diagram")

### YouTube

YouTube: https://www.youtube.com/watch?v=5gLSVN3f97o&feature=youtu.be
