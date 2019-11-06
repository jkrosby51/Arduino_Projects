//Johnny Krosby
//Two Buttons Two LEDS
//light1 blinks while button1 is down, light2 blinks while button2 is down.

int buttonPin1 = 2;
int buttonPin2 = 4;
int buttonPin3 = 6;
int buttonPin4 = 8;

int ledPin1 = 9;
int ledPin2 = 3;
int ledPin3 = 5;
int ledPin4 = 7;

int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(buttonPin3, INPUT);
  pinMode(buttonPin4, INPUT);
}

void loop() {

  val1 = digitalRead(buttonPin1);
  Serial.print(val1);
  Serial.println(" = val1");
  val2 = digitalRead(buttonPin2);
  Serial.print("             ");
  Serial.print(val2);
  Serial.print(" = val2");
  val3 = digitalRead(buttonPin3);
  Serial.print("             ");
  Serial.print(val3);
  Serial.print(" = val3");
  val4 = digitalRead(buttonPin4);
  Serial.print("             ");
  Serial.print(val4);
  Serial.println(" = val4");
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
  
    if (val3 == HIGH)
  {
    digitalWrite(ledPin3, HIGH);
    delay(200);
    digitalWrite(ledPin3, LOW);
    delay(200);
  }
  else
  {
    digitalWrite(ledPin3, LOW);
  }
  
    if (val4 == HIGH)
  {
    digitalWrite(ledPin4, HIGH);
    delay(200);
    digitalWrite(ledPin4, LOW);
    delay(200);
  }
  else
  {
    digitalWrite(ledPin4, LOW);
  }

}
//https://www.arduino.cc/en/tutorial/pushbutton
//https://create.arduino.cc/projecthub/SBR/working-with-two-leds-and-two-push-buttons-1d4182       wiring
