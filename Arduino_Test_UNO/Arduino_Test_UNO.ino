// 
// Arduino_Test_UNO 
//
// Description of the project
// Developed with [embedXcode](http://embedXcode.weebly.com)
// 
// Author	 	Hector Buelta
// 				Hector Buelta
//
// Date			15/12/14 23:12
// Version		0.1
// 
// Copyright	© Hector Buelta, 2014
// Licence		<#license#>
//
// See			ReadMe.txt for references
//

// Core library for code-sense - IDE-based

#include <Arduino.h>

// Include application, user and local libraries


// Define variables and constants
//
// Brief	Name of the LED
// Details	Each board has a LED but connected to a different pin
//

uint8_t myLED;

/**
	Define the pin the LED is connected to
	@param  none
 */
void setup()
 {
  // myLED pin number (13 on most arduino boards)

    myLED = 13;

    pinMode(myLED, OUTPUT);
    
}



/**
	Blinks the led
	@param  none
 */

void loop() {

    digitalWrite(myLED, HIGH);
    delay(500);
    digitalWrite(myLED, LOW);
    delay(500);
}
