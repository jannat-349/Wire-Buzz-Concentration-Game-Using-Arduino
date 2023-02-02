#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
}
int c = 0;
void loop() {

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print(c);
  c = c + 1;
  delay(1000);
  if (c == 10)
    c = 0;
  // put your main code here, to run repeatedly:
  // lcd.clear();
  // lcd.setCursor(0, 0);
  // lcd.print("Welcome To");
  // lcd.setCursor(0, 1);
  // lcd.print("JU Robotics");
  // delay(5000);
  // lcd.clear();
  // lcd.setCursor(3, 0);
  // lcd.print("Thanks");
  // lcd.setCursor(2, 1);
  // lcd.print("Sajjad Bhai");
  // delay(5000);
  // lcd.setCursor(0, 0);
  // lcd.print("Hello Onu");
  // delay(1000);
  // lcd.clear();
  // lcd.setCursor(0, 0);
  // lcd.print("Hello Habiba");
  // delay(1000);
  // lcd.clear();
  // lcd.setCursor(0, 0);
  // lcd.print("Hello Ismail");
  // delay(1000);
  // lcd.clear();
}
