#include "main.h"

const int DEFAULT_MODULE = 1;
int selectedModule = DEFAULT_MODULE; // default function
int loopCount = 1;
bool playToneFromRepro = false;

void setupPins();
void switchModules();
void readLasers();
void turnTheLedOnIfTheLaserIsInterrupted();
void showBLEStatus();

void setup() {
  setupPins();

  Serial.begin(9600);
  mySerial.begin(9600);

  sendCommand("AT");
  sendCommand("AT+ROLE0");
  sendCommand("AT+UUID0xFFE0");
  sendCommand("AT+CHAR0xFFE1");
  sendCommand("AT+NAMEHarfa");
}

void loop() {
  int result = readBLE();
  if(result != -1){
    selectedModule = result;
    Serial.println(selectedModule);
  }

  switchModules();
}

void setupPins(){
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

  pinMode(BLE_STATE, INPUT);
  pinMode(REPRO_D11, OUTPUT);
}

void switchModules(){
  switch(selectedModule){
    case 0:
      // do nothing :)
      break;
    case 1:
      readLasers();
      turnTheLedOnIfTheLaserIsInterrupted();
      break;
    case 2:
      knightRiderLeds();
      break;
    case 3:
      redWhiteLeds();
      break;
    case 4:
      playMelody();
      selectedModule = DEFAULT_MODULE;
      break;
    case 5:
      playAllTones();
      selectedModule = DEFAULT_MODULE;
      break;
    case 6:
      LASER1_NOTE = NOTE_F4;
      LASER2_NOTE = NOTE_GS4;
      LASER3_NOTE = NOTE_A4;
      LASER4_NOTE = NOTE_C5;
      LASER5_NOTE = NOTE_E5;
      LASER6_NOTE = NOTE_F5;
      LASER7_NOTE = NOTE_B4;
      starWars();

      selectedModule = DEFAULT_MODULE;
      break;
    case 7:
      turnLedOnAndOff(LED_D2);
      selectedModule = DEFAULT_MODULE;
      break;
    case 8:
      turnLedOnAndOff(LED_D3);
      selectedModule = DEFAULT_MODULE;
      break;
    case 9:
      turnLedOnAndOff(LED_D4);
      selectedModule = DEFAULT_MODULE;
      break;
    case 10:
      turnLedOnAndOff(LED_D5);
      selectedModule = DEFAULT_MODULE;
      break;
    case 11:
      turnLedOnAndOff(LED_D6);
      selectedModule = DEFAULT_MODULE;
      break;
    case 12:
      turnLedOnAndOff(LED_D7);
      selectedModule = DEFAULT_MODULE;
      break;
    case 13:
      turnLedOnAndOff(LED_D8);
      selectedModule = DEFAULT_MODULE;
      break;
    case 14:
      playPirates();
      selectedModule = DEFAULT_MODULE;
      break;
    case 15:
      playCrazyFrog();
      selectedModule = DEFAULT_MODULE;
      break;
    case 16:
      playMarioUW();
      selectedModule = DEFAULT_MODULE;
      break;
    case 17:
      playTitanic();
      selectedModule = DEFAULT_MODULE;
      break;
    case 18:
      LASER1_NOTE = NOTE_C4;
      LASER2_NOTE = NOTE_D4;
      LASER3_NOTE = NOTE_E4;
      LASER4_NOTE = NOTE_F4;
      LASER5_NOTE = NOTE_G4;
      LASER6_NOTE = NOTE_A4;
      LASER7_NOTE = NOTE_B4;

      kockaLezeDirou();
      selectedModule = DEFAULT_MODULE;

      break;
  }
}

void turnTheLedOnIfTheLaserIsInterrupted() {
  // LED_D2 is used for BLE status
  showBLEStatus();

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
    playTone(LASER3_NOTE);
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

// BLE BLINK :)
bool firstLaserInterrupted = false;

int ledState = LOW;             // ledState used to set the LED
unsigned long previousMillis = 0;        // will store last time LED was updated
const long interval = 500;           // interval at which to blink (milliseconds)

unsigned long previousInterruptedMillis = 0; // last time the first laser was interrupted
const long interruptedInterval = 5000; // again start blinking after 5s of inactivity

void showBLEStatus(){
  if(laserValA6 >= LASER_MAX_NOT_INTERRUPTED && !firstLaserInterrupted){
    firstLaserInterrupted = true;
  }

  int state = analogRead(BLE_STATE); // Don't know why i can't use digitalRead :(
  playToneFromRepro = state < 500;

  if(!firstLaserInterrupted){
    if(state < 500){
      // NOT CONNECTED
      unsigned long currentMillis = millis();
      if (currentMillis - previousMillis >= interval) {
        // save the last time you blinked the LED
        previousMillis = currentMillis;

        // if the LED is off turn it on and vice-versa:
        if (ledState == LOW) {
          ledState = HIGH;
        } else {
          ledState = LOW;
        }

        // set the LED with the ledState of the variable:
        digitalWrite(LED_D2, ledState);
      }
    }else{
      digitalWrite(LED_D2, LOW); // CONNECTED STOP BLINKING
    }
  }else{
    // detect interrupted laser
    if(laserValA6 < LASER_MAX_NOT_INTERRUPTED){
      unsigned long currentMillis = millis();
      // again start blinking after 5s of inactivity
      if(currentMillis - previousInterruptedMillis >= interruptedInterval){
        firstLaserInterrupted = false;
      }

      digitalWrite(LED_D2, LOW);
    }else{
      previousInterruptedMillis = millis(); // save the last time the laser was interrupted
      digitalWrite(LED_D2, HIGH);
      playTone(LASER1_NOTE);
    }
  }
}
