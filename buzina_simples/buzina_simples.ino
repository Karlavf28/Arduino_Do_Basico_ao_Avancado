
int buzina =12;

void setup() {
pinMode(buzina,OUTPUT);
}

void loop() {

tone(buzina,2000);
delay(1000);
noTone(buzina);
delay(1000);

}
