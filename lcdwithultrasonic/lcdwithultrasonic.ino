#include<LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27,16,2);


#define trigpin 4
#define echopin 15




void setup() {
  // put your setup code here, to run once:
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
lcd.init();
lcd.backlight();
}

void loop()
 {
 digitalWrite(trigpin,LOW);
 delayMicroseconds(2);
 digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
 digitalWrite(trigpin,0);
 long duration=pulseIn(echopin,1);   //provide duration value
 float distance=(duration/2)*0.0343;

 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("DISTANCE ");
 lcd.setCursor(0,1);
 lcd.print(distance);
 lcd.print(" CM");
 delay(500);
}
