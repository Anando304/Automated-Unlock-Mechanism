#include <Servo.h> 

Servo servo1,servo2,servo3,servo4;
int count = 0;

void setup() 
{ 
  servo1.attach(12);
  servo2.attach(11);
  servo3.attach(10);
  servo4.attach(9);
  
} 

void loop() {

    if (count==0){
    servo2.writeMicroseconds(1500);
  delay(1000);
   servo2.writeMicroseconds(1000);
  delay(320);
  servo2.writeMicroseconds(1500);
  delay(300);
 servo2.writeMicroseconds(2100); //left green motor
  delay(300);
  servo2.writeMicroseconds(1500);
 
 
  
  servo1.writeMicroseconds(2300);
  delay(300);
  servo1.writeMicroseconds(1500);
  delay(500);
  servo1.writeMicroseconds(1300); //right motor red
  delay(520);
  servo1.writeMicroseconds(1500);

  

  servo3.writeMicroseconds(1000); // botton left red motor
  delay(320);
  servo3.writeMicroseconds(1500);
  delay(300);
 servo3.writeMicroseconds(2100); 
  delay(300);
  servo3.writeMicroseconds(1500);

  

  servo4.writeMicroseconds(1000); // botton left green motor
  delay(320);
  servo4.writeMicroseconds(1500);
  delay(300);
 servo4.writeMicroseconds(2100); 
  delay(295);
  servo4.writeMicroseconds(1500);


  count++;
    }
 else{
    servo2.writeMicroseconds(1500);
    servo1.writeMicroseconds(1500);
    servo3.writeMicroseconds(1500);
    servo4.writeMicroseconds(1500);
  delay(3000);
  }
}
  
  
