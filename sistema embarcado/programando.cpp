#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,10,5,4,3,2);

int backLight = 13;

void setup(){

  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  Serial.begin(9600);

  pinMode(A0, INPUT);

  pinMode(backLight, OUTPUT);
  digitalWrite(backLight, 1);

  lcd.begin(16,2);
  lcd.clear();
  
  Serial.begin(9600);
  
}

void loop(){
int  ldr = analogRead(A0);
  while(ldr > 400){
    lcd.setCursor(4,0);
    lcd.print("Estamos");
    lcd.setCursor(3,1);
    lcd.print("atendendo");
    ldr = analogRead(A0);}
  while(ldr < 400){
    lcd.setCursor(2,0);
    lcd.print("a porta foi");
    lcd.setCursor(4,1);
    lcd.print("travada");
    ldr = analogRead(A0);

    int sen1, sen2, sen3, sen4;
    sen1 = digitalRead(9);
    sen2 = digitalRead(8);
    sen3 = digitalRead(7);
    sen4 = digitalRead(6);
    if(sen1 == 0 && sen2 == 1 && sen3 == 0 && sen4 == 1){
      lcd.setCursor(7,0);
      lcd.print("ok");
    }}
  lcd.clear();
  
}

