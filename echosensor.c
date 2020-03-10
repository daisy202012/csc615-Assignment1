/****************************************************************************************************************************************
*
* Class: CSC-615-01 Spring 2020
*
* Name: Daisu Sanchez
*
* Student ID: 912740223
*
* Project: Assignment 2 - Tapeless Ruler - Echo Sensor
* File: echosensor.c
*
* Desription:
*
*****************************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <time.h>

//set GPIO pins
#define echo 22
#define trig 21

//measures distance
double distance (){

//set trig to LOW
 digitalWrite(trig, LOW);

 delay(2000);

 //set trig to HIGH
 digitalWrite(trig, HIGH);
 delay(0.01);
 
 //set trig to
 digitalWrite(trig, LOW);


time_t startTime;
time_t endTime;

//save start time
while(digitalRead(echo) == 0){
startTime = time(NULL);
}

//save time of arrival
while(digitalRead(echo) == 1){
endTime = time(NULL);
}

//time difference between start and arrival
time_t timeElasped = startTime - endTime;

return round(timeElasped * 343150, 2);

}



int main (void){

      wiringPiSetup();
      pinMode(echo, INPUT);
      pinMode(trig, OUTPUT);


    while(1){
        double dist = distance();
        printf ("Measured distance", dist);

       
    }
  return  0;
} 