
int isik = A0;
void setup() {
pinMode (A0,INPUT);
pinMode (7,OUTPUT);
Serial.begin(9600);

}

void loop() {
analogRead(isik);
Serial.println(analogRead(isik));
if(analogRead(isik) <100){
  digitalWrite(7,HIGH);
  delay(1000);
}
else
digitalWrite (7,LOW);
delay(1000);

}
