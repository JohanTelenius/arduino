
// ================================================
// Setup of an Luxorparts 4x20 LCD display.
// Driver is compatible with HD44780.
// This LCD is not serial. Part id: QC2004A.
// Bought at www.kjell.com. Article nr: 90216.
// 
// A 10K potentiometer is connected to pin 3 (V0)
// to change the background light of the LCD.
// ================================================

// Include the library code.
#include <LiquidCrystal.h>

// Initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to.
const int rs = 10, en = 9, d4 = 5, d5 = 6, d6 = 7, d7 = 8;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // Set up the LCD's number of columns and rows.
  lcd.begin(20, 4);
  lcd.clear();
  
  // Print a message to the LCD.
  lcd.print("Hello world");  
}

void loop() {
}
