void setup() {
pinMode(8,OUTPUT);
pinMode(10,OUTPUT);
pinMode(12,OUTPUT);
}

void loop() {
digitalWrite(8,LOW);
digitalWrite(10,HIGH);
digitalWrite(12,HIGH);
delay(1000);
digitalWrite(8,HIGH);
digitalWrite(10,LOW);
digitalWrite(12,HIGH);
delay(1000);
digitalWrite(8,HIGH);
digitalWrite(10,HIGH);
digitalWrite(12,LOW);
delay(1000);
digitalWrite(8,LOW);
digitalWrite(10,LOW);
digitalWrite(12,LOW);
delay(1000);  

}
