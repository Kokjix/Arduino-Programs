int echo = 8;
int trig = 4;

void setup() {
 Serial.begin(9600);
pinMode (10,OUTPUT);
}

void loop() {
digitalWrite(trig,LOW);
delayMicroseconds(10);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
int mesafe = (pulseIn(echo,HIGH)) / 58.0;
Serial.print(mesafe);
Serial.println(" cm");
if (mesafe < 5){digitalWrite (10,HIGH);}
 
}
