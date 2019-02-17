// NOTE_XY
// X = ton (tonu je 12 = 7 + 5) // https://dusan.pc-slany.cz/hudba/tony.htm
// Y = oktava (po 12 tonech zacina znovu stejna oktava)
// Chromaticky (půltonový) kruh => C C# D D# E F F# G G# A B H
// Kvartovy kruh (příbuznost tónů - posun o 5půltonů)  => C G D A E H F# C# G# D# B# F# =>

#include "tones.h"

extern bool turnOnLeds;
bool playToneFromRepro = false;

void playTones(){
  int noteDuration = 1000/4;
  tone(REPRO_D11, NOTE_C4, noteDuration);
  delay(100);
  tone(REPRO_D11, NOTE_D4, noteDuration);
  delay(100);
  tone(REPRO_D11, NOTE_E4, noteDuration);
  delay(100);
  tone(REPRO_D11, NOTE_F4, noteDuration);
  delay(100);
  tone(REPRO_D11, NOTE_G4, noteDuration);
  delay(100);
  tone(REPRO_D11, NOTE_A4, noteDuration);
  delay(100);
  //tone(REPRO_D11, NOTE_H4, noteDuration);
  //delay(100);
}

// TODO Pouziva se pokud prerusim laser.. rozviceni LED se tedy resi tam..
void playTone(int note){
  int noteDuration = 1000/8;
  if(playToneFromRepro){
    tone(REPRO_D11, note, noteDuration);
  }else{
    String str_note = mapToneToString(note);
    String str_duration = String(" 8 ");
  
    writeBLE(str_note + str_duration);
    // delay(noteDuration); // TODO :D
  }
}

void playTone(int note, int noteDuration){
  if(turnOnLeds){
    int ledPin = mapToneToLed(note);
    digitalWrite(ledPin, HIGH);
    if(playToneFromRepro){
      tone(REPRO_D11, note, noteDuration);
    }else{
      String str_note = mapToneToString(note);
      String str_duration = String(" 8 ");
   
      writeBLE(str_note + str_duration);
    }

    delay(noteDuration * 0.8);
    digitalWrite(ledPin, LOW);
    delay(noteDuration * 0.25);
  }
  else{
    if(playToneFromRepro){
      tone(REPRO_D11, note, noteDuration);
    }else{
      String str_note = mapToneToString(note);
      String str_duration = String(" 8 ");
   
      writeBLE(str_note + str_duration);
    }

    delay(noteDuration * 1.05);
  }
}

String mapToneToString(int note){
  switch(note){
    case NOTE_F4:
      return "F 4";
    case NOTE_GS4:
      return "G# 4";
    case NOTE_A4: 
      return "A 4";
    case NOTE_C5: 
      return "C 5";
    case NOTE_E5: 
      return "E 5";
    case NOTE_F5: 
      return "F 5";
    case NOTE_B4: 
      return "B 4";
  }

  return "";
}

int mapToneToLed(int note){
  // switch(note){
  //   case NOTE_C4:
  //     return LED_D2;
  //   case NOTE_D4:
  //     return LED_D3;
  //   case NOTE_E4: 
  //     return LED_D4;
  //   case NOTE_F4: 
  //     return LED_D5;
  //   case NOTE_G4: 
  //     return LED_D6;
  //   case NOTE_A4: 
  //     return LED_D7;
  //   case NOTE_B4: 
  //     return LED_D8;
  // }

  // Star wars
  switch(note){
    case NOTE_F4:
      return LED_D2;
    case NOTE_GS4:
      return LED_D3;
    case NOTE_A4: 
      return LED_D4;
    case NOTE_C5: 
      return LED_D5;
    case NOTE_E5: 
      return LED_D6;
    case NOTE_F5: 
      return LED_D7;
    case NOTE_B4: 
      return LED_D8;
  }

  return -1;
}

