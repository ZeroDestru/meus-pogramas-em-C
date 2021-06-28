#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,10,5,4,3,2);
int potenciometroPino0 = 1; 
int valorDoPotenciometro = 0;
int SensorTempPino=0;
int backLight = 13;

void setup(){

  pinMode(2, INPUT);//fotorresistor
  pinMode(1, INPUT);//sensor de umidade -- 50%/70%
  pinMode(0,INPUT);//sensor de temperatura -- até 20°C noite / até 25°C dia

  pinMode(backLight, OUTPUT);//lcd
  digitalWrite(backLight, 1);

  pinMode(9, OUTPUT);//motor

  lcd.begin(16,2);
  lcd.clear();

  Serial.begin(9600);
}
void loop(){

  valorDoPotenciometro = analogRead(potenciometroPino0);
  valorDoPotenciometro = map(valorDoPotenciometro, 0, 1023, 0, 179);

  int SensorTemperaturaTensao = analogRead(SensorTempPino);

  float convTensao=SensorTemperaturaTensao*5;
  convTensao /= 1024;

  float TemperaturaCelsius=(convTensao-0.5)*100; 

}