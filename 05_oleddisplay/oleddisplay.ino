 #include<Wire.h>
 #include<Adafruit_GFX.h>
 #include<Adafruit_SSD1306.h>
 
 #define SCREEN_WIDTH 128
 #define SCREEN_HIGHT 64
 Adafruit_SSD1306 oled(128,64,&Wire,-1);



 void setup() 
 {
  // put your setup code here, to run once:
 Serial.begin(9600);
 if(!oled.begin(SSD1306_SWITCHCAPVCC,0X3C))
 {
  Serial.println(F("SSD1306 FAILED"));
  while(true);
 }
 
 oled.clearDisplay();
}

void loop() {
  // put your main code here, to run repeatedly:
 oled.setTextSize(2);
 oled.setTextColor(WHITE);
 oled.setCursor(16,4);
 oled.println("Shashank");
 oled.setCursor(58,25);
  oled.write(3);
 
 oled.setCursor(34,45);
 oled.println("Gouri");
 oled.display();
 delay(1000);
}
