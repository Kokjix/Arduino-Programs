#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <math.h>
LiquidCrystal_I2C lcd (0x27,16,2);


void setup() {
lcd.begin();
Serial.begin(9600);
pinMode(A0,INPUT);
}
float gerilim;
float sicaklik;

void loop() {

lcd.setCursor(0,0);
lcd.print("Sicaklik:");
gerilim = analogRead(A0);
gerilim = (gerilim /1023)*5000;
sicaklik = gerilim/10.0;
lcd.setCursor (0,1);
lcd.print(sicaklik);
delay(1000);
lcd.clear();
Serial.println(sicaklik);

}
