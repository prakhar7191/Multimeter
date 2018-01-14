#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
  byte a20[8]={
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
    B10000,
  };
  byte a40[8]={
    B11000,
    B11000,
    B11000,
    B11000,
    B11000,
    B11000,
    B11000,
  };
  byte a60[8]{
    B11100,
    B11100,
    B11100,
    B11100,
    B11100,
    B11100,
    B11100,
  };
  byte a80[8]{
    B11110,
    B11110,
    B11110,
    B11110,
    B11110,
    B11110,
    B11110,
  };
  byte a100[8]{
    B11111,
    B11111,
    B11111,
    B11111,
    B11111,
    B11111,
    B11111,
  };
void setup() {
  lcd.begin(16,2);
  lcd.print("Prakhar Srivastava");

  lcd.createChar(0,a20);
  lcd.createChar(1,a40);
  lcd.createChar(2,a60);
  lcd.createChar(3,a80);
  lcd.createChar(4,a100);
  }

void loop() {

  lcd.setCursor(0,1);
  
  for(int i=0;i<16;i++)
  {
    for(int j=0;j<5;j++)
    {
      lcd.setCursor(i,1);
      lcd.write(j);
      delay(100);
    }
  }
  lcd.setCursor(0,1);
  lcd.print("                ");
  delay(100);
  
}
