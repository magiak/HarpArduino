#include "playTheme.h"

/*
 * The themes given below were converted from the piano sheet music 
 * Code by : B.Aswinth Raj
 * Dated: 15-06-2017
 * Website: CircuitDigest.com
 */

//##############**"HE IS A PIRATE" Theme song of Pirates of caribbean**##############//
int Pirates_note[] = {
  NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4,
  NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, 
  NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_D4,  
  NOTE_A3, NOTE_C4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_F4, NOTE_F4, 
  NOTE_F4, NOTE_G4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_D4,
  0, NOTE_A3, NOTE_C4, NOTE_B3, NOTE_D4, NOTE_B3, NOTE_E4, NOTE_F4,
  NOTE_F4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_C4,
  NOTE_D4, 0, 0, NOTE_A3, NOTE_C4, NOTE_D4, NOTE_D4, NOTE_D4, NOTE_F4,
  NOTE_G4, NOTE_G4, NOTE_G4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_A4, NOTE_G4,
  NOTE_A4, NOTE_D4, 0, NOTE_D4, NOTE_E3, NOTE_F4, NOTE_F4, NOTE_G4, NOTE_A4, 
  NOTE_D4, 0, NOTE_D4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_F4, NOTE_D4
};

int Pirates_duration[] = {
  4,8,4,8,4,8,8,8,8,4,8,4,8,4,8,8,8,8,4,8,4,8,
  4,8,8,8,8,4,4,8,8,4,4,8,8,4,4,8,8,
  8,4,8,8,8,4,4,8,8,4,4,8,8,4,4,8,4,
  4,8,8,8,8,4,4,8,8,4,4,8,8,4,4,8,8,
  8,4,8,8,8,4,4,4,8,4,8,8,8,4,4,8,8
};
//###########End of He is a Pirate song#############//

//##############**"Crazy Frog" song of Crazy frog album**##############//
int CrazyFrog_note[] = {
  NOTE_D4, 0, NOTE_F4, NOTE_D4, 0, NOTE_D4, NOTE_G4, NOTE_D4, NOTE_C4,
  NOTE_D4, 0, NOTE_A4, NOTE_D4, 0, NOTE_D4, NOTE_AS4, NOTE_A4, NOTE_F4,
  NOTE_D4, NOTE_A4, NOTE_D5, NOTE_D4, NOTE_C4, 0, NOTE_C4, NOTE_A3, NOTE_E4, NOTE_D4,
  0,NOTE_D4,NOTE_D4
};

int CrazyFrog_duration[] = {
  8, 8, 6, 16, 16, 16, 8, 8, 8, 
  8, 8, 6, 16, 16, 16, 8, 8, 8,
  8, 8, 8, 16, 16, 16, 16, 8, 8, 2,
  8,4,4
};
//###########End of Crazy Frog#############//

//##############**"Mario underworld" **##############//
int MarioUW_note[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,NOTE_AS3, NOTE_AS4, 0, 0,
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4, NOTE_AS3, NOTE_AS4, 0,0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,NOTE_DS3, NOTE_DS4, 0, 0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,NOTE_DS3, NOTE_DS4, 0,
  0, NOTE_DS4, NOTE_CS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4, NOTE_DS4, NOTE_GS3, NOTE_G3, NOTE_CS4,
  NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,  NOTE_AS3, NOTE_A3, NOTE_GS3,0, 0, 0
};

int MarioUW_duration[] = {
 12, 12, 12, 12,12, 12, 6,3,
 12, 12, 12, 12, 12, 12, 6, 3,
 12, 12, 12, 12, 12, 12, 6,
 3, 12, 12, 12, 12,
 12, 12, 6, 6, 18, 18, 18,
 6, 6, 6, 6,6, 6,
 18, 18, 18, 18, 18, 18, 10, 10, 10,
 10, 10, 10, 3, 3, 3
};
//###########End of Mario underworld#############//

//##############**"Titanic" **##############//
int Titanic_note[] = {
  NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4,
  NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4, NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_F5,
  NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_B4, NOTE_E4,
  NOTE_E4, NOTE_B4, NOTE_E5, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_E5, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_B3, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_B3, NOTE_E4,
  NOTE_D4, NOTE_E4, NOTE_F4, NOTE_G4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4
};

int Titanic_duration[] = {
  8,8,8,8,8,8,4,8,8,8,8,8,8,4,8,8,8,8,8,8,4,8,8,8,8,4,4,8,8,8,8,8,8,4,8,8,8,8,8,8,4,8,8,8,8,8,8,1,
  8,8,8,8,4,4,4,8,4,4,8,8,8,8,4,8,8,4,8,4,8,8,4,8,4,1
};
//###########End of Titanic#############//

