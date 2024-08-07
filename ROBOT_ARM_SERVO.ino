
#include <Servo.h>
  Servo Serv;
  Servo Serv1;
  Servo Serv2;
 
  int pinServo=6;
  int pinServo1=9;
  int pinServo2=11;
  int val=0;
  int val1=0;
  int val2=0;
void setup() {
  Serv.attach(pinServo);
  Serv1.attach(pinServo1); 
  Serv2.attach(pinServo2); 
  
  
  Serial.begin(9600);
   //Serial.begin(38400);
}

void loop() {
  if(Serial.available()>0)
  {
    char c=Serial.read();
    if(c=='L')// 
    {
      Serv.write(180);
     delay(100);
    }
    if(c=='R')
    {  
     Serv.write(10);
     delay(100);  
    }
    if(c=='F')
    {
      Serv1.write(280);
     delay(100);
    }
    if(c=='B')
    {
      Serv1.write(10);
     delay(100);
    }

    if(c=='W')// 
    {
      Serv2.write(180);
     delay(1000);
    }
    if(c=='U')
    {  
     Serv2.write(10);
     delay(1000);  
    }

  }
  
}
