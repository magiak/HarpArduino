#ifndef TONES_H
#define TONES_H

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
void playAllTones();
void playDurChord(Chord chord);
void playAllDurChords();

#endif