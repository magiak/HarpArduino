#include "playTheme.h"
#include "tones.h"

void kockaLezeDirou(){
  // C D E F G A | B C D E F 
  // 2/4 zive = 124

  // 1 2 3 4, 5 5, 6 6, 5, 6 6, 5
  // 4 4 4 4, 3 3, 2 2, 5

  playToneAndLightUpLed(NOTE_C4, 1000/4);
  playToneAndLightUpLed(NOTE_D4, 1000/4);
  playToneAndLightUpLed(NOTE_E4, 1000/4);
  playToneAndLightUpLed(NOTE_F4, 1000/4);

  playToneAndLightUpLed(NOTE_G4, 1000/2);
  playToneAndLightUpLed(NOTE_G4, 1000/2);

  playToneAndLightUpLed(NOTE_A4, 1000/2);
  playToneAndLightUpLed(NOTE_A4, 1000/2);

  playToneAndLightUpLed(NOTE_G4, 1000);

  playToneAndLightUpLed(NOTE_A4, 1000/2);
  playToneAndLightUpLed(NOTE_A4, 1000/2);

  playToneAndLightUpLed(NOTE_G4, 1000);

  // druhy radek
  playToneAndLightUpLed(NOTE_F4, 1000/4);
  playToneAndLightUpLed(NOTE_F4, 1000/4);
  playToneAndLightUpLed(NOTE_F4, 1000/4);
  playToneAndLightUpLed(NOTE_F4, 1000/4);

  playToneAndLightUpLed(NOTE_E4, 1000/2);
  playToneAndLightUpLed(NOTE_E4, 1000/2);

  playToneAndLightUpLed(NOTE_D4, 1000/2);
  playToneAndLightUpLed(NOTE_D4, 1000/2);

  playToneAndLightUpLed(NOTE_G4, 1000);
}
