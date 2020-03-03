
#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

#define RED 1 
#define YELLOW 4
#define GREEN 5 

  wiringPiSetUp();
  pinMode(1, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  for(;;) {
    // Red is on 
    digitalWrite(RED, HIGH);
    //pauses program for the amount of time (in miliseconds) specified as parameter 
    delay(5000);

    // Green is on 
    digitalWrite(GREEN, HIGH);
    delay(6000);

    // Yellow is on
   
    digitalWrite(YELLOW, High);
    delay(1500);

  }

  // Never reached, keeps the compiler happy.
  return 0;
}