void playAllTones(){
  int pause = 100;
  playTone(NOTE_B0);
  delay(pause);
  playTone(NOTE_C1);
  delay(pause);
  playTone(NOTE_CS1);
  delay(pause);
  playTone(NOTE_D1);
  delay(pause);
  playTone(NOTE_DS1);
  delay(pause);
  playTone(NOTE_E1);
  delay(pause);
  playTone(NOTE_F1);
  delay(pause);
  playTone(NOTE_FS1);
  delay(pause);
  playTone(NOTE_G1);
  delay(pause);
  playTone(NOTE_GS1);
  delay(pause);
  playTone(NOTE_A1);
  delay(pause);
  playTone(NOTE_AS1);
  delay(pause);
  playTone(NOTE_B1);
  delay(pause);
  playTone(NOTE_C2);
  delay(pause);
  playTone(NOTE_CS2);
  delay(pause);
  playTone(NOTE_D2);
  delay(pause);
  playTone(NOTE_DS2);
  delay(pause);
  playTone(NOTE_E2);
  delay(pause);
  playTone(NOTE_F2);
  delay(pause);
  playTone(NOTE_FS2);
  delay(pause);
  playTone(NOTE_G2);
  delay(pause);
  playTone(NOTE_GS2);
  delay(pause);
  playTone(NOTE_A2);
  delay(pause);
  playTone(NOTE_AS2);
  delay(pause);
  playTone(NOTE_B2);
  delay(pause);
  delay(pause);
  playTone(NOTE_C3);
  delay(pause);
  playTone(NOTE_CS3);
  delay(pause);
  playTone(NOTE_D3);
  delay(pause);
  playTone(NOTE_DS3);
  delay(pause);
  playTone(NOTE_E3);
  delay(pause);
  playTone(NOTE_F3);
  delay(pause);
  playTone(NOTE_FS3);
  delay(pause);
  playTone(NOTE_G3);
  delay(pause);
  playTone(NOTE_GS3);
  delay(pause);
  playTone(NOTE_A3);
  delay(pause);
  playTone(NOTE_AS3);
  delay(pause);
  delay(pause);
  playTone(NOTE_B3);
  delay(pause);
  playTone(NOTE_C4);
  delay(pause);
  playTone(NOTE_CS4);
  delay(pause);
  playTone(NOTE_D4);
  delay(pause);
  playTone(NOTE_DS4);
  delay(pause);
  playTone(NOTE_E4);
  delay(pause);
  playTone(NOTE_F4);
  delay(pause);
  playTone(NOTE_FS4);
  delay(pause);
  playTone(NOTE_G4);
  delay(pause);
  playTone(NOTE_GS4);
  delay(pause);
  playTone(NOTE_A4);
  delay(pause);
  playTone(NOTE_AS4);
  delay(pause);
  playTone(NOTE_B4);
  delay(pause);
  playTone(NOTE_C5);
  delay(pause);
  playTone(NOTE_CS5);
  delay(pause);
  playTone(NOTE_D5);
  delay(pause);
  playTone(NOTE_DS5);
  delay(pause);
  playTone(NOTE_E5);
  delay(pause);
  playTone(NOTE_F5);
  delay(pause);
  playTone(NOTE_FS5);
  delay(pause);
  playTone(NOTE_G5);
  delay(pause);
  playTone(NOTE_GS5);
  delay(pause);
  playTone(NOTE_A5);
  delay(pause);
  playTone(NOTE_AS5);
  delay(pause);
  playTone(NOTE_B5);
  delay(pause);
  playTone(NOTE_C6);
  delay(pause);
  playTone(NOTE_CS6);
  delay(pause);
  delay(pause);
  playTone(NOTE_D6);
  delay(pause);
  playTone(NOTE_DS6);
  delay(pause);
  playTone(NOTE_E6);
  delay(pause);
  playTone(NOTE_F6);
  delay(pause);
  playTone(NOTE_FS6);
  delay(pause);
  playTone(NOTE_G6);
  delay(pause);
  playTone(NOTE_GS6);
  delay(pause);
  playTone(NOTE_A6);
  delay(pause);
  playTone(NOTE_AS6);
  delay(pause);
  playTone(NOTE_B6);
  delay(pause);
  playTone(NOTE_C7);
  delay(pause);
  playTone(NOTE_CS7);
  delay(pause);
  playTone(NOTE_D7);
  delay(pause);
  playTone(NOTE_DS7);
  delay(pause);
  playTone(NOTE_E7);
  delay(pause);
  playTone(NOTE_F7);
  delay(pause);
  playTone(NOTE_FS7);
  delay(pause);
  playTone(NOTE_G7);
  delay(pause);
  playTone(NOTE_GS7);
  delay(pause);
  playTone(NOTE_A7);
  delay(pause);
  playTone(NOTE_AS7);
  delay(pause);
  playTone(NOTE_B7);
  delay(pause);
  playTone(NOTE_C8);
  delay(pause);
  playTone(NOTE_CS8);
  delay(pause);
  playTone(NOTE_D8);
  delay(pause);
  playTone(NOTE_DS8);
}

