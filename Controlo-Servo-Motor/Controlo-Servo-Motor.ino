/*
Controlo de Servo Motor conectado com o pino de sinal no pino digital 9 do Arduino.
Permite Variar a posição do Servo Motor entre (0 a 180) e (180 a 0)
*/

#include <Servo.h>

Servo myservo;

int pos = 0; 

void setup() {
myservo.attach(9); 

}

void loop() {

for (pos = 0; pos <= 180; pos += 1) {
    myservo.write(pos);
    delay(200);
}
delay(10000);

for (pos = 180; pos >= 0; pos -= 1) {
  myservo.write(pos);
  delay(200);
  }
delay(10000);
}
