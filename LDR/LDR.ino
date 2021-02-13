#define SENSOR A2
#define LED 10

int valorSensor =0;

void setup() {
 pinMode(SENSOR, INPUT);
 pinMode(LED, OUTPUT);
 Serial.begin(9600);
 
}

void loop() {
  valorSensor = analogRead(SENSOR);
  Serial.println(valorSensor);

 if(valorSensor <150)
 {
    digitalWrite(LED, HIGH);
    
 }
  
 else
 {
  digitalWrite(LED, LOW);
 }
  
}
