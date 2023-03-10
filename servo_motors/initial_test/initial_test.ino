#include <Servo.h>
int servo_pin = 9;

// Create a servo object
Servo Servo1;

void setup() {
  // Attach servo to the pin
  Servo1.attach(servo_pin);
}

void loop() {
  // Make servo go to 0 degrees
  Servo1.write(0);
  delay(500);
  // Make servo go to 90 degrees
  Servo1.write(90);
  delay(500);
  // Make servo go to 180 degrees
  Servo1.write(180);
  delay(500);
}
