#include <Arduino.h>
#include "pitches.h"
#include <pins.h>
#include <led.h>
#include <tones.h>
#include <SoftwareSerial.h> // BLE
#include <bluetooth.h>
#include <playTheme.h>
#include <kockaLezeDirou.h>
#include <lasers.h>

extern SoftwareSerial mySerial;
extern int laserValA0;
extern int laserValA1;
extern int laserValA2;
extern int laserValA3;
extern int laserValA4;
extern int laserValA5;
extern int laserValA6;

extern int LASER1_NOTE;
extern int LASER2_NOTE;
extern int LASER3_NOTE;
extern int LASER4_NOTE;
extern int LASER5_NOTE;
extern int LASER6_NOTE;
extern int LASER7_NOTE;