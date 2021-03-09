#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);

void setup() {
lcd.begin();

}

void loop() {
  int saat,dak,san,sal;
 for(;;){

    sal++;
    if(sal==10000){
    sal=-10000;
    san++;
    if(san==60){
    san=0;
    dak++;
    if(dak==60){
      dak=0;
      saat++;
      if(saat==24){
        saat=0;
      }
    }
    } 
    }
  
  
   lcd.setCursor(0,0);
   lcd.print("Clock:");
   lcd.setCursor(0,1);
   lcd.print(saat); 
  
   lcd.clear();
    
}

}
