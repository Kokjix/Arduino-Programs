
#include <LiquidCrystal_I2C.h>


#include <Wire.h>


LiquidCrystal_I2C lcd(0x3F, 20, 4);

void setup() {
  Serial.begin(9600);
  lcd.begin();
   lcd.setCursor(1,0);
  lcd.display("lcd");

}

void loop() {


}
