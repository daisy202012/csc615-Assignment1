
#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

#define RED 1 
#define YELLOW 4
#define GREEN 5 

  int main (void){
  
  wiringPiSetUp();
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
  }

  while(1) {
    // Red is on 
    digitalWrite(RED, HIGH);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, LOW);

    //pauses program for the amount of time (in miliseconds) specified as parameter 
    delay(5000);

    // Green is on 
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, HIGH);
    delay(6000);

    // Yellow is on
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, High);
    digitalWrite(GREEN, LOW);
    delay(1500);
  
  }
  // Never reached, keeps the compiler happy.
  return 0;
}