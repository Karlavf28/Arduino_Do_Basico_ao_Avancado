int vermelho = 8;
int amarelo = 9;
int verde = 10;
int azul = 11;
int branco =12;


void setup() {
pinMode(vermelho,OUTPUT);
pinMode(amarelo,OUTPUT);
pinMode(verde,OUTPUT);
pinMode(azul,OUTPUT);
pinMode(branco,OUTPUT);
}

void loop() {

digitalWrite(vermelho,HIGH);
delay(100);
digitalWrite(vermelho,LOW);
digitalWrite(amarelo,HIGH);
delay(100);
digitalWrite(amarelo,LOW);
digitalWrite(verde,HIGH);
delay(100);
digitalWrite(verde,LOW);
digitalWrite(azul,HIGH);
delay(100);
digitalWrite(azul,LOW);
digitalWrite(branco,HIGH);
delay(100);
digitalWrite(branco,LOW);

}
