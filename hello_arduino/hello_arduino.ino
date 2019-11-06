//Johnny Krosby
//Finite LED Blinker
//The light will blink 5 times and then stop

int LED = 13;
int counter = 0;
bool ledState = false;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("The light will blink on 5 times and then stop");
  pinMode(LED, OUTPUT);

}

void loop() {
  //digitalWrite() tells the Arduino Uno that the LED is plugged into the slot equal to the LED function(13 currently) and the second input says what amont of power to put into that slot due to the OUTPUT function in pinMode.
  //The LED blinks on pin X because we put the LED function in the left side of pinMode and digitalWrite and the left side is the x side of the input
  //Serial.Begin doesn't affect the LED due to it not being digital, but in the Serial monitor it makes all of the characters being printed by Serial.println() unknown.
  //The bigger the delay gets the slower the blink is because delay() is delaying the void loop() by however many miliseconds is written in the delay() command, so more delay freezes the void loop() for longer.

  if (counter <= 9) {
    ledState = !ledState;
    digitalWrite(LED, ledState);
    if (ledState == 0)
    {
      Serial.println(" \t OFF");
    }
    else
    {
      Serial.print("ON");
    }
    counter++;
    //The if statements above tell you if the LED is on or off depending on the value of ledState in the serial monitor
    delay(1000);
  }

  if (counter == 10)
  {
    counter++;
    digitalWrite(LED, LOW);
    Serial.println("The Light has blinked on 5 times");
    //It wasnt working so i just delayed it by 19 days at least for now
  }
 
  // if x is true then this happens
  // an else or else if statement is only required if you want something specific to happen if the if statement returns false. if there is no else or else if statement the it will default to having "else{}"
  // Ther are the same (as well as x += 1;)
  // What should your Serial Monitor display when your code runs once?
  // Fill in the blank: "A single equal sign is used to set a variable equal to a specific value, and a double equal sign is used to check whether or not a variable is set to a specific value".
  // https://www.arduino.cc/reference/en/#structure
  // 



}
