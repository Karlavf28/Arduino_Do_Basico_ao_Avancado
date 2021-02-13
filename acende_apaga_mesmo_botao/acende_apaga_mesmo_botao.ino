//Acendendo um LED com botão

#define ledpin 10  // define o nome ledpin para o número 10
#define buttonpin 2

int led_status = 0; // Variável que guarda o status anterior do led  0 - Apagado e 1 - Ligado


void setup() {

pinMode(ledpin, OUTPUT); // pino 10 como saída
pinMode(buttonpin, INPUT); //pino 2 como entrada

}

void loop() {

//Cria uma variável status que irá receber o estado do pino button
 int state= digitalRead(buttonpin);

 if (state == HIGH && led_status ==0)
 {
  digitalWrite(ledpin,HIGH);
  led_status = 1; // led está ligado
  delay(300);
 }

 else if(state == HIGH && led_status ==1)
 {
  digitalWrite(ledpin,LOW);
  led_status = 0; // led está desligado
  delay(300);
 }

}
