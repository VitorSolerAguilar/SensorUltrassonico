float distancia, duracao;
float velocidade = 0.0172316;
int pinoTrig = 10;
int pinoEcho = 9;

void setup()
{
  pinMode(pinoTrig, OUTPUT);
  pinMode(pinoEcho, INPUT);
  Serial.begin(9600);
}

void loop()
{
  //Inicio instruçao obrigatória sensor
  digitalWrite(pinoTrig, 0);
  delayMicroseconds(5);
  
  digitalWrite(pinoTrig, 1);
  delayMicroseconds(10);
  digitalWrite(pinoTrig, 0);
  
  duracao = pulseIn(pinoEcho, 1);
  distancia = duracao * velocidade;
  //Fim instrução obrigatória sensor
    
  Serial.print("Centimetros ");
  Serial.println(distancia);
  delay(2000);
}
