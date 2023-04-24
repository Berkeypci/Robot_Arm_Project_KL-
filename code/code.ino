#include <Servo.h> 
Servo servo1;
Servo servo2; 
Servo servo3; 
Servo servo4; 
int pot1deger;
int pot2deger;
int pot3deger;
int pot4deger;

void setup() {
pinMode(A0,INPUT);
pinMode(3,OUTPUT);
servo1.attach(3);

pinMode(A1,INPUT);
pinMode(5,OUTPUT);
servo2.attach(5);

pinMode(A2,INPUT);
pinMode(6,OUTPUT);
servo3.attach(6);

pinMode(A3,INPUT);
pinMode(9,OUTPUT);
servo4.attach(9);
}

void loop() {  
pot1deger = analogRead(A0);
pot1deger = map(pot1deger, 0, 1023,30 ,60);
servo1.write(pot1deger);


pot2deger = analogRead(A1);
pot2deger = map(pot2deger, 0 ,1023,30 ,60);
servo2.write(pot2deger);

pot3deger = analogRead(A2);
pot3deger = map(pot3deger, 0, 1023,30 ,60);
servo3.write(pot3deger);

 
pot4deger = analogRead(A3);
pot4deger = map(pot4deger,0, 1023,30 ,60);
servo4.write(pot4deger);
  
  }
