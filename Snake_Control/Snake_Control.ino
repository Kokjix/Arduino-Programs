#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
int right=7;
int up=8;
int left= 9;
int down= 10;


void setup() {
lcd.begin();//lcd yi başlatıyor
pinMode(right,INPUT);
pinMode(up,INPUT);
pinMode(left,INPUT);
pinMode(down,INPUT);
Serial.begin(9600);
lcd.print("TIME TO");//lcd birinci satırına yazıyı yazıyor
lcd.setCursor(0,1);//lcdnin ikinci satırı
lcd.print("PLAY SNAKE");
}

void loop() {
 if(digitalRead(right) == HIGH){
  Serial.write(1);//bağlı porta 1 byte göderiyor
  Serial.flush();
  delay(20);
  
 }
 if(digitalRead(up) == HIGH){
  Serial.write(2);
  Serial.flush();
  delay(20);
  
 }
 if(digitalRead(left) == HIGH){
  Serial.write(3);
  Serial.flush();
  delay(20);

 }
 if(digitalRead(down) == HIGH){
  Serial.write(4);
  Serial.flush();
  delay(20);

 }

}
