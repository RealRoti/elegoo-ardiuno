#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

String messaggi[] = {
  "Hello PIEROO",
  "Ciao GERRY",
  "love gerry",
  "By Roti",
};

void setup(){
  lcd.begin(16, 2);
}

void loop(){
  for(int i = 0; i < 5; i++){
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Tutorial Arduino");
    lcd.setCursor(0, 1);
    lcd.print(messaggi[i]);
    delay(1000);
  }
}
