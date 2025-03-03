#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 6, 7, 8);
int randomnumber;

void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  randomSeed(7);
  pinMode(4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.setCursor(1, 0);
  lcd.print("Dice roll done");

  int DICEROLL = digitalRead(4);

  if(DICEROLL == 1) randomnumber = random(1, 7);

  lcd.setCursor(6, 1);
  lcd.print(randomnumber);
}