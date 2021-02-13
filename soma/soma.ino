
double soma = 0;

void setup() {

Serial.begin(9600);

}

void loop() {

Serial.println(soma);
delay(500);

soma = soma + 0.5; 

}
