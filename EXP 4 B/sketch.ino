#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 6, 7, 8);


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  lcd.print("Hello world!");
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(0, 1);
  lcd.print("Sudhamsh");
}