int Melody_note[] = {
  NOTE_C4, NOTE_G3,NOTE_G3, NOTE_A3, NOTE_G3,0, NOTE_B3, NOTE_C4};

int Melody_duration[] = {
  4, 8, 8, 4,4,4,4,4 };

void playPirates()
{
  float pauseCoefficient = 1.05;
  int songSize = sizeof(Pirates_note)/sizeof(int);
  play(Pirates_note, Pirates_duration, songSize, pauseCoefficient);
}

void playCrazyFrog()
{
  float pauseCoefficient = 1.3;
  int songSize = sizeof(CrazyFrog_note)/sizeof(int);
  play(CrazyFrog_note, CrazyFrog_duration, songSize, pauseCoefficient);
}

void playMarioUW()
{
  float pauseCoefficient = 1.8;
  int songSize = sizeof(MarioUW_note)/sizeof(int);
  play(MarioUW_note, MarioUW_duration, songSize, pauseCoefficient);
}

void playTitanic()
{
  float pauseCoefficient = 2.7;
  int songSize = sizeof(Titanic_note)/sizeof(int);
  play(Titanic_note, Titanic_duration, songSize, pauseCoefficient);
}

void playMelody()
{
  float pauseCoefficient = 1.3;
  int songSize = sizeof(Melody_note)/sizeof(int);
  play(Melody_note, Melody_duration, songSize, pauseCoefficient);
}

void play(int note[], int duration[], int songSize, float pauseCoefficient){
  for (int thisNote = 0; thisNote < songSize; thisNote++) {
    int noteDuration = 1000 / duration[thisNote];//convert duration to time delay
    playTone(note[thisNote], noteDuration);
    int pauseBetweenNotes = noteDuration * pauseCoefficient; 
    delay(pauseBetweenNotes);
    noTone(8);
  }
}

// Star wars :D ale nefunguje to teda uplne :D
// https://gist.github.com/nicksort/4736535
const int c = 261;
const int d = 294;
const int e = 329;
const int f = 349;
const int g = 391;
const int gS = 415;
const int a = 440;
const int aS = 455;
const int b = 466;
const int cH = 523;
const int cSH = 554;
const int dH = 587;
const int dSH = 622;
const int eH = 659;
const int fH = 698;
const int fSH = 740;
const int gH = 784;
const int gSH = 830;
const int aH = 880;

void starWars(){
  //Play first section
  firstSection();
 
  //Play second section
  secondSection();
 
  //Variant 1
  playTone(f, 250);  
  playTone(gS, 500);  
  playTone(f, 350);  
  playTone(a, 125);
  playTone(cH, 500);
  playTone(a, 375);  
  playTone(cH, 125);
  playTone(eH, 650);
 
  delay(500);
 
  //Repeat second section
  secondSection();
 
  //Variant 2
  playTone(f, 250);  
  playTone(gS, 500);  
  playTone(f, 375);  
  playTone(cH, 125);
  playTone(a, 500);  
  playTone(f, 375);  
  playTone(cH, 125);
  playTone(a, 650);  
 
  delay(650);
}

void firstSection()
{
  playTone(a, 500);
  playTone(a, 500);    
  playTone(a, 500);
  playTone(f, 350);
  playTone(cH, 150);  
  playTone(a, 500);
  playTone(f, 350);
  playTone(cH, 150);
  playTone(a, 650);
 
  delay(500);
 
  playTone(eH, 500);
  playTone(eH, 500);
  playTone(eH, 500);  
  playTone(fH, 350);
  playTone(cH, 150);
  playTone(gS, 500);
  playTone(f, 350);
  playTone(cH, 150);
  playTone(a, 650);
 
  delay(500);
}
 
void secondSection()
{
  playTone(aH, 500);
  playTone(a, 300);
  playTone(a, 150);
  playTone(aH, 500);
  playTone(gSH, 325);
  playTone(gH, 175);
  playTone(fSH, 125);
  playTone(fH, 125);    
  playTone(fSH, 250);
 
  delay(325);
 
  playTone(aS, 250);
  playTone(dSH, 500);
  playTone(dH, 325);  
  playTone(cSH, 175);  
  playTone(cH, 125);  
  playTone(b, 125);  
  playTone(cH, 250);  
 
  delay(350);
}



