#include <LiquidCrystal.h>

LiquidCrystal lcd(23, 22, 21, 19, 18, 5);

void setup() {
  lcd.begin(16, 2);
  // you can now interact with the LCD, e.g.:
  // Print something
  lcd.setCursor(2, 0);
  lcd.print("EDSPERT IOT!");
  lcd.setCursor(2, 1);
  lcd.print("Hello World!");
}

void loop() {
  // put your main code here, to run repeatedly:
 // delay(10); // this speeds up the simulation
}
