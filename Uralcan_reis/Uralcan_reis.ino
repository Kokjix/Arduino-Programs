#include <Wire.h>

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,6,4,7,1,0,5,2,3,POSITIVE);

void setup() {
  lcd.begin(20,4);
  lcd.setCursor(2,0);
  
  

}

void loop() {
  lcd.print("Urral");

}
