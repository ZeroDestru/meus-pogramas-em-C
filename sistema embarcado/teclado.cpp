#include <Keypad.h>

//teclado 4x4
const byte numLin = 4;
const byte numCol = 4;

char keymap[numLin][numCol] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};

//config de con. do teclado(arduino)

byte linPinos[numLin] = {11, 10, 9, 8};
byte colPinos[numCol] = {7, 6, 5, 4};

//criar teclado
Keypad teclado = Keypad(makeKeymap(keymap), linPinos, colPinos, numLin, numCol);
//cabo

char tecla;

void setup(){
  pinMode(2, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  tecla = teclado.getKey();
  if(tecla){
    if(tecla == '1'){
      digitalWrite(2, 1);
    }
    if(tecla == '*'){
      digitalWrite(2, 0);
    }
  }
}