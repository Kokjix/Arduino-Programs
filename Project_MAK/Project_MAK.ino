#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
  Serial.begin(9600);
  lcd.begin();
  

}

void loop() {
 lcd.setCursor(0,0);
 lcd.print("Y:1  G:3  B:9");
 lcd.setCursor(0,1);
 lcd.print("P:9    O:8");
  delay(1000);
  lcd.clear();
}
