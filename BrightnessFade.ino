/* Brightness Fade
By Colton Murray, 10/31/2025
https://docs.arduino.cc/built-in-examples/basics/Fade */

int led = 7;
int brightness = 0;
int fadeAmount = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(led, brightness); // set the brightness

  brightness = brightness + fadeAmount; // change the brightness for the next run of the loop

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;  // reverse the direction of fading once it is fully dim OR fully bright
  }

  delay(30);  // delay for 30 ms
}
