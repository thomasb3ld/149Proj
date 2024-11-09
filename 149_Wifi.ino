#include "BluetoothSerial.h"

BluetoothSerial serialBT;
char cmd;
int ledpin = 2;

void setup() {
  serialBT.begin("ESP-32");
}

void loop() {
  if (serialBT.available()){
    cmd = serialBT.read();
  }
  if (cmd == '1') {
    digitalWrite(ledpin, HIGH);
  }
  if (cmd == '0') {
    digitalWrite(ledpin, LOW);
  }
  delay(20);
}