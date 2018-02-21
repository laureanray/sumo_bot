/*
 *  _______________
 * | SUMOBOT V. 1 |
 * | (c) 2018     |
 * ----------------
 * In compliance for COEN 3378 
 * Electronic Circuits Analyis and Design
 * 
 */
#include <Servo.h>
#include "motor.h"

// FOR THE IR SENSORS
int __1 = A0;
int __2 = A2;

int ret_v__1;
int ret_v__2;
void setup()
{
  Serial.begin(9600);
  Serial.println("Sumubot V. 1");


  pinMode(__1, OUTPUT);
  pinMode(__2, OUTPUT);
}
void loop()
{   
  motor(1, FORWARD, 90);
  motor(2, FORWARD, 90);
  motor(3, FORWARD, 90);
  motor(4, FORWARD, 90);
  delay(1000);
  motor(1, RELEASE, 0);
  motor(2, RELEASE, 0);
  motor(3, RELEASE, 0);
  motor(4, RELEASE, 0);
  delay(500);
  motor(1, FORWARD, 155);
  motor(2, BACKWARD, 155);
  motor(3, BACKWARD, 155);
  motor(4, FORWARD, 155);
  delay(1750);
  motor(1, RELEASE, 0);
  motor(2, RELEASE, 0);
  motor(3, RELEASE, 0);
  motor(4, RELEASE, 0);
  delay(500);
  
}

