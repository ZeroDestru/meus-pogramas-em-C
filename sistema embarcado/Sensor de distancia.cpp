int Trigger = 6;
int Echo = 7;
int LED = 2;

int distancia = 0;
int tempo = 0;

void setup(){
  pinMode(Trigger, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop(){
  digitalWrite(Trigger, 0);
  delayMicroseconds(2);
  digitalWrite(Trigger, 1);
  delayMicroseconds(10);

  tempo = pulseIn(Echo,1);

  distancia = int(tempo*0.017);

  if(distancia > 90){
    digitalWrite(LED, 1);
  }
  else
  {
    digitalWrite(LED, 0);
  }
  
}