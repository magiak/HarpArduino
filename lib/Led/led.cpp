#include "pins.h"
#include "led.h"

void knightRider(){
  turnOnAndOff(LED_D2);
  turnOnAndOff(LED_D3);
  turnOnAndOff(LED_D4);
  turnOnAndOff(LED_D5);
  turnOnAndOff(LED_D6);
  turnOnAndOff(LED_D7);
  turnOnAndOff(LED_D8);
  turnOnAndOff(LED_D7);
  turnOnAndOff(LED_D6);
  turnOnAndOff(LED_D5);
  turnOnAndOff(LED_D4);
  turnOnAndOff(LED_D3);
}

void redWhite(){
  turnRed(HIGH);
  delay(200);
  turnRed(LOW);
  turnWhite(HIGH);
  delay(200);
  turnWhite(LOW);
}

void turnRed(int value){
  digitalWrite(LED_D2, value);
  digitalWrite(LED_D4, value);
  digitalWrite(LED_D6, value);
  digitalWrite(LED_D8, value);
}

void turnWhite(int value){
  digitalWrite(LED_D3, value);
  digitalWrite(LED_D5, value);
  digitalWrite(LED_D7, value);
}

void turnOnAndOff(int ledPin){
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(100);               // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
}