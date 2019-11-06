#include <Servo.h>
//Johnny Krosby
//Two Buttons Two LEDS
//servo turns clockwise while button1 is down, servo turns counter-clockwise while button2 is down.

Servo myServo;

int servoPin = 8;
int buttonPin1 = 5;
int buttonPin2 = 4;
int ledPin1 = 12;
int ledPin2 = 13;
int val1 = 0;
int val2 = 0;
int servoAngle = 90;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(servoPin, OUTPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  myServo.attach(servoPin);
  myServo.write(90);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
}

void loop() {
  
  val1 = digitalRead(buttonPin1);
  Serial.print(val1);
  Serial.println(" = val1");
  val2 = digitalRead(buttonPin2);
  Serial.print("             ");
  Serial.print(val2);
  Serial.print(" = val2");
  Serial.print("         ");
  Serial.print(servoAngle);
  Serial.println(" = servoAngle");

  if (val1 == HIGH && servoAngle < 180)
  {
    digitalWrite(ledPin1, LOW);
    servoAngle=servoAngle+3;
    myServo.write(servoAngle);
    delay(1);
  }
  else{
        digitalWrite(ledPin1, HIGH);

  }
  if (val2 == HIGH && servoAngle > 0)
  {
    digitalWrite(ledPin2, LOW);
    servoAngle=servoAngle-3;
    myServo.write(servoAngle);
    delay(1);
  }
  else{
  digitalWrite(ledPin2, HIGH);
  }

}
//https://www.arduino.cc/en/tutorial/pushbutton
//https://create.arduino.cc/projecthub/SBR/working-with-two-leds-and-two-push-buttons-1d4182       wiring
