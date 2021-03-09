



void setup() {
pinMode(2,INPUT);//buton
pinMode(8,OUTPUT);//led
pinMode(9,OUTPUT);//led
pinMode(10,OUTPUT);//led
pinMode(11,OUTPUT);//led

}

void loop() {
if(digitalRead(2) == HIGH){
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
digitalWrite (11,HIGH);
}
else
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
digitalWrite (11,LOW);
}
