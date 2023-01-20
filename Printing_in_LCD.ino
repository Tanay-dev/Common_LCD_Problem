#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
void setup() 
{
  lcd.init();
  lcd.clear();
}
void loop() 
{
  lcd.setBacklight(HIGH);
  lcd.setCursor(3,0);
  lcd.print("Hello World");
  lcd.setCursor(4,1);
  lcd.print("It's TanayDev");
}
