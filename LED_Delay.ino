#include <LiquidCrystal_I2C.h>
#define I2C_ADDR 0x27
#define LCD_COLUMNS 16
#define LCD_LINES 2
//const nyimpan di memory, kalau define ga akan disimpan kalau tidak dipakai
LiquidCrystal_I2C lcd(I2C_ADDR, LCD_COLUMNS, LCD_LINES);

//di ESP32 pastikan pin SDA dan SCL harus ngecek pinoutnya yang sesuai

void setup() {
  
    // Init
  lcd.init();
  lcd.backlight();

  // Print something
  lcd.setCursor(0, 0);
  lcd.print("EDSPERT IOT");
  lcd.setCursor(0, 1);
  lcd.print("Hello World!");
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(10); // this speeds up the simulation
}
