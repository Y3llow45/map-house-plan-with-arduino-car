#include <SoftwareSerial.h>
SoftwareSerial HM10(0, 1);
char appData;  
String inData = "";
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
}

void loop(){
  HM10.listen();
  while (HM10.available() > 0) {
    appData = HM10.read();
    inData = String(appData);
  }
  if (Serial.available()) {
    delay(10);
    HM10.write(Serial.read());
  }
  if (forward) {
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW)
    
  }
  if (right) {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin3, HIGH);
    digitalWrite(motorPin4, LOW);
  }
  if (backward) {
    digitalWrite(motorPin1, LOW);
    digitalWrite(motorPin2, HIGH);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH)
  }
  if (left) {
    digitalWrite(motorPin1, HIGH);
    digitalWrite(motorPin2, LOW);
    digitalWrite(motorPin3, LOW);
    digitalWrite(motorPin4, HIGH);
  }
}
