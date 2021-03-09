#include <Servo.h>
#include <LiquidCrystal_I2C.h>
int redled=6;
int blueled =5;
LiquidCrystal_I2C lcd (0x27,16,2);
int button =7;

Servo myServo;
int pos =0;






void setup() {
myServo.attach(9);
lcd.begin();
pinMode(A0,INPUT);
pinMode(redled,OUTPUT);
pinMode(blueled,OUTPUT);
pinMode(button,INPUT);
Serial.begin (9600);
}
float gerilim;
float sicaklik;
int potpin = A1;
int val;

void loop() {
gerilim =analogRead(A0);
gerilim =(gerilim/1023)*5000;
sicaklik =gerilim/10.0;
val = analogRead(potpin);
val = map(val,0,1023,0,180);
myServo.write(val);

if(sicaklik<50){
  lcd.setCursor(0,0);
  lcd.print("READY TO DRINK");
  lcd.setCursor(0,1);
  lcd.print(sicaklik);
  digitalWrite(blueled,LOW);
  digitalWrite(redled,HIGH);
  delay(1000);
  lcd.clear();
}
else{
  lcd.setCursor(0,0);
  lcd.print("TOO HOT TO DRINK");
  lcd.setCursor(0,1);
  lcd.print(sicaklik);
  digitalWrite(blueled,HIGH);
  digitalWrite(redled,LOW);
  delay(1000);
  lcd.clear();
}
}
