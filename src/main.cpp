#include "main.h"

extern SoftwareSerial mySerial;

// Hodnota je priblizne 30 pokud paprsek neni preruseny
// Pokud je preruseny tak je priblizne 750
const int LASER_MAX_NOT_INTERRUPTED = 400;

// NOTE_XY
// X = ton (tonu je 12 = 7 + 5) // https://dusan.pc-slany.cz/hudba/tony.htm
// Y = oktava (po 12 tonech zacina znovu stejna oktava)
// Chromaticky (půltonový) kruh => C C# D D# E F F# G G# A B H
// Kvartovy kruh (příbuznost tónů - posun o 5půltonů)  => C G D A E H F# C# G# D# B# F# =>

const int LASER1_NOTE = NOTE_C4;
const int LASER2_NOTE = NOTE_D4;
const int LASER3_NOTE = NOTE_E4;
const int LASER4_NOTE = NOTE_F4;
const int LASER5_NOTE = NOTE_G4;
const int LASER6_NOTE = NOTE_A4;
const int LASER7_NOTE = NOTE_B4; // nechapu kde je H :D

int laserValA0 = 1023;
int laserValA1 = 1023;
int laserValA2 = 1023;
int laserValA3 = 1023;
int laserValA4 = 1023;
int laserValA5 = 1023;
int laserValA6 = 1023;

int bleValue = 1; // default function

void readLasers();
void turnTheLedOnIfTheLaserIsInterrupted();

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_D2, OUTPUT);
  pinMode(LED_D3, OUTPUT);  
  pinMode(LED_D4, OUTPUT);    
  pinMode(LED_D5, OUTPUT);  
  pinMode(LED_D6, OUTPUT);  
  pinMode(LED_D7, OUTPUT);  
  pinMode(LED_D8, OUTPUT);

  pinMode(LASER_A0, INPUT);
  pinMode(LASER_A1, INPUT);
  pinMode(LASER_A2, INPUT);
  pinMode(LASER_A3, INPUT);
  pinMode(LASER_A4, INPUT);
  pinMode(LASER_A5, INPUT);
  pinMode(LASER_A6, INPUT);

  pinMode(REPRO_D11, OUTPUT);

  Serial.begin(9600);
  
  mySerial.begin(9600);

  sendCommand("AT");
  sendCommand("AT+ROLE0");
  sendCommand("AT+UUID0xFFE0");
  sendCommand("AT+CHAR0xFFE1");
  sendCommand("AT+NAMEHarfa");

  // playTone(NOTE_C4);
  // playTone(NOTE_E4);
  // playTone(NOTE_G4);

  // playAllTones();
  // playAllDurChords();
}

void loop() {
  int result = readBLE();
  if(result != -1){
    bleValue = result;
    Serial.println(bleValue);
  }

  // Serial.println(bleValue);

  // Serial.println(bleValue);
  switch(bleValue){
    case 0:
      // do nothing :)
      break;
    case 1:
      readLasers();
      turnTheLedOnIfTheLaserIsInterrupted();
      break;
    case 2:
      knightRider();
      break;
    case 3:
      redWhite();
      break;
    case 4:
      playMelody();
      break;
    case 5:
      // playTones();
      playAllTones();
      break;
    case 6:
      starWars();
      break;
    case 7:
      turnOnAndOff(LED_D2);
      bleValue = 0;
      break;
    case 8:
      turnOnAndOff(LED_D3);
      bleValue = 0;
      break;
    case 9:
      turnOnAndOff(LED_D4);
      bleValue = 0;
      break;
    case 10:
      turnOnAndOff(LED_D5);
      bleValue = 0;
      break;
    case 11:
      turnOnAndOff(LED_D6);
      bleValue = 0;
      break;
    case 12:
      turnOnAndOff(LED_D7);
      bleValue = 0;
      break;
    case 13:
      turnOnAndOff(LED_D8);
      bleValue = 0;
      break;
    case 14:
      playPirates();
      bleValue = 0;
      break;
    case 15:
      playCrazyFrog();
      bleValue = 0;
      break;
    case 16:
      playMarioUW();
      bleValue = 0;
      break;
    case 17:
      playTitanic();
      bleValue = 0;
      break;
  }
}

void turnTheLedOnIfTheLaserIsInterrupted() {
  if(laserValA6 < LASER_MAX_NOT_INTERRUPTED){
    digitalWrite(LED_D2, LOW);
  }else{
    digitalWrite(LED_D2, HIGH);
    playTone(LASER1_NOTE);
  }

  if(laserValA5 < LASER_MAX_NOT_INTERRUPTED){
    digitalWrite(LED_D3, LOW);
  }else{
    digitalWrite(LED_D3, HIGH);
    playTone(LASER2_NOTE);
  }

  if(laserValA4 < LASER_MAX_NOT_INTERRUPTED){
    digitalWrite(LED_D4, LOW);
  }else{
    digitalWrite(LED_D4, HIGH);
    // playTone(LASER3_NOTE); // nesviti led :(
  }

  if(laserValA3 < LASER_MAX_NOT_INTERRUPTED){
    digitalWrite(LED_D5, LOW);
  }else{
    digitalWrite(LED_D5, HIGH);
    playTone(LASER4_NOTE);
  }

  if(laserValA2 < LASER_MAX_NOT_INTERRUPTED){
    digitalWrite(LED_D6, LOW);
  }else{
    digitalWrite(LED_D6, HIGH);
    playTone(LASER5_NOTE);
  }

  if(laserValA1 < LASER_MAX_NOT_INTERRUPTED){
    digitalWrite(LED_D7, LOW);
  }else{
    digitalWrite(LED_D7, HIGH);
    playTone(LASER6_NOTE);
  }

  if(laserValA0 < LASER_MAX_NOT_INTERRUPTED){
    digitalWrite(LED_D8, LOW);
  }else{
    digitalWrite(LED_D8, HIGH);
    playTone(LASER7_NOTE);
  }
}

void readLasers() {
   // Analog Values 0 to 1023
  laserValA0 = analogRead(LASER_A0);
  laserValA1 = analogRead(LASER_A1);
  laserValA2 = analogRead(LASER_A2);
  laserValA3 = analogRead(LASER_A3);
  laserValA4 = analogRead(LASER_A4);
  laserValA5 = analogRead(LASER_A5);
  laserValA6 = analogRead(LASER_A6);

  delay(10);
}