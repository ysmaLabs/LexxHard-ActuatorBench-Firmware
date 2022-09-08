#include <Arduino.h>

const int hello = PA0;

void setup() {
  // put your setup code here, to run once:

  pinMode(hello, PWM);

}

void loop() {
  // put your main code here, to run repeatedly:

  analogWrite(hello, 100);

}
