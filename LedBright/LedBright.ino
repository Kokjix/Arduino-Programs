
int motorVel;
int pot;
void setup() {
  pinMode(9,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);

}

void loop() {
  pot = analogRead(A0);
  Serial.println(pot);
  motorVel = map(pot,0,1023,0,255);
  // Serial.println(motorVel);
  analogWrite(9,motorVel);

}
