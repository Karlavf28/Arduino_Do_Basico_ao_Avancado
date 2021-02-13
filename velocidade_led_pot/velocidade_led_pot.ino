#define POT A1
#define LED 10

int valorPot = 0; 
int brilho =0;

void setup() {

pinMode(POT, INPUT);
pinMode(LED, OUTPUT);
Serial.begin(9600);

}

void loop() {

valorPot = analogRead(POT);
Serial.println(valorPot);
brilho = valorPot/4;
analogWrite(LED, brilho);
}
