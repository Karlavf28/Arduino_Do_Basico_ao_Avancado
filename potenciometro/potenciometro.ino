#define POT A1
#define LED 10

int valorPot = 0; 

void setup() {

pinMode(POT, INPUT);
pinMode(LED, OUTPUT);
Serial.begin(9600);

}

void loop() {

valorPot = analogRead(POT);
Serial.println(valorPot);


digitalWrite(LED, HIGH);
delay(valorPot);
digitalWrite(LED, LOW);
delay(valorPot);

}
