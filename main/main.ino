#include <SoftwareSerial.h>
SoftwareSerial HM10(0, 1);
char appData;  
char inData;
const int motorPin1  = 5;
const int motorPin2  = 6;
const int motorPin3  = 7;
const int motorPin4  = 8;
bool forward = false;
bool right = false;
bool backward = false;
bool left = false;

void setup(){
  Serial.begin(9600);
  HM10.begin(9600);
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
}

void loop(){
  digitalWrite(13, HIGH);
}
