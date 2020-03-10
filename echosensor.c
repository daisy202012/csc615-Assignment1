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

//set trig to HIGH
 digitalWrite(trig, HIGH);

 //set trig to delay 1 micosecond
 delay(1000);

 //set trig to LOW
 digitalWrite(trig, LOW);


startTime = time();
endTime = time();

//save start time 
while(digitWrite(echo) == 0){
startTime = time();
}

//save time of arrival 
while(digitalWrite(echo) == 1){
endTime = time();
} 

//time difference between start and arrival 
timeElasped = startTime - endTime;

return distance = (timeElasped * 34300) / 2;

}


}

int main (void){

      wiringPiSetup();
      pinMode(echo, INPUT);
      pinMode(trig, OUTPUT);


    while(1){
        dist = distance();
        print ("Measured distance %0.1f cm\n ", dist)
        delay(1000);
    }
  return  0;
} 