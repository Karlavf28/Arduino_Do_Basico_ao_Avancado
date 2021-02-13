#include <Ultrasonic.h>

#define pino_trigger 4
#define pino_eco 5

Ultrasonic ultrasonic(pino_trigger, pino_eco);

void setup() {
Serial.begin(9600);
Serial.println("Lendo dados do sensor...");

}

void loop() {

float distancia;

long tempo = ultrasonic.timing();

distancia = ultrasonic.convert(tempo, Ultrasonic::CM);

Serial.print("Distancia em cm: ");
Serial.println(distancia);

delay(1000);

}
