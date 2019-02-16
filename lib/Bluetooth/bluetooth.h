#ifndef BLUETOOTH_H
#define BLUETOOTH_H

#include <arduino.h>
#include <SoftwareSerial.h>
#include "pins.h"

void sendCommand(const char * command);
void writeBLE(String value);
int readBLE();

#endif
