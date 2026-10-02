#define trigpin 4
#define echopin 15

void setup() 
{
  Serial.begin(115200);
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 digitalWrite(trigpin,LOW);
 delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
 delayMicroseconds(10);
 digitalWrite(trigpin,LOW);

 long duration= pulseIn(echopin,1);
  float distance=(duration/2)*0.0343;
  Serial.print("DISTANCE");
  Serial.print(distance);
  Serial.println("CM")
  delay(500);
}

