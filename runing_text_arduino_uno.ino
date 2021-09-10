#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init();
  lcd.backlight();
  lcd.begin (16,2);
}
void loop()
{
  lcd.setCursor (0,0);
  lcd.print("****WELCOME ITNY****");
  //delay(1000);
  lcd.setCursor (0,1);
  lcd.print("****HMTE ITNY****");
  //delay(1000);
  for(int i=0; i<16; i++)
  {
    lcd.scrollDisplayLeft();
    delay(200);
  }
}

