#include <Servo.h>

  Servo myServo;
  int pos;
  int potPin;
void setup() {
  myServo.attach(9);

}

void loop() {
 pos = analogRead(potPin);
  pos = map(pos,0,1023,0,180);
  myServo.write(pos);
  
  

}
