/****************************************************************************************************************************************
* 
* Class: CSC-615-01 Spring 2020
*
* Name: Daisu Sanchez
*
* Student ID: 912740223 
* 
* Project: Assignment 1 - Traffic Light 
*
* File: Trafficlights.c
*
* Desription: The program created is a traffic light, using one Red, one Yellow, and oe Green LED.
* The Green LED should be on for 6 seconds, then the light should switch to the Yellow light which 
* should be on for 1.5 seconds, then switch to Red for 5 seconds. Then repeat the cycle 2 more times. 
*
*****************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

#define RED 1 
#define YELLOW 4
#define GREEN 5 

  int main (void){
  
  wiringPiSetup();
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

  int var = 0;
  
  while(var < 2) {

    // Green is on 
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, HIGH);
    delay(6000); 

    // Yellow is on
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, HIGH);
    digitalWrite(GREEN, LOW);
    delay(1500);

    // Red is on 
    digitalWrite(RED, HIGH);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, LOW);

    //pauses program for the amount of time (in miliseconds) specified as parameter 
    delay(5000);

    var++;

  }

    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, LOW);
    delay(1500);
  // Never reached, keeps the compiler happy.

  return  0;
}   