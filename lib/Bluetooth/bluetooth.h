#ifndef BLUETOOTH_H
#define BLUETOOTH_H

#include <arduino.h>
#include <SoftwareSerial.h>
#include "pins.h"

void sendCommand(const char * command);
int readBLE();

#endif
