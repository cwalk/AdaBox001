/*
 This project uses code examples learned from Adafruit Tutorials
 https://learn.adafruit.com/tmp36-temperature-sensor
 https://learn.adafruit.com/character-lcds
 
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
*/

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(6, 5, 9, 10, 11, 12);

//TMP36 Pin Variables
int sensorPin = 0; //the analog pin the TMP36's Vout (sense) pin is connected to
                        //the resolution is 10 mV / degree centigrade with a
                        //500 mV offset to allow for negative temperatures

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  // Display Temperature is
   lcd.print("Temperature is") ;
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  
  //getting the voltage reading from the temperature sensor
 int reading = analogRead(sensorPin);  

  // converting that reading to voltage, for 3.3v arduino use 3.3
 float voltage = reading * 3.3;
 voltage /= 1024.0; 
 
 float temperatureC = (voltage - 0.5) * 100 ;  //converting from 10 mv per degree wit 500 mV offset
                                               //to degrees ((voltage - 500mV) times 100)
 // now convert to Fahrenheit
 float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0;

 // Display temperature in F
 lcd.print(temperatureF); lcd.print(" degrees F");

 delay(1000);
}
