#include <Servo.h>
int servo_pin = 9;

// Create a servo object
Servo Servo1;

// Store servo position
int pos = 0;

void setup() {
  // Attach servo to the pin
  Servo1.attach(servo_pin);
}

void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // Sweep from 0 to 180 degrees
    // Step up 1 degree
    Servo1.write(pos);
    delay(15);
  }

  for (pos = 180; pos >= 0; pos -= 1) { // Sweep from 180 to 0 degrees 
    // Step down 1 degree
    Servo1.write(pos);
    delay(15);
  }

}
