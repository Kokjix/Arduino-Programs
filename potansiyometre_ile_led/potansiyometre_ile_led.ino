#include <LiquidCrystal_I2C.h>
#include <Wire.h>

LiquidCrystal_I2C lcd(0x3F, 20, 4);

void setup() {
  // put your setup code here, to run once:
pinMode(9,OUTPUT);
pinMode(A0,INPUT);
Serial.begin(9600);

lcd.init();
lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
int pot = map(analogRead(A0), 0, 1023, 0, 255);
analogWrite(9, pot);

Serial.print("LED:");
Serial.println(pot);
//delay(100);

lcd.setCursor(0,0);
lcd.print("LED Brightness:");
lcd.setCursor (0,1);
float volt = pot / 51.0;
lcd.print(volt);
//delay(1000);
//lcd.clear();

}
