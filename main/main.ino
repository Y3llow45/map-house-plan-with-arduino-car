//#include <SoftwareSerial.h>
////////BLUETOOTH/////////////
//SoftwareSerial HM10(0, 1);
//char appData;  
//char inData;
////////STEPPER-MOTOR/////////
#define STEPPER_PIN_1 13
#define STEPPER_PIN_2 12
#define STEPPER_PIN_3 11
#define STEPPER_PIN_4 4
int step_number = 0;
int stepsPerRevolution = 2048;
////////ULTRASONIC////////////
const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;
////////DC-MOTORS/////////////
const int motorPin1  = 5;
const int motorPin2  = 6;
const int motorPin3  = 7;
const int motorPin4  = 8;
bool forward = false;
bool right = false;
bool backward = false;
bool left = false;


void setup(){
  ////////BLUETOOTH/////////////
  //Serial.begin(9600);
  //HM10.begin(9600);
  ////////DC-MOTORS/////////////
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(motorPin3, OUTPUT);
  pinMode(motorPin4, OUTPUT);
  ////////ULTRASONIC////////////
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  ////////STEPPER-MOTOR/////////
  pinMode(STEPPER_PIN_1, OUTPUT);
  pinMode(STEPPER_PIN_2, OUTPUT);
  pinMode(STEPPER_PIN_3, OUTPUT);
  pinMode(STEPPER_PIN_4, OUTPUT);
  //////////////////////////////
}

void loop(){
  digitalWrite(13, HIGH);
}
