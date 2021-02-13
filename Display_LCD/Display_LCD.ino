
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {

  lcd.begin(16, 2);

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("Bem-vindo a");
  lcd.setCursor(0,1);
  lcd.print("Aula de Robotica");
  delay(1000);
  lcd.clear();
  
  lcd.setCursor(0,0);
  lcd.print("Tudo bem ");
  lcd.setCursor(0,1);
  lcd.print("com voce?");
  delay(1000);
  lcd.clear();

}
