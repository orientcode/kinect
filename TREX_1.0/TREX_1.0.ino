#include <Ultrasonic.h>

#define TRIGGER_PIN_PULAR  6
#define ECHO_PIN_PULAR     7

Ultrasonic ultrasonicPular(TRIGGER_PIN_PULAR, ECHO_PIN_PULAR);

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  int distancePular = ultrasonicPular.read();
  
  if (distancePular < 100 && distancePular > 5) {
    Serial.println('p');
    digitalWrite(13, HIGH);
    delay(150);
    digitalWrite(13, LOW);
    delay(150);
    digitalWrite(13, HIGH);
    delay(150);
  }

  digitalWrite(13, LOW);
  delay(20);

}
