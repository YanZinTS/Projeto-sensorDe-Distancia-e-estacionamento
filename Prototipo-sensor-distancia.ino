/******************************************************************************/
/*          Projeto: Protótipo Sensor para Estacionamento em Garagem          */
/******************************************************************************/
//Configurações de Portas do Arduino

//Sensor
const int TRIG = 52;
const int ECHO = 53;

//Demais componentes
const int ledGreen = 31;
const int ledGreen1 = 30;
const int ledAmarelo = 33;
const int ledAmarelo1 = 32;
const int ledAmarelo2 = 35;
const int ledRed = 34;
const int ledRed1 = 37;
const int ledRed2 = 36;
const int ledRed3 = 39;

void setup() {
  Serial.begin(9600);
  
  // Configurações do Sensor
  pinMode(TRIG,OUTPUT);
  pinMode(ECHO,INPUT);
  
  // Configurações do LED
  pinMode(ledGreen, OUTPUT);
  pinMode(ledGreen1, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledAmarelo1, OUTPUT);
  pinMode(ledAmarelo2, OUTPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledRed1, OUTPUT);
  pinMode(ledRed2, OUTPUT);
  pinMode(ledRed3, OUTPUT);

  digitalWrite(TRIG, LOW);
}

void loop() {
  int distancia = sensor_morcego(TRIG,ECHO);

  Serial.print("Distância: ");
  Serial.print(distancia);
  Serial.println("cm");

  if(distancia > 50){
    digitalWrite(ledGreen, LOW);
    digitalWrite(ledGreen1, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledAmarelo1, LOW);
    digitalWrite(ledAmarelo2, LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledRed1, LOW);
    digitalWrite(ledRed2, LOW);
    digitalWrite(ledRed3, LOW);
  }
  if(distancia <= 50){
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledGreen1, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledAmarelo1, LOW);
    digitalWrite(ledAmarelo2, LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledRed1, LOW);
    digitalWrite(ledRed2, LOW);
    digitalWrite(ledRed3, LOW);
  }
  if(distancia < 45){
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledGreen1, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledAmarelo1, LOW);
    digitalWrite(ledAmarelo2, LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledRed1, LOW);
    digitalWrite(ledRed2, LOW);
    digitalWrite(ledRed3, LOW);
  }
  if(distancia < 40){
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledGreen1, HIGH);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledAmarelo1, LOW);
    digitalWrite(ledAmarelo2, LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledRed1, LOW);
    digitalWrite(ledRed2, LOW);
    digitalWrite(ledRed3, LOW);
  }
  if(distancia < 35){
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledGreen1, HIGH);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledAmarelo1, HIGH);
    digitalWrite(ledAmarelo2, LOW);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledRed1, LOW);
    digitalWrite(ledRed2, LOW);
    digitalWrite(ledRed3, LOW);
  }
  if(distancia < 30){
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledGreen1, HIGH);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledAmarelo1, HIGH);
    digitalWrite(ledAmarelo2, HIGH);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledRed1, LOW);
    digitalWrite(ledRed2, LOW);
    digitalWrite(ledRed3, LOW);
  }
  if(distancia < 25){
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledGreen1, HIGH);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledAmarelo1, HIGH);
    digitalWrite(ledAmarelo2, HIGH);
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledRed1, LOW);
    digitalWrite(ledRed2, LOW);
    digitalWrite(ledRed3, LOW);
  }
  if(distancia < 20){
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledGreen1, HIGH);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledAmarelo1, HIGH);
    digitalWrite(ledAmarelo2, HIGH);
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledRed1, HIGH);
    digitalWrite(ledRed2, LOW);
    digitalWrite(ledRed3, LOW);
  }
  if(distancia < 15){
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledGreen1, HIGH);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledAmarelo1, HIGH);
    digitalWrite(ledAmarelo2, HIGH);
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledRed1, HIGH);
    digitalWrite(ledRed2, HIGH);
    digitalWrite(ledRed3, LOW);
  }
  if(distancia < 10){
    digitalWrite(ledGreen, HIGH);
    digitalWrite(ledGreen1, HIGH);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledAmarelo1, HIGH);
    digitalWrite(ledAmarelo2, HIGH);
    digitalWrite(ledRed, HIGH);
    digitalWrite(ledRed1, HIGH);
    digitalWrite(ledRed2, HIGH);
    digitalWrite(ledRed3, HIGH);
  }
  if(distancia < 5){
  digitalWrite(ledGreen, HIGH);
  digitalWrite(ledGreen, LOW);
  delay(200);
  digitalWrite(ledGreen1, HIGH);
  digitalWrite(ledGreen1, LOW);
  delay(200);
  digitalWrite(ledAmarelo, HIGH);
  digitalWrite(ledAmarelo, LOW);
  delay(200);
  digitalWrite(ledAmarelo1, HIGH);
  digitalWrite(ledAmarelo1, LOW);
  delay(200);
  digitalWrite(ledAmarelo2, HIGH);
  digitalWrite(ledAmarelo2, LOW);
  delay(200);
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledRed, LOW);
  delay(200);
  digitalWrite(ledRed1, HIGH);
  digitalWrite(ledRed1, LOW);
  delay(200);
  digitalWrite(ledRed2, HIGH);
  digitalWrite(ledRed2, LOW);
  delay(200);
  digitalWrite(ledRed3, HIGH);
  digitalWrite(ledRed3, LOW);
  }

  delay(100);
}

int sensor_morcego(int pinotrig,int pinoecho){
  digitalWrite(pinotrig,LOW);
  delayMicroseconds(2);
  digitalWrite(pinotrig,HIGH);
  delayMicroseconds(10);
  digitalWrite(pinotrig,LOW);

  return pulseIn(pinoecho,HIGH)/58;
}