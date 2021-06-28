const int E1 = 4;//mapear pinos
const int E2 = 5;
const int E3 = 6;
const int E4 = 7;

void setup(){
  pinMode(E1, OUTPUT);
  pinMode(E2, OUTPUT);
  pinMode(E3, OUTPUT);
  pinMode(E4, OUTPUT);
}

void loop(){
  digitalWrite(E1, 0);
  digitalWrite(E2, 0);
  digitalWrite(E3, 0);
  digitalWrite(E4, 0);
  delay(1000);

  digitalWrite(E1, 1);
  digitalWrite(E2, 0);
  digitalWrite(E3, 0);
  digitalWrite(E4, 0);
  delay(1000);

  digitalWrite(E1, 0);
  digitalWrite(E2, 1);
  digitalWrite(E3, 0);
  digitalWrite(E4, 0);
  delay(1000);

  digitalWrite(E1, 1);
  digitalWrite(E2, 1);
  digitalWrite(E3, 0);
  digitalWrite(E4, 0);
  delay(1000);

  digitalWrite(E1, 0);
  digitalWrite(E2, 0);
  digitalWrite(E3, 1);
  digitalWrite(E4, 0);
  delay(1000);

  digitalWrite(E1, 1);
  digitalWrite(E2, 0);
  digitalWrite(E3, 1);
  digitalWrite(E4, 0);
  delay(1000);

  digitalWrite(E1, 0);
  digitalWrite(E2, 1);
  digitalWrite(E3, 1);
  digitalWrite(E4, 0);
  delay(1000);

  digitalWrite(E1, 1);
  digitalWrite(E2, 1);
  digitalWrite(E3, 1);
  digitalWrite(E4, 0);
  delay(1000);

  digitalWrite(E1, 0);
  digitalWrite(E2, 0);
  digitalWrite(E3, 0);
  digitalWrite(E4, 1);
  delay(1000);

  digitalWrite(E1, 1);
  digitalWrite(E2, 0);
  digitalWrite(E3, 0);
  digitalWrite(E4, 1);
  delay(1000);
}