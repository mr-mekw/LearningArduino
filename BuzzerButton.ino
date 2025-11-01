/* Buzzer button
By Colton Murray, 10/31/2025
https://docs.arduino.cc/built-in-examples/digital/Button 
*/

// ints that won't change
const int buttonPin = 10;  // button is connected to GP10 on board
const int buzzPin = 20;    // buzzer is connected to GP20 on board
const int ledPin = 7;

// int that will change
int buttonState = 0;  // button is off as default
int buzzPitch = 100;

void setup() {
  // put your setup code here, to run once:
  // set buzzer as output for button's input
  pinMode(buzzPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);  // read the state of the push button value

  if (buttonState == HIGH) {
    tone(buzzPin, buzzPitch);  // turn buzzer on if button is pressed
    // fsr it will turn on, then buzzes continuously & stops when button is pressed, before eventually ending & no longer doing anything
    // turn it on (press 1), press button 8 times (buzzer stops while button is pressed), then (press 10) buzzer turns off completely & needs reset to buzz again
    digitalWrite(ledPin, HIGH);  // just to make sure things are being percieved by the machine - it does
    buttonState = LOW;
    // with the LED on, it only buzzes 4 times, so I think it might be a ram thing - nevermind, I reset it & it went 8 times again
    // holding the button down fucks it up fsr, LED stays on & buzzer stays off (kinda like it's using all of the ram)
  } else if (buttonState == LOW) {
    digitalWrite(ledPin, LOW);
    
  }
}
