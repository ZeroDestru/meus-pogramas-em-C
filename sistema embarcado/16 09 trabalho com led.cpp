/*void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}
/*
void loop()
{
  digitalWrite(13, HIGH);
  delay(350);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(11, HIGH);
  delay(650);
  digitalWrite(13, LOW);
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  delay(500);
}

void loop()
{
  digitalWrite(13, HIGH);
  delay(350);
  digitalWrite(13, LOW);
  delay(350);
  digitalWrite(12, HIGH);
  delay(500);
  digitalWrite(12, LOW);
  delay(500);
  digitalWrite(11, HIGH);
  delay(650);
  digitalWrite(11, LOW);
  delay(650);
}*/
/*void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop(){
  analogWrite(11,255);//red
  analogWrite(10,0);//blue
  analogWrite(9,0);//green
  delay(500);
  analogWrite(11,0);
  analogWrite(10,255);
  analogWrite(9,0);
  delay(500);
  analogWrite(11,0);
  analogWrite(10,0);
  analogWrite(9,255);
  delay(500);
  analogWrite(11,255);
  analogWrite(10,255);
  analogWrite(9,0);
  delay(500);
  analogWrite(11,255);
  analogWrite(10,0);
  analogWrite(9,255);
  delay(500);
  analogWrite(11,0);
  analogWrite(10,255);
  analogWrite(9,255);
  delay(500);
}

void loop(){
  int i=1,contR,contB,contG;
  analogWrite(11,contR);//red
  analogWrite(10,contB);//blue
  analogWrite(9,contG);//green
  delay(500);
  
  if (i%2 == 0){
    contR+=25;
  }
  else if (i%2==1){
  	contB+=25;
  }
  contG++;
  i++;
}*/
/*int botao=0;

void setup(){
    pinMode(13, OUTPUT);
    pinMode(2, INPUT);
}

void loop(){
    botao=digitalRead(2);
    if(botao == HIGH){
        digitalWrite(13,HIGH);
    }
    else{
        digitalWrite(13,LOW);
    }
    delay(100);
}*/