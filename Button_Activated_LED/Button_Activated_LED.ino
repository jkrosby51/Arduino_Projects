//Johnny Krosby
//Two Buttons Two LEDS
//light1 blinks while button1 is down, light2 blinks while button2 is down.

int ledPin1 = 13;
int buttonPin1 = 8;
int ledPin2 = 12;
int buttonPin2 = 7;
int val1 = 0;
int val2 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {

  val1 = digitalRead(buttonPin1);
  Serial.print(val1);
  Serial.println(" = val1");
  val2 = digitalRead(buttonPin2);
  Serial.print("             ");
  Serial.print(val2);
  Serial.println(" = val2");
  if (val1 == HIGH)
  {
    digitalWrite(ledPin1, HIGH);
    delay(200);
    digitalWrite(ledPin1, LOW);
    delay(200);
  }
  else
  {
    digitalWrite(ledPin1, LOW);
  }
  if (val2 == HIGH)
  {
    digitalWrite(ledPin2, HIGH);
    delay(200);
    digitalWrite(ledPin2, LOW);
    delay(200);
  }
  else
  {
    digitalWrite(ledPin2, LOW);
  }

}
//https://www.arduino.cc/en/tutorial/pushbutton
//https://create.arduino.cc/projecthub/SBR/working-with-two-leds-and-two-push-buttons-1d4182       wiring
