#include "pins.h"
#include "led.h"

bool turnOnLeds = true;

void knightRiderLeds(){
  turnLedOnAndOff(LED_D2);
  turnLedOnAndOff(LED_D3);
  turnLedOnAndOff(LED_D4);
  turnLedOnAndOff(LED_D5);
  turnLedOnAndOff(LED_D6);
  turnLedOnAndOff(LED_D7);
  turnLedOnAndOff(LED_D8);
  turnLedOnAndOff(LED_D7);
  turnLedOnAndOff(LED_D6);
  turnLedOnAndOff(LED_D5);
  turnLedOnAndOff(LED_D4);
  turnLedOnAndOff(LED_D3);
}

void redWhiteLeds(){
  turnLedsRed(HIGH);
  delay(200);
  turnLedsRed(LOW);
  turnLedsWhite(HIGH);
  delay(200);
  turnLedsWhite(LOW);
}

void turnLedsRed(int value){
  turnLed(LED_D2, value);
  turnLed(LED_D4, value);
  turnLed(LED_D6, value);
  turnLed(LED_D8, value);
}

void turnLedsWhite(int value){
  turnLed(LED_D3, value);
  turnLed(LED_D5, value);
  turnLed(LED_D7, value);
}

void turnLed(int ledPin, int value){
  if(turnOnLeds){
    digitalWrite(ledPin, value);
  }
}

void turnLedOn(int ledPin){
  turnLed(ledPin, HIGH);
}

void turnLedOff(int ledPin){
  turnLed(ledPin, LOW);
}

void turnLedOnAndOff(int ledPin){
  turnLedOn(ledPin);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  turnLedOff(ledPin);    // turn the LED off by making the voltage LOW
}
