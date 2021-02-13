//Acendendo um LED com botão

#define ledpin 10  // define o nome ledpin para o número 10
#define buttonpin 2

void setup() {

pinMode(ledpin, OUTPUT); // pino 10 como saída
pinMode(buttonpin, INPUT); //pino 2 como entrada

}

void loop() {

//Cria uma variável status que irá receber o estado do pino button
 int state= digitalRead(buttonpin);
 
 delay(150);

 if (state == HIGH)
 {
    for (int x=0; x<10; x++) 
    {
      digitalWrite(ledpin, HIGH);
      delay(200);
      digitalWrite(ledpin, LOW);
      delay(200);
      
    }//end for
 
 }//end if

}//end loop
