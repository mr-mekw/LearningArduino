/* Blink LED
By Colton Murray 10/31/2025
PicoBricks Quick Start Guide Tutorial */

void setup() {
  // put your setup code here, to run once:
  pinMode(7,OUTPUT); //initialize digital pin 7 as an output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(7,HIGH); //turn the LED on by making the voltage high
  delay(500); //wait for HALF second
  digitalWrite(7,LOW); //turn the LED on by making the voltage low
  delay(500);
}
