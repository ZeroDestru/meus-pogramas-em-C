
#include <Keypad.h>

const byte numLin = 4;
const byte numCol = 4;

char keymap[numLin][numCol] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'},
};


byte linPinos[numLin] = {11, 10, 9, 8};
byte colPinos[numCol] = {7, 6, 5, 4};

Keypad teclado = Keypad(makeKeymap(keymap), linPinos, colPinos, numLin, numCol);


String temp,apa,sen;
char tecla;
  
void setup(){
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  
  tecla = teclado.getKey();

  if(tecla == 'A'){
    digitalWrite(3, 1);
    delay(200);
    digitalWrite(3, 0);
    delay(200);
    
    while(true){
        tecla = teclado.getKey();
            if(tecla){
            	digitalWrite(2, 1);
      			  delay(100);
     			    digitalWrite(2, 0);
      			  delay(100);
              temp += tecla;
            }
            if (temp.length() == 4){
              break;
            }}
      if(temp == sen){
        digitalWrite(13, 1);
        delay(2000);
        digitalWrite(13, 0);
        delay(2000);
  	  }else{
      	digitalWrite(3, 1);
      	delay(450);
      	digitalWrite(3, 0);
      	delay(450);}
    temp = apa;}
	
	else if(tecla == 'B'){
      digitalWrite(13, 1);
      delay(200);
      digitalWrite(13, 0);
      delay(200);
      
    	while (true) {
        	tecla = teclado.getKey();
        	if(tecla) {
            	digitalWrite(2, 1);
      			delay(100);
     			digitalWrite(2, 0);
      			delay(100);
				sen += tecla;}
        	if (sen.length() == 4) {
            break;}}}}