#include <Servo.h>

Servo myServo;

int btnPin = 2;
int bbtnPin = 3;
int servoPin = 11;
//Portable Motorman
//Paul and Ben and Johnny


int btnState;
int bbtnState;
int motorman = 90;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myServo.attach(servoPin);
  pinMode(btnState, INPUT);
  pinMode(bbtnState, INPUT);
  myServo.write(motorman);

}
void loop() {
  Serial.println(btnState);
  Serial.println(bbtnState);
  btnState = digitalRead(btnPin);
  bbtnState = digitalRead(bbtnPin);
  Serial.println(motorman);
  myServo.write(motorman);
  
  if (btnState == HIGH) {
    motorman = 100;

  }
  
  else if (bbtnState == HIGH) {
    motorman= 80;
  }
  
  else {
    motorman = 90;
  }

}
