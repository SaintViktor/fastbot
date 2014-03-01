#include <Servo.h>
Servo Wheels;
/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 2;

// the setup routine runs once when you press reset:
void setup() {
Wheels.attach(9);
Wheels.write(0);
delay(1000);
Wheels.write(180);
delay(1000);
Wheels.write(90);
delay(1000);

// initialize the digital pin as an output.
  pinMode(led, OUTPUT);    
 digitalWrite(led,LOW);
delay(1500);
digitalWrite(led,HIGH);
}

// the loop routine runs over and over again forever:
void loop() {
     // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}  
