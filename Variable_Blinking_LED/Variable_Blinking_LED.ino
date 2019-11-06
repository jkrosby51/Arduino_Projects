//Johnny Krosby
//Variable LED Blinker
//The light gradually get faster

int LED = 13;
int counter = 0;
bool ledState = false;
int delayVar = 2000;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("The light will blink on 5 times and then stop");
  pinMode(LED, OUTPUT);
}

void loop() {

  ledState = !ledState;
  digitalWrite(LED, ledState);

  if (ledState == 0)
  {
    Serial.println(" \t OFF");
    if (delayVar != 200) {
      delayVar -= 200;
    }
    Serial.println(delayVar);
  }
  else
  {
    Serial.print("ON");
  }
  counter++;
  //The if statements above tell you if the LED is on or off depending on the value of ledState in the serial monitor
  delay(delayVar);

// void setup only does anything on the first frame, void loop runs every frame
// A veriable s pretty muh an empty box that can have any value and you can call it at any time. it makes it easier to bring numbers around especially when those numbers are changed around like in a timer the time is carried on through a variable
// Mainly for troubleshooting
// https://www.arduino.cc/reference/en/#structure

}
