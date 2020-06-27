#include <Stepper.h>

void setup(){
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(0,OUTPUT);
}
void loop(){
  //counter-clockwise
  digitalWrite(0,HIGH);digitalWrite(1,LOW);digitalWrite(2,LOW);digitalWrite(3,LOW);
    delay(1000);
  digitalWrite(0,LOW);digitalWrite(1,HIGH);digitalWrite(2,LOW);digitalWrite(3,LOW);
    delay(1000);
  digitalWrite(0,LOW);digitalWrite(1,LOW);digitalWrite(2,HIGH);digitalWrite(3,LOW);
    delay(1000);
  digitalWrite(0,LOW);digitalWrite(1,LOW);digitalWrite(2,LOW);digitalWrite(3,HIGH);
    delay(1000);
   //clockwise
  digitalWrite(3,HIGH);digitalWrite(2,LOW);digitalWrite(1,LOW);digitalWrite(0,LOW);
    delay(1000);
  digitalWrite(3,LOW);digitalWrite(2,HIGH);digitalWrite(1,LOW);digitalWrite(0,LOW);
    delay(1000);
  digitalWrite(3,LOW);digitalWrite(2,LOW);digitalWrite(1,HIGH);digitalWrite(0,LOW);
    delay(1000);
  digitalWrite(3,LOW);digitalWrite(2,LOW);digitalWrite(1,LOW);digitalWrite(0,HIGH);
    delay(1000);
    
}
