
#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>

#define RED 1 
#define YELLOW 4
#define GREEN 5 


  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
breadboard chart gpio
  while(1) {
    // Red
    digitalWrite(RED, HIGH);
    delay(3000);

    // Red and Yellow
    digitalWrite(YELLOW, HIGH);
    delay(1000);

    // Green
    digitalWrite(RED, LOW);
    digitalWrite(YELLOW, LOW);
    digitalWrite(GREEN, HIGH);
    delay(5000);

    // Yellow
    digitalWrite(GREEN, LOW);
    digitalWrite(YELLOW, HIGH);
    delay(2000);

    // Yellow off
    digitalWrite(YELLOW, LOW);
  }

  // Never reached, keeps the compiler happy.
  return 0;
}