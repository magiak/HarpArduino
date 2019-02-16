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

const int aS = 455; // Nemam nahradu v NOTE :(

void starWars(){
  //Play first section
  firstSection();
 
  //Play second section
  // secondSection();
 
  // //Variant 1
  // playTone(NOTE_F4, 250);  
  // playTone(NOTE_GS4, 500);  
  // playTone(NOTE_F4, 350);  
  // playTone(NOTE_A4, 125);
  // playTone(NOTE_C5, 500);
  // playTone(NOTE_A4, 375);  
  // playTone(NOTE_C5, 125);
  // playTone(NOTE_E5, 650);
 
  // delay(500);
 
  // //Repeat second section
  // secondSection();
 
  // //Variant 2
  // playTone(NOTE_F4, 250);  
  // playTone(NOTE_GS4, 500);  
  // playTone(NOTE_F4, 375);  
  // playTone(NOTE_C5, 125);
  // playTone(NOTE_A4, 500);  
  // playTone(NOTE_F4, 375);  
  // playTone(NOTE_C5, 125);
  // playTone(NOTE_A4, 650);  
 
  // delay(650);
}

void firstSection()
{
  playTone(NOTE_A4, 500);
  playTone(NOTE_A4, 500);    
  playTone(NOTE_A4, 500);
  playTone(NOTE_F4, 350);
  playTone(NOTE_C5, 150);  
  playTone(NOTE_A4, 500);
  playTone(NOTE_F4, 350);
  playTone(NOTE_C5, 150);
  playTone(NOTE_A4, 650);
 
  delay(500);
 
  playTone(NOTE_E5, 500);
  playTone(NOTE_E5, 500);
  playTone(NOTE_E5, 500);  
  playTone(NOTE_F5, 350);
  playTone(NOTE_C5, 150);
  playTone(NOTE_GS4, 500);
  playTone(NOTE_F4, 350);
  playTone(NOTE_C5, 150);
  playTone(NOTE_A4, 650);
 
  delay(500);
}
 
void secondSection()
{
  playTone(NOTE_A5, 500);
  playTone(NOTE_A4, 300);
  playTone(NOTE_A4, 150);
  playTone(NOTE_A5, 500);
  playTone(NOTE_GS5, 325);
  playTone(NOTE_G5, 175);
  playTone(NOTE_FS5, 125);
  playTone(NOTE_F5, 125);    
  playTone(NOTE_FS5, 250);
 
  delay(325);
 
  playTone(aS, 250);
  playTone(NOTE_DS5, 500);
  playTone(NOTE_D5, 325);  
  playTone(NOTE_CS5, 175);  
  playTone(NOTE_C5, 125);  
  playTone(NOTE_AS4, 125);  
  playTone(NOTE_C5, 250);  
 
  delay(350);
}



