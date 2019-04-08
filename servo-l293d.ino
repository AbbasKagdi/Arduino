//#include "AFMotor.h"
#include "Servo.h"

Servo  servo;
Servo  servo2;
int pos = 0;
void setup() {

    servo.attach(9); // SER0
    servo2.attach(10); // SER0
    }

void loop() {
    //servo.write(0);
    //delay(300);

   //servo.write(180);
   //delay(300);

    for (pos = 0; pos <=120; pos +=1){
 
    servo.write(pos);
    servo2.write(pos);
    delay(10);
  }
 
  for (pos=120; pos >= 0; pos -=1){
 
    servo.write(pos);
    servo2.write(pos);
    delay(10);
  }
}
