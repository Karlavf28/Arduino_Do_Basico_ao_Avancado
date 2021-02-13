
//LEDs Semáforo p/carros
int vermelhocarro = 11;
int amarelocarro = 12;
int verdecarro = 13;

//LEDs Semáforo p/pedestres
int vermelhop = 6;
int verdep = 7;


void setup() {
  
//Configura todos as portas dos leds como saída 
pinMode(vermelhocarro,OUTPUT);
pinMode(verdecarro,OUTPUT);
pinMode(amarelocarro,OUTPUT);
pinMode(vermelhop,OUTPUT);
pinMode(verdep,OUTPUT);
}

void loop() {

//Lógica do semáforo

digitalWrite(verdecarro,HIGH);
digitalWrite(vermelhop,HIGH); 
delay(3000);
digitalWrite(verdecarro,LOW);
digitalWrite(amarelocarro,HIGH);
delay(1000);
digitalWrite(amarelocarro,LOW);
digitalWrite(vermelhocarro,HIGH);
digitalWrite(vermelhop,LOW);
digitalWrite(verdep,HIGH);
delay(3000);
digitalWrite(vermelhocarro,LOW);
digitalWrite(verdep,LOW);

}
