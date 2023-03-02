#include <LiquidCrystal.h>

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

#define hitPin 11
#define buttonPin 12
// #define buzzer_led 12
// int hitState = 0;  // variable for reading the pushbutton status
int c = 0;
// int prestate = 0;


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16, 2);
  pinMode(hitPin, INPUT);
  pinMode(buttonPin, INPUT);
  // pinMode(buzzer_led, OUTPUT);
  // Serial.begin(9600);
  lcd.clear();
}
int gameState = 0;

void loop() {
  // hitState = digitalRead(hitPin);
  if (digitalRead(hitPin) == HIGH) {
    c++;
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Game running..");
    lcd.setCursor(0, 1);
    lcd.print("Error: ");
    lcd.setCursor(7, 1);
    lcd.print(c);
    delay(1000);
  }
  if (digitalRead(buttonPin) == HIGH) {
    lcd.clear();
    c = 0;
    lcd.setCursor(0, 0);
    lcd.print("Game starts in..");
    delay(3000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print(".. 3 ..");
    delay(1000);
    lcd.setCursor(0, 0);
    lcd.print(".. 2 ..");
    delay(1000);
    lcd.setCursor(0, 0);
    lcd.print(".. 1 ..");
    delay(1000);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Game running..");
    lcd.setCursor(0, 1);
    lcd.print("Error: ");
    lcd.setCursor(7, 1);
    lcd.print(c);
  }
}