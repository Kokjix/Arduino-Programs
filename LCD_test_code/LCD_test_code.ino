#include <Wire.h>                      
#include <LiquidCrystal_I2C.h>       

LiquidCrystal_I2C lcd(0x3F,20,4);     

void setup()

{

  lcd.init();                    

  // Print a message to the LCD.

  lcd.backlight();                

  lcd.setCursor(2,0);           

  lcd.print("Soner KES");



}

void loop()
{

}
