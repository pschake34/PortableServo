//Portable Motorman
//Paul and Ben and Johnny
//Code for Portable Button-controlled Servo

#include <Servo.h>

Servo myServo;


int btnPin = 2;    //button turns servo clockwise
int bbtnPin = 3;   //button turns servo counterclockwise
int servoPin = 11;
int btnState;     //ButtonState1
int bbtnState;    //ButtonState2
//Servo
int motorman = 90;

void setup() {
  Serial.begin(9600);
  myServo.attach(servoPin);
  pinMode(btnState, INPUT);
  pinMode(bbtnState, INPUT);
  myServo.write(motorman);

}
void loop() {
  btnState = digitalRead(btnPin);
  bbtnState = digitalRead(bbtnPin);
  myServo.write(motorman);
  
  //print debug info to console 
  Serial.println(btnState);
  Serial.println(bbtnState);
  Serial.println(motorman);
 
  if (btnState == HIGH) { //switches direction to clockwise
    motorman = 100;

  }
  
  else if (bbtnState == HIGH) { //switches direction to counterclockwise
    motorman= 80;
  }
  
  else { //makes servo stop
    motorman = 90;
  }

}
