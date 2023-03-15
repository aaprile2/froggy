#include <Servo.h>

Servo Servo1;

void setup() {
  // Attach servo
  Serial.begin(9600);
  Servo1.attach(4);
}

void loop() {
  // Check if anything is in buffer
  while (Serial.available()) {
    // Read user input
    int val = Serial.readStringUntil("\r\n").toInt();

    // Set the new Servo position if within range
    if (val >=0 && val <= 180) {
      Servo1.write(val);
      Serial.println(val);
    }
  }
}