void playDurChord(Chord chord){
  // Durové akordy
  // Cdur	C	E	G
  // C#dur	C#	F	G#
  // Ddur	D	F#	A
  // D#dur	D#	G	B
  // Edur	E	G#	H
  // Fdur	F	A	C
  // F#dur	F#	B	C#
  // Gdur	G	H	D
  // G#dur	G#	C	D#
  // Adur	A	C#	E
  // Bdur	B	D	F
  // Hdur	H	D#	F#
  switch(chord)
  {
      case Cdur:
        // C	E	G
        playTone(NOTE_C4);
        playTone(NOTE_E4);
        playTone(NOTE_G4);
        break;
      case CSdur:
        // C#	F	G#
        playTone(NOTE_CS4);
        playTone(NOTE_F4);
        playTone(NOTE_GS4);
        break;
      case Ddur:
        // D	F#	A
        playTone(NOTE_D4);
        playTone(NOTE_FS4);
        playTone(NOTE_A4);
        break;
      case DSdur:
        // D#	G	B
        playTone(NOTE_DS4);
        playTone(NOTE_G4);
        playTone(NOTE_B4);
        break;
      case Edur:
        // E	G#	H
        playTone(NOTE_E4);
        playTone(NOTE_GS4);
        // playTone(NOTE_H4);
        break;
      case Fdur:
        // F	A	C
        playTone(NOTE_F4);
        playTone(NOTE_A4);
        playTone(NOTE_C4);
        break;
      case FSdur:
        // F#	B	C#
        playTone(NOTE_FS4);
        playTone(NOTE_B4);
        playTone(NOTE_CS4);
        break;
      case Gdur:
        // G	H	D
        playTone(NOTE_G4);
        // playTone(NOTE_H4);
        playTone(NOTE_D4);
        break;
      case GSdur:
        // G#	C	D#
        playTone(NOTE_GS4);
        playTone(NOTE_C4);
        playTone(NOTE_DS4);
        break;
      case Adur:
        // A	C#	E
        playTone(NOTE_A4);
        playTone(NOTE_CS4);
        playTone(NOTE_E4);
        break;
      case Bdur:
        // B	D	F
        playTone(NOTE_B4);
        playTone(NOTE_D4);
        playTone(NOTE_F4);
        break;
      case Hdur:
        // H	D#	F#
        // playTone(NOTE_H4);
        playTone(NOTE_DS4);
        playTone(NOTE_FS4);
        break;
  }
  delay(500);
}

void playAllDurChords(){
  playDurChord(Cdur);
  playDurChord(CSdur);
  playDurChord(Ddur);
  playDurChord(DSdur);
  playDurChord(Edur);
  playDurChord(Fdur);
  playDurChord(FSdur);
  playDurChord(Gdur);
  playDurChord(GSdur);
  playDurChord(Adur);
  playDurChord(Bdur);
  playDurChord(Hdur);
}