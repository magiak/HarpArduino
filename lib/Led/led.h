#ifndef LED_H
#define LED_H
 
void knightRiderLeds();
void redWhiteLeds();
void turnLedsRed(int value);
void turnLedsWhite(int value);
void turnLed(int ledPin, int value);
void turnLedOn(int ledPin);
void turnLedOff(int ledPin);
void turnLedOnAndOff(int ledPin);

#endif