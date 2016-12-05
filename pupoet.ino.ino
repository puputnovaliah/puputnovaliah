#include<SoftwareSerial.h>
SoftwareSerial mySerial(9, 10);
int sensor=7; //The output of PIR sensor connected to pin 7
int push_switch=6; // push button switch connected to pin 6
int buzzer=8; // buzzer connected at pin 8
int sensor_value; //variable to hold read sensor value
int sms_count=0;
void setup() {
  pinMode(sensor,INPUT); // configuring pin 7 as Input
  pinMode(push_switch,INPUT); // configuring pin 6 as Input
  pinMode(buzzer,OUTPUT); // configuring pin 8 as OUTPUT
mySerial.begin(9600);

}

void loop() {
Check_Burglar();// subroutine to check sensor status and activation of outputs
Check_Reset(); // subroutine to check if alarm reset switch pressed or not

}
