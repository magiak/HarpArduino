#include "bluetooth.h"

SoftwareSerial mySerial(BLE_TXD, BLE_RXD);

void sendCommand(const char * command) {
  Serial.print("Command send :");
  Serial.println(command);
  mySerial.println(command);
  //wait some time
  delay(1000);

  char reply[100];
  int i = 0;
  while (mySerial.available()) {
    reply[i] = mySerial.read();
    i += 1;
  }
  //end the string
  reply[i] = '\0';
  Serial.print(reply);
  Serial.println("Reply end");
  delay(50);
}

void writeBLE(String value){
  // mySerial.println(value);
}

int readBLE(){
  int bleValue = -1;
  if (mySerial.available()) {
    bleValue = mySerial.read();  
    Serial.println("Got input:");
    Serial.println(bleValue);
  }

  return bleValue;
}