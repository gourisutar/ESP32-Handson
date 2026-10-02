
int ledPin=2;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin,OUTPUT);
Serial.begin(115200);

}

void loop() {
  
  // put your main code here, to run repeatedly:
if(touchRead(T0)<50){
  digitalWrite(ledPin,HIGH);
}
else{
   digitalWrite(ledPin,LOW);
}
delay(200);
}