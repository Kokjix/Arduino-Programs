#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

int isik = A0;


void setup() {
pinMode(A0,INPUT);
lcd.begin();
Serial.begin(9600);


}

void loop() {
analogRead(isik);
lcd.setCursor(0,0);
lcd.print("Isik siddeti:");
lcd.setCursor(0,1);
lcd.print(analogRead(isik));
delay(1000);
lcd.clear();
Serial.println(analogRead(isik));
}
