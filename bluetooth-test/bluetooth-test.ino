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
  HM10.listen();
  while (HM10.available() > 0) {
    appData = HM10.read();
    inData = appData;
    Serial.print(inData);
  }
  if (Serial.available()) {
    delay(10);
    HM10.write(Serial.read());
  }
  if(inData == 'W'){
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
    delay(10);
  }
  if(inData == 'D'){
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
    delay(10);
  }
  if(inData == 'S'){
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
    delay(10);
  }
  if(inData == 'A'){
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
    delay(10);
  }
  if(inData == 'L'){
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, LOW);
    delay(10);
  }
}
