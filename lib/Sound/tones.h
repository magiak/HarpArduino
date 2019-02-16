#ifndef TONES_H
#define TONES_H

#include <arduino.h>
#include "pins.h"
#include "pitches.h"
#include "bluetooth.h"
#include <stdlib.h> 

enum Chord {
  Cdur,
  CSdur, // C#
  Ddur,
  DSdur, // D#
  Edur,
  Fdur,
  FSdur, // F#
  Gdur,
  GSdur, // G#
  Adur,
  Bdur,
  Hdur,
};

void playTones();
void playTone(int note);
void playTone(int note, int noteDuration);

String mapToneToString(int note);
int mapToneToLed(int note);

void playAllTones();
void playDurChord(Chord chord);
void playAllDurChords();

#endif