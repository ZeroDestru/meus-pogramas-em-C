void setup(){
  Serial.begin(9600);

  pinMode(2, OUTPUT);
  pinMode(A0, INPUT);
}

void loop(){
int  ldr = analogRead(A0);
  Serial.print("Valor LDR = ");
  Serial.println(ldr);

  if (ldr > 400){
    digitalWrite(2,1);
  }else{
    digitalWrite(2,0);
  } 
}