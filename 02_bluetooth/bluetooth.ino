#include"BluetoothSerial.h"

BluetoothSerial serialIBT;
char cmd;
void setup() {
  // put your setup code here, to run once:
serialIBT.begin("Esp32-BT");
pinMode(2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(serialIBT.available()){
  cmd= serialIBT.read();
}
if(cmd=='1'){
  digitalWrite(2,HIGH);
}
if(cmd=='0'){
  digitalWrite(2,LOW);
}
delay(20);
}