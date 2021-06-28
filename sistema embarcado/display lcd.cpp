#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,10,5,4,3,2);

int backLight = 13;

void setup(){
  pinMode(backLight, OUTPUT);
  digitalWrite(backLight, 1);

  lcd.begin(16,2);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("teste");
  lcd.setCursor(0,1);
  lcd.print("Esta OK");
  
  Serial.begin(9600);
}
void loop(){
  delay(1000);
  lcd.noDisplay();
  delay(500);
  lcd.display();
  delay(50);
}