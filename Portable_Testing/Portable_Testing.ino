const int buttonPin1 = 4;
const int buttonPin2 = 5;

// variables will change:
int buttonState1 = 0;         // variable for reading the pushbutton status
int buttonState2 = 0;

void setup() {
  // initialize the LED pin as an output:
  pinMode(buttonPin2, INPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin1, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin1);
  buttonState = digitalRead(buttonPin2);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  if (buttonState1 == HIGH) {
    // turn LED on:
    Serial.println("1");
  }
    if (buttonState2 == HIGH) {
    // turn LED on:
    Serial.println("2");
  }
}
