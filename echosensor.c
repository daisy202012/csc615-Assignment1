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

 //set trig to delay 1 micosecond
 delay(500);

 //set trig to LOW
 digitalWrite(trig, HIGH);
  delay(0.05);

 //set trig to
 digitalWrite(trig, LOW);

clock_t start_t;
clock_t end_t;
double total_t;

//save start time 
while(digitalRead(echo) == 0){
    start_t = clock();
    //printf("Starting of the program, start_t = %ld\n", start_t);
}

//save time of arrival 
while(digitalRead(echo) == 1){
   end_t = clock();
   //printf("End of the big loop, end_t = %ld\n", end_t);
} 

//time difference between start and arrival 
total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
   //printf("Total time taken by CPU: %ld\n", total_t  );

return (total_t * 17000);

}


int main (void){

     if( wiringPiSetup() == -1){
       exit(0);
     
     }else{
        pinMode(echo, INPUT);
      pinMode(trig, OUTPUT);
    }
    while(1){
        double dist = distance();
        printf("Distance %f\n", dist);
        
    }
  return  0;
} 
