#ifndef MELODY_H
#define MELODY_H

#include <arduino.h>
#include "pitches.h"
#include "tones.h"

void play(int note[], int duration[], int songSize, float pauseCoefficient);
void playPirates();
void playCrazyFrog();
void playMarioUW();
void playTitanic();
void playMelody();

void starWars();
void firstSection();
void secondSection();
void beep(int note, int duration);

#endif