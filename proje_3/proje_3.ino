int pot = A0;
void setup() {
pinMode(pot,INPUT);
Serial.begin(9600);
}

void loop() {
  //digitalWrite(5,HIGH)
 int veri = analogRead(pot);
  Serial.println(veri);
}
