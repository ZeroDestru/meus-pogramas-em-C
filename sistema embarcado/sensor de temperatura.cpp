int SensorTempPino=0; // A0
void setup()
{
  pinMode(2,OUTPUT); // Led
  pinMode(0,INPUT); // Temperatura
  
}  
void loop()
{
  //leitura do sensor (Tensão)
  int SensorTemperaturaTensao = analogRead(SensorTempPino);

  // Converter a tensao lida
  float convTensao=SensorTemperaturaTensao*5;
  convTensao /= 1024;

  // Converte a tensao lida em Graus Celsius
  float TemperaturaCelsius=(convTensao-0.5)*100; 

  if (TemperaturaCelsius>20){
      digitalWrite(2,1);
  } else{
     digitalWrite(2,0);