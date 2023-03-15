#include <Servo.h>

Servo Servo1;

int pot_pin = 7;  // Analog pin to connect potentiometer
int val;          // Variable to read value from the analog potentiometer pin

void setup() {
  // Attach servo
  Serial.begin(9600);
  Servo1.attach(9);
}

void loop() {
  // Read value of the potentiometer
  val = analogRead(pot_pin);

  // Scale to use with the servo (i.e. between 0 and 180)
  val = map(val, 0, 1023, 0, 180);

  // Set the new Servo position
  Servo1.write(val);

  // Print potentiometer value to serial monitor
  Serial.println(val);
}
