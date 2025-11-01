/* LED button
By Colton Murray, 10/31/2025
https://docs.arduino.cc/built-in-examples/digital/Button */

// ints that won't change
const int buttonPin = 10;  // button is connected to GP10 on board
const int ledPin = 7;  // buzzer is connected to GP20 on board

// int that will change
int buttonState = 0;  // button is off as default

void setup() {
  // put your setup code here, to run once:
  // set buzzer as output for button's input
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);  // read the state of the push button value

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);  // turn buzzer on if button is pressed

  } else {
    digitalWrite(ledPin, LOW);  // else button is not pressed, turn buzzer off
  }
}
