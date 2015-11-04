#include <LiquidCrystal.h>  //include the header file for LCD 
LiquidCrystal lcd (8, 9, 4, 5, 6, 7);
const int Digitalpin = 12;
int pinstate;

void setup()
{
  lcd.begin(16, 2);
  lcd.clear();
  lcd.setCursor(0, 0); 
  pinMode (Digitalpin, INPUT); 
}

void loop()
{
  pinstate = digitalRead(Digitalpin);
  if(pinstate == HIGH)
  {
    lcd.print("Block!  ");
  }
  else
  {
    lcd.print("Unblock.");
  } 
    lcd.setCursor(0, 0);
}

