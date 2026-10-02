  #define trigpin 14
  #define echopin 12
int ledpin=18;
int relaypin=2; 
int buzzerpin=4;
  
  
  
  
  void setup() {
  // put your setup code here, to run once:
 pinMode(trigpin,OUTPUT);
 pinMode(echopin,INPUT);
  pinMode(ledpin,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(4,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(14,0);
 delayMicroseconds(2);

  digitalWrite(14,LOW);
delayMicroseconds(10);

   digitalWrite(14,HIGH);
    digitalWrite(trigpin,0);

    long duration=pulseIn(12,1);
    long distance=(duration/2)*0.0343;

  if(distance<100)
  {
    digitalWrite(ledpin,HIGH);
    digitalWrite(4,1);
    digitalWrite(2,1);

  }
 else{
   digitalWrite(ledpin,LOW);
    digitalWrite(4,0);
    digitalWrite(2,0);
 }
 delay(500);
}

