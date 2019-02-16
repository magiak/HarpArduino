#include <Arduino.h>
#include "lasers.h"

int LASER1_NOTE = NOTE_C4;
int LASER2_NOTE = NOTE_D4;
int LASER3_NOTE = NOTE_E4;
int LASER4_NOTE = NOTE_F4;
int LASER5_NOTE = NOTE_G4;
int LASER6_NOTE = NOTE_A4;
int LASER7_NOTE = NOTE_B4;

const int LASER_VAL_DEF = 1023;
int laserValA0 = LASER_VAL_DEF;
int laserValA1 = LASER_VAL_DEF;
int laserValA2 = LASER_VAL_DEF;
int laserValA3 = LASER_VAL_DEF;
int laserValA4 = LASER_VAL_DEF;
int laserValA5 = LASER_VAL_DEF;
int laserValA6 = LASER_VAL_DEF;