#include "Servo.h"

Servo  servo1;
Servo  servo2;
int pos1 = 0;
int pos2 = 0;

void setup() {
  Serial.begin(9600);
  servo1.attach(10); // SER0
  servo2.attach(9); // SER1
  servo1.write(50);
  servo2.write(65);
}

void loop() {
  if(Serial.available()) {
    char key = Serial.read();
    pos1 = (pos1+180)%180;
    pos2 = (pos2+180)%180;
    switch(key){
      case 's': pos1 = pos1 + 5;
                servo1.write(pos1);
                delay(20);
                Serial.println(pos1);
                break;
      case 'w': pos1 = pos1 - 5;
                servo1.write(pos1);
                delay(20);
                Serial.println(pos1);
                break;
      case 'a': pos2 = pos2 + 5;
                servo2.write(pos2);
                delay(20);
                Serial.println(pos2);
                break;
      case 'd': pos2 = pos2 - 5;
                servo2.write(pos2);
                delay(20);
                Serial.println(pos2);
                break;
      default:  servo1.write(0);
                pos1 = 0;
                servo2.write(0);
                pos2 = 0;
                break;
    }
  }
}
