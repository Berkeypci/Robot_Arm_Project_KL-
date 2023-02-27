#include <Servo.h> 
Servo myservo1;
Servo myservo2; 
Servo myservo3; 
Servo myservo4; 
Servo myservo5; 
void setup() {
Serial.begin(9600);
myservo1.attach(3);
myservo2.attach(5);
myservo3.attach(6);
myservo4.attach(9);
myservo5.attach(10);
}

void loop() {  
int deger, servo1, servo2,servo3 , servo4, servo5;

if(Serial.available())
{
  delay(100);

deger=Serial.read();
int number[12] = {0,0,0,0,0,0,0,0,0,0,0,0};

for (int i = 0 ; i<13; i= i++)
      {
      number[i]=Serial.read();
    }
      
      int num0=number[0]-'0';
      servo1=num0;
      
      int num1=number[1]-'0';
      int num2=number[2]-'0';
      int num3=number[3]-'0';
      servo2=num1*100+ num2*10+ num3;
      
      
      int num4=number[4]-'0';
      int num5=number[5]-'0';
      int num6=number[6]-'0';
      servo3=num4*100+ num5*10+ num6;
      
      int num7=number[7]-'0';
      int num8=number[8]-'0';
      int num9=number[9]-'0';
      
     servo4=num7*100+ num8*10+ num9; 
      
      
       int num10=number[10]-'0';
      int num11=number[11]-'0';
      int num12=number[12]-'0';
      servo5=num10*100+ num11*10+ num12; 
      
      hareket(servo1,servo2 ,servo3,servo4,servo5);
    
    Serial.flush();
  }


}

void hareket(int hareket1, int hareket2, int hareket3, int hareket4, int hareket5)
{
 if (hareket1=1)
{
myservo1.write(150);
}
 if (hareket1==0)
{myservo1.write(180);
}  
 myservo2.write(hareket2); 
myservo3.write(hareket3); 
myservo4.write(hareket4);
myservo5.write(hareket5);
}

