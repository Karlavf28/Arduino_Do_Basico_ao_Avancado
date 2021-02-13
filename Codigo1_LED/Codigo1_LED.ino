//Criado por: Karla Azambuja
// data:06/06/2015

int led =10;

void setup() {

pinMode(led,OUTPUT);

}

void loop() {

//piscar o led

digitalWrite(led,HIGH);
delay(100); 
digitalWrite(led,LOW);
delay(100);


}
