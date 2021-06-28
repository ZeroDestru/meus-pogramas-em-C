void setup()
{
  pinMode(9, OUTPUT);//A
  pinMode(8, OUTPUT);//B
  pinMode(2, OUTPUT);//C
  pinMode(3, OUTPUT);//DP
  pinMode(6, OUTPUT);//D
  pinMode(5, OUTPUT);//E
  pinMode(4, OUTPUT);//F
  pinMode(7, OUTPUT);//G
}

void loop()
{
  digitalWrite(9, 1);
  digitalWrite(8, 1);
  digitalWrite(2, 1);
  digitalWrite(3, 1);//DP
  digitalWrite(6, 1);
  digitalWrite(5, 1);
  digitalWrite(4, 1);
  digitalWrite(7, 1);
  delay(100);
  
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);//DP
  digitalWrite(6, 0);
  digitalWrite(5, 0);
  digitalWrite(4, 0);
  digitalWrite(7, 0);
  delay(300);
  
  digitalWrite(9, 1);
  digitalWrite(8, 1);
  digitalWrite(2, 1);
  digitalWrite(6, 1);
  digitalWrite(5, 1);
  digitalWrite(4, 1);
  delay(500);
  
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  digitalWrite(2, 0);
  digitalWrite(6, 0);
  digitalWrite(5, 0);
  digitalWrite(4, 0);
  delay(500);

  digitalWrite(8, 1);
  digitalWrite(2, 1);
  delay(500);
  
  digitalWrite(8, 0);
  digitalWrite(2, 0);
  delay(500);

  digitalWrite(9, 1);
  digitalWrite(8, 1);
  digitalWrite(6, 1);
  digitalWrite(5, 1);
  digitalWrite(7, 1);
  delay(500);
  
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  digitalWrite(6, 0);
  digitalWrite(5, 0);
  digitalWrite(7, 0);
  delay(500);

  digitalWrite(9, 1);
  digitalWrite(8, 1);
  digitalWrite(2, 1);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  delay(500);
  
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  digitalWrite(2, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  delay(500);

  digitalWrite(8, 1);
  digitalWrite(2, 1);
  digitalWrite(4, 1);
  digitalWrite(7, 1);
  delay(500);
  
  digitalWrite(8, 0);
  digitalWrite(2, 0);
  digitalWrite(4, 0);
  digitalWrite(7, 0);
  delay(500);

  digitalWrite(9, 1);
  digitalWrite(2, 1);
  digitalWrite(6, 1);
  digitalWrite(4, 1);
  digitalWrite(7, 1);
  delay(500);
  
  digitalWrite(9, 0);
  digitalWrite(2, 0);
  digitalWrite(6, 0);
  digitalWrite(4, 0);
  digitalWrite(7, 0);
  delay(500);

  digitalWrite(9, 1);
  digitalWrite(2, 1);
  digitalWrite(6, 1);
  digitalWrite(5, 1);
  digitalWrite(4, 1);
  digitalWrite(7, 1);
  delay(500);
  
  digitalWrite(9, 0);
  digitalWrite(2, 0);
  digitalWrite(6, 0);
  digitalWrite(5, 0);
  digitalWrite(4, 0);
  digitalWrite(7, 0);
  delay(500);

  digitalWrite(9, 1);
  digitalWrite(8, 1);
  digitalWrite(2, 1);
  delay(500);
  
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  digitalWrite(2, 0);
  delay(500);

  digitalWrite(9, 1);
  digitalWrite(8, 1);
  digitalWrite(2, 1);
  digitalWrite(6, 1);
  digitalWrite(5, 1);
  digitalWrite(4, 1);
  digitalWrite(7, 1);
  delay(500);
  
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  digitalWrite(2, 0);
  digitalWrite(6, 0);
  digitalWrite(5, 0);
  digitalWrite(4, 0);
  digitalWrite(7, 0);
  delay(500);

  digitalWrite(9, 1);
  digitalWrite(8, 1);
  digitalWrite(2, 1);
  digitalWrite(6, 1);
  digitalWrite(4, 1);
  digitalWrite(7, 1);
  delay(500);
  
  digitalWrite(9, 0);
  digitalWrite(8, 0);
  digitalWrite(2, 0);
  digitalWrite(6, 0);
  digitalWrite(4, 0);
  digitalWrite(7, 0);
  delay(500);

  digitalWrite(9, 1);
  digitalWrite(8, 1);
  digitalWrite(2, 1);
  digitalWrite(5, 1);
  digitalWrite(4, 1);
  digitalWrite(7, 1);
  delay(500);

  digitalWrite(9, 0);
  digitalWrite(8, 0);
  digitalWrite(2, 0);
  digitalWrite(5, 0);
  digitalWrite(4, 0);
  digitalWrite(7, 0);
  delay(500);

  digitalWrite(2, 1);
  digitalWrite(6, 1);
  digitalWrite(5, 1);
  digitalWrite(4, 1);
  digitalWrite(7, 1);
  delay(500);

  digitalWrite(2, 0);
  digitalWrite(6, 0);
  digitalWrite(5, 0);
  digitalWrite(4, 0);
  digitalWrite(7, 0);
  delay(500);

  digitalWrite(9, 1);
  digitalWrite(6, 1);
  digitalWrite(5, 1);
  digitalWrite(4, 1);
  delay(500);

  digitalWrite(9, 0);
  digitalWrite(6, 0);
  digitalWrite(5, 0);
  digitalWrite(4, 0);
  delay(500);

  digitalWrite(8, 1);
  digitalWrite(2, 1);
  digitalWrite(6, 1);
  digitalWrite(5, 1);
  digitalWrite(7, 1);
  delay(500);

  digitalWrite(8, 0);
  digitalWrite(2, 0);
  digitalWrite(6, 0);
  digitalWrite(5, 0);
  digitalWrite(7, 0);
  delay(500);

  digitalWrite(9, 1);
  digitalWrite(6, 1);
  digitalWrite(5, 1);
  digitalWrite(4, 1);
  digitalWrite(7, 1);
  delay(500);

  digitalWrite(9, 0);
  digitalWrite(6, 0);
  digitalWrite(5, 0);
  digitalWrite(4, 0);
  digitalWrite(7, 0);
  delay(500);

  digitalWrite(9, 1);
  digitalWrite(5, 1);
  digitalWrite(4, 1);
  digitalWrite(7, 1);
  delay(500);
  
  digitalWrite(9, 0);
  digitalWrite(5, 0);
  digitalWrite(4, 0);
  digitalWrite(7, 0);
  delay(500);

  for (int i = 0; i < 3; i++)
  {
      digitalWrite(3, 1);
      delay(500);
      digitalWrite(3, 0
  );
      delay(500);
  }
}