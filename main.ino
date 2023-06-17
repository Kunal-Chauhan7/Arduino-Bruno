#include<Servo.h>
Servo s1;
Servo s2;
Servo s3;
Servo s4;
void setup(){
  s1.attach(4);
  s2.attach(5);
  s3.attach(6);
  s4.attach(7);
  s1.write(0);
  s2.write(0);
  s3.write(0);
  s4 .write(0);
}

void loop(){
  s1.write(60);
  s2.write(60);
  delay(200);
  s3.write(60);
  s4.write(60);
  delay(200);
  s1.write(0);
  s2.write(0);
  delay(200);
  s3.write(0);
  s4.write(0);  
}