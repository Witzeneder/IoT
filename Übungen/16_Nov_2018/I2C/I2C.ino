#include <Wire.h>  
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);  // Set the LCD I2C address

void setup(){
 
  lcd.begin(16,2);
  lcd.init();

  // Turn on the backlight.
  lcd.backlight();

  lcd.setCursor(4, 0);
  lcd.print("Valentin");
  lcd.setCursor(5, 1);      
  lcd.print("Jakob");
}

void loop(){
}
